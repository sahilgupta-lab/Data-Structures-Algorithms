#include <iostream>
using namespace std;

int main(){

    int n, num=0;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin>>arr[i];

    for(int i = 0; i<n; i++){
        if(arr[i]==0) num++;
    }

    for(int i = 0; i<num; i++) arr[i] = 0;

    for(int i = num; i<n; i++) arr[i] = 1;

    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}