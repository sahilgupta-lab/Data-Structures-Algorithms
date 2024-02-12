//WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    int value = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]<=value)   value+=1;
        else    break;
    }

    cout<<"The smallest mising positive element is "<<value<<endl;
}