//Given an array, predict if the array contains duplicates or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the arrray: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    bool duplicate = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                duplicate=1;
                break;
            }
        }
    }

    if(duplicate)   cout<<"The array contains duplicates"<<endl;
    else    cout<<"The array does not contain duplicates"<<endl;
}