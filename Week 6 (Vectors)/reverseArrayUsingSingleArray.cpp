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

    //Limits
    int a,b;
    cout<<"Enter the indexes to start and stop the reversal: ";
    cin>>a>>b;

    //Reverse
    for(int i = a; i<=b; i++, b--){
        int x;
        x = arr[i];
        arr[i]=arr[b];
        arr[b] = x;
    }


    //Print 
    cout<<"The reverse of the array is: ";
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}