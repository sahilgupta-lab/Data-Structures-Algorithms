//Lower bound mtlb target se closest smallest value from the array

#include<iostream>
using namespace std;

int lowerBoundLS(int arr[], int n, int target){
    int idx = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>target){
            idx = i;
            break;
        }
    }
    if(idx == -1) return arr[n-1];
    else    return arr[idx-1];
}

int lowerBoundBS(int arr[], int n, int target){
    int low = 0, high = n-1;

    while(low!=high){
        int mid = (low+high)/2;
        if(arr[mid]==target)    return arr[mid-1];
        else if(target<arr[mid])     high = mid-1;
        else    low = mid+1;
    }
    return arr[low];
}

int main(){
    int arr[] = {1,3,5,9,11,14,18,25,32};
    int n = sizeof(arr)/sizeof(int);

    cout<<lowerBoundBS(arr,n,27);
}