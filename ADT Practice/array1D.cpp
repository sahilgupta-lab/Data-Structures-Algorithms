#include<iostream>
using namespace std;

class Array1D{
    int size;
    int *arr;

    public:

    Array1D(int size){
        this->size = size;
        arr = new int[size];
    }

    void setValue(int idx, int val){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return;
        }
        arr[idx] = val;
    }

    int getValue(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        return arr[idx];
    }

    void deleteElement(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return;
        }
        for(int i=idx+1; i<size; i++){
            arr[i-1] = arr[i];
        }
        size--;
    }

    void displayArray(){
        for( int i=0; i<size; i++)  cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Array1D arr(5);
    arr.setValue(0,10);
    arr.setValue(1,20);
    arr.setValue(2,30);
    arr.setValue(3,40);
    arr.setValue(4,50);
    arr.displayArray();
    cout<<arr.getValue(2)<<endl;
    arr.deleteElement(2);
    arr.displayArray();

}