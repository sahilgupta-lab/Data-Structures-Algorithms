#include<iostream>
using namespace std;

class queue{
    int fIdx;
    int bIdx;
    int array[100];

    public:

    queue(){
        fIdx = 0;
        bIdx = -1;
    }

    void push(int val){
        array[++bIdx] = val;
    }

    int front(){
        if(size()==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return array[fIdx];
    }

    int back(){
        if(size()==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return array[bIdx];
    }

    void pop(){
        if(size()==0){
            cout<<"Queue is empty"<<endl;
        }
        fIdx++;
    }

    int size(){
        return bIdx - fIx + 1;
    }

    void display(){
        for(int i=fIdx; i<=bIdx; i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();
    q.display();
    
}