#include<iostream>
using namespace std;

template<class T>
class Pair{
    T first;
    T second;

    public:
    Pair(T a, T b){
        first = a;
        second = b;
    }

    Pair(){};

    void swap(){
        T temp = first;
        first = second;
        second = temp;
    }

    void display(){
        cout<<"The value of first is "<<first<<endl;
        cout<<"The value of second is "<<second<<endl;
    }
};

int main(){
    Pair <char> obj('a','c');
    obj.display();
    obj.swap();
    obj.display();
}