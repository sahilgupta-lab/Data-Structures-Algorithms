#include<iostream>
#include<climits>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }

    }
}

int main(){
    int arr[] = {5,2,3,4,1};
    insertionSort(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}