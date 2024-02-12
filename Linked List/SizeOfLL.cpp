#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    a->next=b;
    b->next=c;

    Node* temp = a;

    int count = 0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    cout<<"The number of nodes are "<<count<<endl;


}