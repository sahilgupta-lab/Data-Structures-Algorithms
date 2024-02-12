//Check if the given array is almost sorted. (elements are at-most one position away).

#include<iostream>
using namespace std;

bool isAlmostSorted(int arr[], int n){
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[i])   count++;
        }
        int aIdx = n - count - 1;
        if( abs( i - aIdx ) > 1)    return false;
    }

    return true;
}

bool isSorted(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1])     return false;
    }
    return true;
}

bool isAlmostSortedOptimized(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
            i++;
        }
    }
    return isSorted(arr, n);
}

int main(){
    int arr[] = {4,2,7,9,8};
    int n = sizeof(arr)/sizeof(int);

   cout << isAlmostSortedOptimized(arr, n)<<endl;
}