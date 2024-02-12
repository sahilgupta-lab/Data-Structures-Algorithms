#include<iostream>
using namespace std;

class Queue{
    int Size;
    int arr[100];
    int fIdx;
    int bIdx ;

    public:
    Queue(){
        Size = 0;
        fIdx = 0;
        bIdx = -1;
    }

    void push(int val){
        if(bIdx==100){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        arr[++bIdx] = val;
        Size++;
    }

    void pop(){
        if(Size==0){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        fIdx++;
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
        return arr[bIdx];
    }

    int size(){
        return Size;
    }

    void display(){
        for(int i=fIdx; i<=bIdx; i++)   cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}