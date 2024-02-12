#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1])     swap(arr[j], arr[j+1]);
            flag = false;
        }
        if(flag)    break;      //swap did not happen
    }
}

int main(){

    int arr[] = {5,2,4,7,1,9,10};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);
    for(int i=0; i<n; i++)      cout<<arr[i]<<" ";
    cout<<endl;
}