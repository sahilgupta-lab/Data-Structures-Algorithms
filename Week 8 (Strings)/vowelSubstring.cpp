//Input a string and return the number of substrings that contain only vowels.

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int count = 0;

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') count++;
    }

    cout<<pow(2,count);
}