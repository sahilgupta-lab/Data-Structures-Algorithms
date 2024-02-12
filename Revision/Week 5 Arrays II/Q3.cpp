//Check if the given array is sorted or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    bool flag=1;

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag=0;
            break;
        }
    }

    if(flag)    cout<<"The array is sorted"<<endl;
    else    cout<<"The array is not sorted"<<endl;
}