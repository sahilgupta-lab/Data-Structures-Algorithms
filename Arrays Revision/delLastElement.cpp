#include<iostream>
using namespace std;

void delLastElement(int array[], int size, int &n){
    if(n==0){
        cout<<"Array is empty"<<endl;
        return;
    }
    n--;
}

int main(){
    int arr[10] = {1,2,3};
    int size = sizeof(arr)/sizeof(int); //size of the array
    int n = 3; //number of elements in the array

    delLastElement(arr, size, n);

    cout<<"The resultant array is: "<<endl;
    for(int i=0; i<n; i++)  cout<<arr[i]<<" ";
    cout<<endl;
}