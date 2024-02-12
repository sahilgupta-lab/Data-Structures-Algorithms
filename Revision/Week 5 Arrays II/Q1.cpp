//Count the number of elements strictly greater than x.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    int x;
    cout<<"Enter the number: ";
    cin>>x;

    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>x)    count++;
    }

    cout<<"The number of elements in the array greater than "<<x<<" is "<<count<<endl;
}