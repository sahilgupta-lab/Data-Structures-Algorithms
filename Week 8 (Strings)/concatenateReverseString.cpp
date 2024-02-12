//Input a string and concatenate with its reverse string and print it.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s; 
    cout<<"Enter the string: ";
    cin>>s;

    string q = s;
    reverse(s.begin(),s.end());

    cout<<endl<<q+s<<endl;

    


}