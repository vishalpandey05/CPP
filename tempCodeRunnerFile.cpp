#include <iostream>
using namespace std;

void reverse(int arr[], int i, int j){
int temp= arr [i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
}
void print (int arr[], int n){
for (int i=0;i<n;i++)
cout <<arr[i];
}

int main (){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

reverse (arr,0,n-1);
print (arr,n);
    return 0;
}