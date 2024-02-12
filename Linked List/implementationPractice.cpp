#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;

    ListNode(int x){
        val=x;
        next=nullptr;
    }
};

class LinkedList{
    int size=0;
    ListNode *head;
    ListNode *tail;

    public:

    void insertAtHead(int data){
        ListNode *a = new ListNode(data);

        if(size==0) head=tail=a;
        else{
            a->next=head;
            head=a;
        }
        size++;
    }

    void insertAtTail(int data){
        ListNode *a = new ListNode(data);

        if(size==0) head=tail=a;
        else{
            tail->next=a;
            tail=a;
        }
        size++;
    }

    void insertAtIdx(int idx, int data){
        if(idx<0 || idx>size){
            cout<<"Invalid index"<<endl;
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
        ListNode *temp=head;
        for(int i=0; i<=idx-2; i++){
            temp=temp->next;
        }
        a->next=temp->next;
        temp->next=a;
        size++;
    }

    void deleteHead(){
        head=head->next;
        size--;
    }

    void deleteTail(){
        ListNode *temp = head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=nullptr;
        tail=temp;
        size--;
    }

    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"Linked List is empty"<<endl;
            return;
        }

        if(idx<0 || idx>=size){
            cout<<"Invalid index"<<endl;
            return;
        }

        if(idx==0){
            deleteHead();
            return;
        }

        if(idx==size-1){
            deleteTail();
            return;
        }

        ListNode *temp=head;
        for(int i=0; i<=idx-2; i++){
             temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }

    void display(){
        ListNode *temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList l1;

    l1.insertAtTail(10);
    l1.insertAtTail(20);
    l1.insertAtTail(30);
    l1.insertAtTail(40);
    l1.insertAtTail(50);

    l1.display();

    l1.insertAtHead(5);
    l1.display();

    l1.insertAtIdx(3,25);
    l1.display();

    l1.deleteHead();
    l1.display();

    l1.deleteTail();
    l1.display();

    l1.deleteAtIdx(3);
    l1.display();
}