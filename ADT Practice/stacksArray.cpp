#include<iostream>
using namespace std;

class Stack{
    int array[3];
    int s;

    public:

    Stack(){
        s = 0;
    }

    void push(int val){
        if(s == 3){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        array[s++] = val;
    }

    void pop(){
        if(s == 0){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        s--;
    }

    int top(){
        if(s == 0){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return array[s-1];
    }

    int size(){
        return s;
    }

    bool empty(){
        return s==0;
    }

    void display(){
        for(int i=0; i<s; i++)   cout<<array[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    st.pop();
    st.display();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;


}