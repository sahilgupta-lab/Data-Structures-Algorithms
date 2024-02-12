#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseK(queue <int> &q, int k){
    int n = q.size();
    if(k>n){
        cout<<"k cannot be greater than the size of the queue"<<endl;
        return;
    }
    if(k==0)    return;
    
    stack<int> st;

    for(int i=0; i<k; i++){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    for(int i=0; i<n-k; i++){
        q.push(q.front());
        q.pop();
    }
}

void display(queue<int> q){
    int n = q.size();
    for(int i=0; i<n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    display(q);

    reverseK(q, 3);

    display(q);
}