//push zeroes to the end while maintaining the relative order of the elements

#include<iostream>
using namespace std;

void pushZeroes(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0 && arr[j+1]!=0)     swap(arr[j], arr[j+1]);
        }
    }
}

int main(){
    int arr[] = {1,0,3,8,0,9,7,0,3,0,9,1,0};
    int n = sizeof(arr)/sizeof(int);

    pushZeroes(arr, n);

    for(int i=0; i<n; i++)  cout<<arr[i]<<" ";
    cout<<endl;
}