#include<iostream>
#include<climits>
using namespace std;

int main(){

    //Input Array
    int n,l1, l2, l3;
    l1 = INT_MIN, l2 = INT_MIN, l3 = INT_MIN;

    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++)    cin>>arr[i];

    //Largest
    for(int i = 0; i<n; i++){
        if(arr[i]>l1)   l1=arr[i];
    }

    //Second Largest
    for(int i = 0; i<n; i++){
        if(arr[i]>l2 && arr[i]<l1)   l2=arr[i];
    }

    //Third Largest
    for(int i = 0; i<n; i++){
        if(arr[i]>l3 && arr[i]<l1 && arr[i]<l2)   l3=arr[i];
    }

    //Print result
    cout<<"The three largest element of the array are "<<l1<<","<<l2<<" & "<<l3;

    return 0;
}