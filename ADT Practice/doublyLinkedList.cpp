#include<iostream>
using namespace std;

class DoublyLinkedList;

class Node{
    int val;
    Node* next;
    Node* prev;

    public: 
    Node(int val){
        this->val = val;
        next = NULL;
        prev = NULL;
    }
    friend class DoublyLinkedList;
};

class DoublyLinkedList{
    Node *head;
    Node *tail;
    int size;

    public:

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertAtHead(int val){
        Node *a = new Node(val);

        if(size==0)     head = tail = a;
        else{
            a->next = head;
            head->prev = a;
            head = a;
        }
        size++;
    }

    void insertAtTail(int val){
        Node *a = new Node(val);

        if(size==0)     head = tail = a;
        else{
            tail->next = a;
            a->prev = a;
            tail = a;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx==0)      insertAtHead(val);
        else if (idx==size)       insertAtTail(val);
        else{
            Node *a = new Node(val);
            Node *temp = head;

            for(int i=0; i<idx-1; i++){
                temp = temp->next;
            }

            a->next = temp->next;
            temp->next->prev = a;
            temp->next = a;
            a->prev = temp;
            size++;
        }
    }

    void deleteHead(){
        if(size==0){
            cout<<"List in empty"<<endl;
            return;
        }
        head = head->next;
        head->prev = NULL;
        size--;
    }

    void deleteTail(){
        if(size==0){
            cout<<"List in empty"<<endl;
            return;
        }
        
        tail = tail->prev;
        tail->next = NULL;
        size--;
    }

    void deleteAtIdx(int idx){
        if(idx==0)      deleteHead();
        else if(idx==size-1)        deleteTail();
        else{
            Node *temp = head;
            for(int i=0; i<idx-1; i++)      temp=temp->next;
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }

    int getValueAtIdx(int idx){
        if(idx==0)  return head->val;
        else if(idx==size-1)    return tail->val;
        else{
            Node *temp = head;
            for(int i=0; i<idx; i++)    temp=temp->next;
            return temp->val;
        }
    }

    void display(){
        Node *temp = head;
        for(int i=0; i<size; i++){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    DoublyLinkedList l;
    l.insertAtTail(10);
    l.insertAtTail(20);
    l.insertAtTail(30);
    l.display();
    l.insertAtHead(5);
    l.insertAtTail(35);
    l.display();
    l.insertAtIdx(4,25);
    l.display();
    l.deleteHead();
    l.deleteTail();
    l.deleteAtIdx(3);
    l.display();
}