#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;

    Node(int v){
        val = v;
        next = NULL;
    }
};

class Queue{
    Node *head;
    Node *tail;
    int size;

    public:

    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push(int val){
        Node *a = new Node(val);

        if(size==0)     head = tail = a;
        else{
            tail->next = a;
            tail = a;
        }
        size++;
    }

    void pop(){
        if(size==0){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        head = head->next;
        size--;
    }

    int front(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }

    int back(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return tail->val;
    }

    void display(){
        Node *temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
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
