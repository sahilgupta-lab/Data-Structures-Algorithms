#include<iostream>
#include<vector>
using namespace std;

class queue{
    vector<int> v;

    public:

    void push(int val){
        v.push_back(val);
    }

    int front(){
        if(size()==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return v.front();
    }

    int back(){
        if(size()==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return v.back();
    }

    void pop(){
        if(size()==0){
            cout<<"Queue is empty"<<endl;
        }
        v.erase(v.begin());
    }

    int size(){
        return v.size();
    }

    void display(){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();
    q.display();
    
}