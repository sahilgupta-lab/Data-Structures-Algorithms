#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cout<<"Enter a word: ";
    cin>>s;

    string k = s;
    reverse(s.begin(),s.end());

    if(s==k)    cout<<"The entered word is a palindrome"<<endl;
    else cout<<"The entered word is not a palindrome"<<endl;
}