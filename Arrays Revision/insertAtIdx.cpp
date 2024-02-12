#include<iostream>
using namespace std;

void insertAtIdx(int idx, int element, int &n, int size, int array[]){
    if(idx<0 || idx>n){
        cout<<"Invalid index"<<endl;
        return;
    }
    if(size==n){
        cout<<"The array is full. Therefore, element cannot be inserted"<<endl;
        return;
    }
    for(int i=n-1; i>=idx; i--) array[i+1]=array[i];

    array[idx]=element;
    n++;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int element = 25; //element to be inserted
    int size = sizeof(arr)/sizeof(int); //element to be inserted
    int n = 5; //number of elements in the array
    int idx = 3;

    insertAtIdx(idx, element, n, size, arr);

    cout<<"The resultant array is: "<<endl;
    for(int i=0; i<n; i++)  cout<<arr[i]<<" ";
    cout<<endl;
}