#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    int start=0, end=n-1;

    while(start<=end){
        if(arr[start]==0)   start++;
        else if(arr[end]==1)     end--;
        else if(arr[start]==1 && arr[end]==0){
            arr[start]=0;
            arr[end]=1;
            start++;
            end--;
        }
    }

    for(int i=0; i<n; i++)  cout<<arr[i]<<" "; 
}