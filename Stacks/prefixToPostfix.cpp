#include<iostream>
#include<stack>
#include<string>
using namespace std;

string calculate(string num1, char ch, string num2){
    string s = "";
    s+=num1;
    s+=num2;
    s.push_back(ch);
    return s;
}

string prefixToInfix(string &str){
    stack<string> numbers;

    for(int i=str.length()-1; i>=0; i--){
        if(isdigit(str[i])){
            numbers.push(string(1, str[i]));
        }
        else{ 
            string num1 = numbers.top();
            numbers.pop();
            string num2 = numbers.top();
            numbers.pop();
            char ch = str[i];
            numbers.push(calculate(num1, ch, num2));
        }
    }
    return numbers.top();
}

int main(){
    string str = "-+2/*6483";

    cout<<prefixToInfix(str);
}