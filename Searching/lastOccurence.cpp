#include<iostream>
using namespace std;

int lastOccurence(int arr[], int n, int target){
    int low = 0, high = n-1;

    while (low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            if(mid<n-1 && arr[mid+1]==target)   low = mid+1;
            else    return mid;
        }
        else if(arr[mid]<target)    low = mid + 1;
        else    high = mid - 1;
    }

    return -1;
}

int main(){

    int arr[] = {1,2,2,3,3,4,4,5,5,6,6,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<lastOccurence(arr, n, 7);
}