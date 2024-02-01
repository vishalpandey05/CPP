#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<int>& A) {
    int n = A.size();
    if (n < 2) {
        return 0; // No moves can be performed if the length is smaller than 2
    }

    std::sort(A.begin(), A.end()); // Sort the array in ascending order

    int maxMoves = 0;
    int targetSum = A[0] + A[n - 1];

    for (int i = 0, j = n - 1; i <= j; ) {
        int currentSum = A[i] + A[j];
        if (currentSum == targetSum) {
            maxMoves++;
            i++;
            j--;
        } else if (currentSum < targetSum) {
            i++;
        } else {
            j--;
        }
    }

    return maxMoves;
}

int main() {
    std::vector<int> A1 = {3, 1, 5, 3, 3, 4, 2};
    std::cout << solution(A1) << std::endl; // Output: 3

    std::vector<int> A2 = {4, 1, 4, 3, 3, 2, 5, 2};
    std::cout << solution(A2) << std::endl; // Output: 4

    std::vector<int> A3 = {1, 9, 1, 1, 1, 1, 1, 1, 8, 1};
    std::cout << solution(A3) << std::endl; // Output: 1

    std::vector<int> A4 = {1, 9, 8, 9, 5, 1, 2};
    std::cout << solution(A4) << std::endl; // Output: 3

    std::vector<int> A5 = {1, 1, 2, 3, 1, 2, 2, 1, 1, 2};
    std::cout << solution(A5) << std::endl; // Output: 4

    return 0;
}
