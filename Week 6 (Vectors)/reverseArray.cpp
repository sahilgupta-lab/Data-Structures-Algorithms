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

    //Reverse array
    int rev[n];
    for(int i = 0; i<n; i++) rev[n-i-1] = arr[i];

    //Print 
    cout<<"The reverse of the array is: ";
    for(int i = 0; i<n; i++) cout<<rev[i]<<" ";

    return 0;
}