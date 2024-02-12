#include<iostream>
using namespace std;

class Stack;

class Node{
    public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        next = NULL;
    }

    friend class Stack;
};

class Stack{
    public:
    Node *head;
    int Size;


    Stack(){
        head = NULL;
        Size = 0;
    }

    void push(int val){
        Node *a = new Node(val);

        if(!head)   head = a;
        else{
            a->next = head;
            head = a;
        }
        Size++;
    }

    void pop(){
        if(!head){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        head = head->next;
        Size--;
    }

    int top(){
        if(!head){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return head->val;
    }

    int size(){
        return Size;
    }

    bool empty(){
        return Size==0;
    }

};

void display(Stack st){
    if(st.empty()){
        cout<<endl;
        return;
    }
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
}

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    st.pop();
    display(st);
    
}