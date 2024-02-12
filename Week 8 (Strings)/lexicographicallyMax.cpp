// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : to
// Input : str = "decode dsa with pw"
// Output : with

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of words: ";
    cin>>n;

    vector<string> v(n);
    cout<<"Enter each word: ";
    for(int i=0; i<n; i++)  cin>>v[i];

    sort(v.begin(),v.end());

    cout<<v[n-1];
}