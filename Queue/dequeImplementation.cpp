#include<iostream>
using namespace std;

class Node{
    public:
    Node *next;
    Node *prev;
    int val;

    Node(int val){
        next =NULL;
        prev = NULL;
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

    void addFront(int val){
        Node *a = new Node(val);
        if(Size==0){
            head = tail = a;
        }
        else{
            a->next = head;
            head->prev = a;
            head = a;
        }
        Size++;
    }

    void addRear(int val){
        Node *a = new Node(val);
        if(Size==0){
            head = tail = a;
        }
        else{
            tail->next = a;
            a->prev = tail;
            tail = a;
        }
        Size++;
    }

    int getFront(){
        if(Size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }

    int getRear(){
        if(Size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return tail->val;
    }

    void popFront(){
        if(Size==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        Size--;
        delete(temp); //prevents wastage of memory
    }

    void popRear(){
        if(Size==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
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
    q.addRear(10);
    q.addRear(20);
    q.addRear(30);
    q.addRear(40);
    q.addRear(50);
    q.addFront(5);

    q.display();

    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;

    q.popFront();
    q.popRear();
    q.display();
    
}