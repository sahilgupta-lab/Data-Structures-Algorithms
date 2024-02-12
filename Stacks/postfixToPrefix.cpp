#include<iostream>
#include<stack>
#include<string>
#include<cctype>
using namespace std;

string calculate(string num1, char ch, string num2){
    string s = "";
    s.push_back(ch);
	s+=num1;
	s+=num2;
	return s;
}

string infixCalculation(string &str){
    stack<string> numbers;

    for(int i=0; i<str.length(); i++){
        if(isdigit(str[i])){
            numbers.push(string(1, str[i]));
        }
        else{ 
            string num2 = numbers.top();
            numbers.pop();
            string num1 = numbers.top();
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