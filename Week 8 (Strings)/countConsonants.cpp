#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter a word: ";
    cin>>str;

    int count = 0, n=str.size()-1;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='b' || str[i]=='c' || str[i]=='d' || str[i]=='e') count++;
    }

    cout<<"The number of consonants is "<<n-count<<endl;
}