#include<iostream>
using namespace std;

template < class t>
class stack{
    t array[100];
    int idx;

    public:
    stack(){
        idx=-1;
    }

    void push(int val){
        if(idx==99){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        array[++idx] = val;
    }

    int size(){
        return idx+1;
    }

    void pop(){
        if(idx==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        idx--;
    }

    int top(){
        if(idx==-1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return array[idx];
    }
};

void print(stack<int> st){
    stack<int> temp;

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
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    print(st);
}