#include<iostream>
using namespace std;

void mergeSort(int array[], int n){
    int temp=array[1];

    for(int i=1; i<n; i++){
        int curr = i;
        int prev = i-1;

        while(prev>=0 && array[prev]>array[curr]){
            swap(array[prev], array[curr]);
            curr--;
            prev=curr-1;
        }
    }
}

int main(){
    int arr[10]={85, 11, 55, 69, 77, 1, 5, 9, 45, 35};

    mergeSort(arr, 10);

    for(int i=0; i<10; i++) cout<<arr[i]<<" ";
}