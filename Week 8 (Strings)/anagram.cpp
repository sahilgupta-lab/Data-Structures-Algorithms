#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s1, s2;
    cout<<"Enter two words: ";
    cin>>s1>>s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1==s2)  cout<<"The two words are anagram"<<endl;
    else    cout<<"The two words are not anagram"<<endl;

}