#include<iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int data;

    Node(int data){
        this->data=data;
        next= NULL;
    }
};

void display(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(Node*head, int val){
    if(val==head->data){
        head=head->next;
    }
    else{
        Node*temp=head;
        while(temp->next->data!=val){
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
}

int main(){
    Node *a= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);
    Node *e= new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    deleteNode(a,40);
    display(a);
    deleteNode(a,10);
    display(b);



}