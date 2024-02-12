#include<iostream>
using namespace std;

class Queue{
    int capacity;
    int *arr;
    int fIdx;
    int bIdx ;
    int Size;

    public:
    Queue(){
        capacity = 5;
        Size = 0;
        fIdx = 0;
        bIdx = -1;
        arr = new int[capacity];
    }

    void push(int val){
        if(Size==capacity){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        if(bIdx == capacity-1)  bIdx = -1;
        arr[++bIdx] = val;
        Size++;
    }

    void pop(){
        if(Size==0){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        fIdx++;
        if(fIdx == capacity)  fIdx = 0;
        Size--;
    }

    int front(){
        if(Size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[fIdx];
    }

    int back(){
        if(Size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(bIdx == -1)  return arr[capacity-1];
        return arr[bIdx];
    }

    int size(){
        return Size;
    }

    bool empty(){
        return Size==0;
    }
};

void display(Queue q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    q.push(60);
    display(q);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}