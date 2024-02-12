#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node *prev;

    Node(int val){
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

class Deque{
    Node *head;
    Node *tail;
    int size;

    public:

    Deque(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push_back(int val){
        Node *a = new Node(val);

        if(size==0)     head = tail = a;
        else{
            tail->next = a;
            a->prev = tail;
            tail = a;
        }
        size++;
    }

    void push_front(int val){
        Node *a = new Node(val);

        if(size==0)     head = tail = a;
        else{
            a->next = head;
            head->prev = a;
            head = a;
        }
        size++;
    }

    void pop_front(){
        if(size==0){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        if(size==1){
            head = tail = NULL;
            size--;
            return;
        }
        head = head->next;
        head->prev = NULL;
        size--;
    }

    void pop_back(){
        if(size==0){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        if(size==1){
            head = tail = NULL;
            size--;
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
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
    Deque q;
    q.push_back(10);
    q.push_back(20);
    q.push_front(5);
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop_front();
    q.pop_back();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}