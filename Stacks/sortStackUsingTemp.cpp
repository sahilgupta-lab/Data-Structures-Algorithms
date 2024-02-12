#include<iostream>
#include<stack>
using namespace std;

void sortStack(stack<int> &st){
    stack<int> temp;

    while(!st.empty()){
        int x = st.top();
        st.pop();

        if(temp.empty())    temp.push(x);
        else{
            while(temp.size()>0 && x>temp.top()){
                st.push(temp.top());
                temp.pop();
            }
            temp.push(x);
        }
    }

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}

void printStack(stack<int> st){
    if(st.empty())  return;
    int x = st.top();
    st.pop();
    printStack(st);
    cout<<x<<" ";
}

int main(){
    stack<int> st;
    st.push(50);
    st.push(10);
    st.push(30);
    st.push(40);
    st.push(20);

    printStack(st);
    cout<<endl;

    sortStack(st);
    printStack(st);

}