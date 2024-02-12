#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str;
    cout<<"Enter a word: ";
    cin>>str;

    reverse(str.begin()+(str.size()/2), str.end());
    cout<<str<<endl;
}