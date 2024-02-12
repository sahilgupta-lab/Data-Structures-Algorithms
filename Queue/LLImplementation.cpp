#include<iostream>
using namespace std;

class Node{
    public:
    Node *next;
    int val;

    Node(int val){
        next =NULL;
        this->val = val;
    }
};

class queue{
    Node *head;
    Node *tail;
    int Size;

    public:

    queue(){
        Size=0;
        head = NULL;
        tail = NULL;
    }

    void push(int val){
        Node *a = new Node(val);
        if(Size==0){
            head = tail = a;
        }
        else{
            tail->next = a;
            tail = a;
        }
        Size++;
    }

    int front(){
        if(Size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }

    int back(){
        if(Size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return tail->val;
    }

    void pop(){
        if(Size==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        Size--;
        delete(temp); //prevents wastage of memory
    }

    int size(){
        return Size;
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