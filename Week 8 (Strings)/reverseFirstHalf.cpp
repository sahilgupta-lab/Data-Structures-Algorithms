#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str;
    cout<<"Enter a string with even size: ";
    cin>>str;

    reverse(str.begin(),str.begin()+(str.size()/2));

    // reverse(str.begin(),str.end()-(str.size()/2));
    cout<<str;
}