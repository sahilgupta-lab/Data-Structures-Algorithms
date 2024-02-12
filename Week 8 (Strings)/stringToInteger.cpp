// Input a string of length less than 10 and convert it into integer without using builtin function.

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter the string: ";
    cin>>str;

    int result=0;
    for(int i=0; str[i]!='\0'; i++){
        result*=10;
        result+=(str[i]-'0');
    }

    cout<<"The integer is: "<<result<<endl;
}