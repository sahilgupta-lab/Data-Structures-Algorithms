#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode(int val){
        this->val=val;
        next=nullptr;
        prev=nullptr;
    }
};

class DoublyLinkedList{
    public:
    ListNode *head;
    ListNode *tail;
    int size;

    DoublyLinkedList(){
        size=0;
    }

    void insertAtHead(int data){
        ListNode *a = new ListNode(data);

        if(size==0) head=tail=a;
        else{
            a->next=head;
            head->prev=a;
            head=a;
        }
        size++;
    }

    void insertAtTail(int data){
        ListNode *a = new ListNode(data);

        if(size==0) head=tail=a;
        else{
            tail->next=a;
            a->prev=tail;
            tail=a;
        }
        size++;
    }

    void insertAtIdx(int idx, int data){
        if(idx<0 || idx>size){
            cout<<"Invalid Index"<<endl;
            return;
        }
        if(idx==0){
            insertAtHead(data);
            return;
        }
        if(idx==size){
            insertAtTail(data);
            return;
        }
        ListNode *a = new ListNode(data);
        ListNode *temp = head;

        for(int i=0; i<=idx-2; i++) temp=temp->next;

        a->next=temp->next;
        a->next->prev=a;
        temp->next=a;
        a->prev=temp;
        size++;
    }

    void display(){
        ListNode *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    DoublyLinkedList d;
    d.insertAtTail(10);
    d.insertAtTail(20);
    d.insertAtTail(30);
    d.insertAtTail(40);
    d.insertAtTail(50);

    d.display();
}