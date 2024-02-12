//Remove kth element from top in a given stack.

#include<iostream>
#include<stack>
using namespace std;

void removeKthElementFromTop(stack<int> &st, int k){
    stack<int> temp;

    for(int i=1; i<st.size(); i++){
        temp.push(st.top());
        st.pop();
    }

    st.pop();

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void print(stack<int> st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    print(st);
    cout<<x<<" ";
}

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
    cout<<endl;

    removeKthElementFromTop(st, 3);

    print(st);
}