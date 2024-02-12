#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        next=nullptr;
    }
};


class stack{
    Node* head;
    int stackSize;

    public:
    stack(){
        head = nullptr;
        stackSize = 0;
    }

    void push(int x){
        Node *a = new Node(x);
        if(stackSize==0)     head=a;
        else{
            a->next=head;
            head = a;
        }    
        stackSize++;
    }

    void pop(){
        head=head->next;
        stackSize--;
    }

    int top(){
        if(stackSize==0){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return head->val;
    }

    int size(){
        return stackSize;
    }
};

void print(stack st){
    stack temp;

    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}

int main(){
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    print(st);

    st.pop();
    print(st);

    cout<<st.top();
    cout<<st.size();
}