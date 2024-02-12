#include<iostream>
#include<stack>
using namespace std;

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


int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);


    pushAtBottom(st, 5);

    print(st);
}