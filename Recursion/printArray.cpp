#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    if(n==0)    return;
    printArr(arr, n-1);
    cout<<arr[n-1]<<" ";
}

int main(){
    int nums[] = {1,2,3,4,5};
    printArr(nums, 5);
}