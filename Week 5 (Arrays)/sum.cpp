#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++)    cin>>arr[i];

   
    int max = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[i]>arr[0]) flag=1; break;
    }

    if(flag==1) cout<<x<<" is an element of the array"; 
    else cout<<x<< " is not an element of the array";
            
}
       


