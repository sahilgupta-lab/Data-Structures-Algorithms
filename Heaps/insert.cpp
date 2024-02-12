#include<iostream>
using namespace std;

class MaxHeap{
    public:
    int arr[100];
    int size;

    MaxHeap(){
        size=0;
    }

    void insert(int val){
        int idx = ++size;
        arr[idx]=val;

        while(idx>1 && arr[idx]>arr[idx/2]){    //parent = idx/2
            swap(arr[idx], arr[idx/2]);
            idx=idx/2;
        }
    }

    void deleteRoot(){
        if(size==0){
            cout<<"Heap is empty"<<endl;
            return;
        }

        arr[1]=arr[size];
        size--;

        int idx = 1;
        while(idx<size){
            int leftChild = 2*idx;
            int rightChild = 2*idx+1;

            int biggerChild = arr[leftChild]>arr[rightChild]? leftChild : rightChild;

            if(arr[biggerChild]>arr[idx]){
                swap(arr[biggerChild], arr[idx]);
                idx=biggerChild;
            }
            else    return;
        }
    }

    void display(){
        for(int i=1; i<=size; i++)   cout<<arr[i]<<" ";
        cout<<endl;
    }
};
//maxHeap
void heapify(int array[], int idx, int n){
    int largest = idx;
    int leftChild = 2*idx;
    int rightChild = 2*idx+1;

    if(leftChild<n && array[leftChild]>array[largest]){
        largest = leftChild;
    }
    if(rightChild<n && array[rightChild]>array[largest]){
        largest = rightChild;
    }

    if(largest!=idx){
        swap(array[largest], array[idx]);
        heapify(array, largest, n);
    }
}

int main(){
    MaxHeap h;

    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);

    h.display();

    h.deleteRoot();
    h.display();

    int arr[]={50, 63, 67, 72, 85, 24, 98, 23, 57, 13};
    int n=6;
    for(int i=n/2; i>0; i--){
        heapify(arr, i, n);
    }
    for(int i=1; i<10; i++)  cout<<arr[i]<<" ";
}