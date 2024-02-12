#include<iostream>
using namespace std;

void delElementAtIdx(int array[], int size, int &n, int idx){
    if(idx<0 || idx>=n){
        cout<<"Invalid Index"<<endl;
        return;
    }
    if(n==0){
        cout<<"Array is empty"<<endl;
        return;
    }

    for(int i=idx+1; i<n; i++){
        array[i-1]=array[i];
    }
    n--;
}

int main(){
    int arr[100]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int n=5;
    int idx=2;

    delElementAtIdx(arr, size, n, idx);

    cout<<"The resultant array is: "<<endl;
    for(int i=0; i<n; i++)  cout<<arr[i]<<" ";
    cout<<endl;
}