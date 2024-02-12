#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int x;
    cout<<"Enter the number: ";
    cin>>x;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++)    cin>>arr[i];


    for(int a = 0; a<n; a++ ){
        for(int b = a+1; b<n; b++){
            for(int c = b+1; c<n; c++){
                 if(arr[a] + arr[b] + arr[c] == x ){
                    cout<<"("<<arr[a]<<","<<arr[b]<<","<<arr[c]<<")"<<" ";
                }  
            }
        }
    }
    
       
    
}