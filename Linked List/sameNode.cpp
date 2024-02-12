//Given the head of a linked list and an integer val , remove all the nodes of the linked list that has
//Node.val == val , and return the new head.

#include<iostream>
using namespace std;


class Node{
public:
    int val;
    Node* next;

    Node(int v){
        val=v;
        next=nullptr;
    }

    void display(Node* head){
        while(head!=nullptr){
            cout<<head->val<<" ";
            head=head->next;
        }
    }

};

Node* removeVal(Node* head){
    Node* temp=head;
    
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;




}