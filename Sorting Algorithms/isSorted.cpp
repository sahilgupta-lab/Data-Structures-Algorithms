#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1])     return false;
    }
    return true;
}

int main(){

    int arr[] ={1,2,3,6,5,6};

    cout<<isSorted(arr, 6);
}