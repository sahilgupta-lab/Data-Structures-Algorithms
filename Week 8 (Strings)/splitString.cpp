#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){

    string s;
    cout<<"Enter a string with multiple words: ";
    getline(cin,s);

    stringstream ss(s);

    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}