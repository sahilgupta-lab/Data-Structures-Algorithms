#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int topElement = st.top();
    st.pop();
    pushAtBottom(st, val);
    st.push(topElement);
}

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

void reverse(stack<int> &st){
    if(st.size()==1)    return;
    int topElement = st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st, topElement);
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);


    reverse(st);

    print(st);
}