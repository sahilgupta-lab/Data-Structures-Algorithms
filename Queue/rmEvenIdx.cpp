//Remove all elements situated at even index, consider 0 based indexing

#include<iostream>
#include<queue>
using namespace std;

void rmEvenIdx(queue<int> &q){
    int n = q.size();

    for(int i=0; i<n; i++){
        if(i%2!=0){
            q.push(q.front());
        }
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
    q.push(60);

    display(q);
    rmEvenIdx(q);
    display(q);
}