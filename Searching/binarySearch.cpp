#include<iostream>
using namespace std;

int binarySearch(int arr[], int element, int n){
    int start = 0, end = n-1;

    while(start<=end){
        int middle = (start+end)/2;
        if (arr[middle] == element)     return middle;
        else if (element < arr[middle])     end = middle - 1;
        else if (element > arr[middle])     start = middle + 1;
    }

    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<binarySearch(arr, 9, n);
}