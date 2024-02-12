#include<iostream>
#include<climits>
using namespace std;

int maxArray(int arr[], int n, int idx, int max){
    if(idx==n)  return max;
    if(arr[idx]>max)    max=arr[idx];
    maxArray(arr, n, idx+1, max);
}

int maxArray(int arr[], int n, int idx){
    if(idx==n)  return INT_MIN;
    return max(arr[idx], maxArray(arr, n, idx+1));
}

int main(){
    int nums[]= {1,2,3,4,5,6,7,8};

    cout<<maxArray(nums, 8, 0);
}