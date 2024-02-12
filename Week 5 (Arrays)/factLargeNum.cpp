//Find the factorial of a large number

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++)    cin>>arr[i];

    int largeNum = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[i]>largeNum) largeNum = arr[i];
    }

    int fact = 1;

    for(int i = largeNum; i>0; i--){
        fact*=i;
    }

    cout<<"The factorial of the largest number in the array is "<<fact<<endl;
}