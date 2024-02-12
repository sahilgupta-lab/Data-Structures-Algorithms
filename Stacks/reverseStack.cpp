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

int main(){
    stack<int> st;
    stack<int> temp1;
    stack<int> temp2;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);

    // while(st.size()>0){
    //     temp1.push(st.top());
    //     st.pop();
    // }

    // while(temp1.size()>0){
    //     temp2.push(temp1.top());
    //     temp1.pop();
    // }

    // while(temp2.size()>0){
    //     st.push(temp2.top());
    //     temp2.pop();
    // }

    // print(st);

    //alternate method using arrays

    int arr[st.size()];
    int n=st.size();

    for(int i=0; i<n; i++){
        arr[i]=st.top();
        st.pop();
    }

    for(int i=0; i<n; i++){
        st.push(arr[i]);
    }

    print(st);

}