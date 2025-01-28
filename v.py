from ultralytics import YOLO
import cv2
import cvzone
import math
import time
import torch
import torch.nn as nn
from sklearn.decomposition import PCA
import numpy as np
import matplotlib.pyplot as plt

# Load the trained YOLO model
model = YOLO('runs/detect/train/weights/best.pt')

# Initialize video capture (0 for webcam)
cap = cv2.VideoCapture(0)
cap.set(3, 1280)  # Set webcam width
cap.set(4, 720)   # Set webcam height

# Class names (only plastic waste)
classNames = ["bottle"]

prev_frame_time = 0
new_frame_time = 0


# Define a max pooling layer
max_pool = nn.MaxPool2d(kernel_size=2, stride=2)

# Function to apply max pooling
def apply_max_pooling(image):
    img_tensor = torch.from_numpy(image).permute(2, 0, 1).unsqueeze(0).float()  # Convert to tensor and add batch dimension
    pooled_img_tensor = max_pool(img_tensor)  # Apply max pooling
    pooled_img = pooled_img_tensor.squeeze(0).permute(1, 2, 0).numpy()  # Convert back to numpy
    return pooled_img.astype('uint8')

# Function to compress the image using WebP format
def compress_image(image, quality=50):
    encode_param = [int(cv2.IMWRITE_WEBP_QUALITY), quality]
    _, encoded_image = cv2.imencode('.webp', image, encode_param)
    decoded_image = cv2.imdecode(encoded_image, 1)
    return decoded_image

# Function to apply PCA on the image
def apply_pca(image, n_components=3):
    # Reshape the image to 2D array (height * width, channels)
    img_reshaped = image.reshape(-1, 3)
    
    # Apply PCA
    pca = PCA()
    pca.fit(img_reshaped)
    
    # Retain only the specified number of components
    pca = PCA(n_components=n_components)
    img_pca = pca.fit_transform(img_reshaped)
    
    # Reshape back to original image dimensions
    img_pca_reshaped = img_pca.reshape(image.shape[0], image.shape[1], n_components)
    return img_pca_reshaped.astype('uint8')

while True:
    new_frame_time = time.time()
    success, img = cap.read()  # Read frame from webcam

    # Step 1: Resize the image
    img_resized = cv2.resize(img, (640, 360))  # Resize image to desired dimensions

    # Step 2: Compress the image
    compressed_img = compress_image(img_resized, quality=50)  # Compress image with quality factor

    # Step 3: Apply max pooling to the image
    pooled_img = apply_max_pooling(compressed_img)

    # Step 4: Crop to ROI (if needed, adjust ROI accordingly)
    roi_x, roi_y, roi_w, roi_h = 0, 360, 1280, 360  # Define ROI (example)
    roi_img = pooled_img[roi_y:roi_y + roi_h, roi_x:roi_x + roi_w]

    # Step 5: Apply PCA to the ROI image and visualize variance
    roi_img_pca = apply_pca(roi_img, n_components=3)  # Adjust components as needed

    # Perform detection on the PCA processed image
    results = model(roi_img_pca, stream=True)

    for r in results:
        boxes = r.boxes
        for box in boxes:
            # Bounding Box (adjust coordinates to the full frame)
            x1, y1, x2, y2 = box.xyxy[0]
            x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)
            w, h = x2 - x1, y2 - y1
            
            # Shift coordinates to match original image
            x1 += roi_x
            y1 += roi_y
            x2 += roi_x
            y2 += roi_y

            # Draw bounding box and confidence on the full image
            cvzone.cornerRect(img, (x1, y1, w, h))

            # Confidence
            conf = math.ceil((box.conf[0] * 100)) / 100

            # Apply a confidence threshold (e.g., 0.5)
            if conf > 0.5:
                cvzone.putTextRect(img, f'{classNames[0]} {conf}', (max(0, x1), max(35, y1)), scale=1, thickness=1)

    # Calculate FPS
    fps = 1 / (new_frame_time - prev_frame_time)
    prev_frame_time = new_frame_time
    print(f"FPS: {fps}")

    # Display the frame with detections
    cv2.imshow("Plastic Waste Detection", img)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
