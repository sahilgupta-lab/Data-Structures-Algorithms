//If an array arr contains n elements, then check if the given array is a palindrome or not .

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    int flag = 1;

    for(int i=0; i<n/2; i++){
        if(arr[i]!=arr[n-i-1]){
            flag=0;
            break;
        }
    }

    if(flag)    cout<<"The array is a palindrome"<<endl;
    else    cout<<"The array is not a palindrome"<<endl;
}