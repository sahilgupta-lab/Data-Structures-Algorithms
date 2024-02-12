#include<iostream>
using namespace std;

void insertAtEnd(int array[], int size, int &n, int element){
    if(n==size){
        cout<<"The array is full. Therefore, element cannnot be inserted at the end."<<endl;
        return;
    }
    array[n]=element;
    n++;
}

int main(){
    int arr[7] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int); //size of array
    int n=5; //number of elements in the array
    int element=6; //element to be inserted 


    insertAtEnd(arr, size, n, element);

    for(int i=0; i<n; i++)  cout<<arr[i]<<" ";
    cout<<endl;
}