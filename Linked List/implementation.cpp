//Implement a Linked List class.
//The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display
//functions.

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next = NULL;
    }
};

class LinkedList{
    Node* head;
    Node* tail;
    int size=0;
    
    public:

    void insertAtEnd(int val){
        if(size==0){
            Node *temp = new Node(val);
            head=tail=temp;
        }
        else{
            Node*temp=new Node(val);
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertAtBeginning(int val){
        if(size==0){
            Node *temp = new Node(val);
            head=tail=temp;
        }
        else{
            Node*temp=new Node(val);
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx==0)  insertAtBeginning(val);
        else if(idx==size)   insertAtEnd(val);
        else if(idx<0 || idx>size)  cout<<"Invalid Index"<<endl;
        else{
            Node* temp = new Node(val);
            Node* t = head;
            for(int i=1; i<=idx-1; i++){
                t=t->next;
            }
            temp->next=t->next;
            t->next=temp;
            size++;
        }
    }

    int getIdx(int idx){
        Node* temp = head;
        if(idx<0 || idx>size){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
            else{for(int i=1; i<=idx; i++){
                temp=temp->next;
            }
            return temp->data;
        }
    }

    void deleteHead(){
        if(size==0) cout<<"List is empty"<<endl;
        else if(size==1){
            head=tail=NULL;
            size--;
        }    
        else{
            head=head->next;
            size--;
        }
        
    }

    void deleteTail(){
        if(size==0) cout<<"List is empty"<<endl;
        else if(size==1){
            head=tail=NULL;
            size--;
        }  
        else{
            Node* temp = head;
            while(temp->next!=tail){
                temp= temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }
        
    }

    void deleteAtIdx(int idx){
        if(idx==0)  deleteHead();
        else if(idx==size-1) deleteTail();
        else{
            Node* temp=head;
            for(int i=1; i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }

    }

    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }


};

int main(){
    LinkedList l1;
    l1.insertAtEnd(10);
    l1.insertAtEnd(20);
    l1.insertAtEnd(30);
    l1.insertAtEnd(40);
    l1.insertAtEnd(50);
    l1.display();
    l1.insertAtBeginning(5);
    l1.display();
    l1.insertAtIdx(2,15);
    l1.display();
    l1.deleteHead();
    l1.display();
    l1.deleteTail();
    l1.display();
    l1.deleteAtIdx(2);
    l1.display();
    cout<<l1.getIdx(2);



}
