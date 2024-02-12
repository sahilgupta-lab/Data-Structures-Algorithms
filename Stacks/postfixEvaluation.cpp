#include<iostream>
#include<stack>
#include<string>
using namespace std;

int calculate(int num1, char ch, int num2){
    if(ch=='+') return num1+num2;
    else if(ch=='-')    return num1-num2;
    else if(ch=='/')    return num1/num2;
    else    return num1*num2;
}

int infixCalculation(string &str){
    stack<int> numbers;

    for(int i=0; i<str.length(); i++){
        if(isdigit(str[i])){
            numbers.push(str[i]-'0');
        }
        else{ 
            int num2 = numbers.top();
            numbers.pop();
            int num1 = numbers.top();
            numbers.pop();
            char ch = str[i];
            numbers.push(calculate(num1, ch, num2));
        }
    }
    return numbers.top();
}

int main(){
    string str = "264*8/+3-";

    cout<<infixCalculation(str);
}