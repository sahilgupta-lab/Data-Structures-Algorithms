//Find the minimum value out of all elements in the array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the arrray: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    int minValue = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]<minValue) minValue=arr[i];
    }

    cout<<"The minimum value out of all elements in the array is "<<minValue<<endl;
}