#include<iostream>
using namespace std;

int main(){

    //Input array
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin>>arr[i];
    
    int x;
    cout<<"Enter the value by which the array is to rotated: ";
    cin>>x;
    if (x>n) x = x%n;

    //Rotate array
    int rev[n];
    for(int i = x; i<n; i++) rev[i] = arr[i-x];
    for(int i = 0; i<x; i++) rev[i] = arr[n-x+i];

    //Print 
    cout<<"The rotation of the array by "<<x<<" is: ";
    for(int i = 0; i<n; i++) cout<<rev[i]<<" ";

    return 0;
}