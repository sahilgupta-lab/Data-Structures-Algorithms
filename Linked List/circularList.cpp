#include<iostream>
using namespace std;

class Node{
public:
    Node* next;
    int val;

    Node(int v){
        val=v;
        next=nullptr;
    }
};

class circularList{
public:
    Node* head;
    Node* tail;
    int size=0;

    void deleteHead(){
        head=head->next;
        tail->next=head;
        size--;
    }

    void deleteTail(){
        Node *temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        tail=temp;
        tail->next=head;
        size--;
    }

    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size)  cout<<"Invalid Index"<<endl;
        else if(idx==0) deleteHead();
        else if(idx==size-1)    deleteTail();
        else{
            Node *temp = head;
            for(int i=1; i<=idx-1; i++) temp=temp->next;
            temp->next=temp->next->next;
            size--;
        }
    }

    void insertAtHead(int d){
        Node *temp = new Node(d);
        if(size==0){
            head=tail=temp;
            head->next=head;
        }
        else{
            temp->next=head;
            head=temp;
            tail->next=head;
        }
        size++;
    }

    void insertAtTail(int d){
        Node *temp = new Node(d);
        if(size==0){
            head=tail=temp;
            head->next=head;
        }
        else{
            tail->next=temp;
            tail=temp;
            tail->next=head;
        }
        size++;
    }

    void insertAtIdx(int idx, int d){
        if(idx<0 || idx>=size)  cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(d);
        else if(idx==size-1)    insertAtTail(d);
        else{
            Node *a = new Node(d);
            Node *temp = head;
            for(int i=1; i<=idx-1; i++) temp=temp->next;
            a->next=temp->next;
            temp->next=a;
            size++;
        }
    }

    void display(){
        if(size == 0){
            cout << "List is empty" << endl;
            return;
        }

        Node *temp = head;
        do {
            cout << temp->val << " ";
            temp = temp->next;
        } while (temp != head);
        
        cout << endl;
    }

    

};

int main(){
    circularList c;

    c.insertAtTail(10);
    c.insertAtTail(20);
    c.insertAtTail(30);
    c.insertAtTail(40);

    c.display();

    c.deleteAtIdx(1);
    c.display();

    c.insertAtIdx(1,25);
    c.display();
}

