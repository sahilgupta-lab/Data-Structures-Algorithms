#include<iostream>
#include<stack>
#include<string>
using namespace std;

int preceedence(char ch){
    if(ch=='/' || ch=='*')  return 2;
    else    return 1;
}

string calculate(string num1, char ch, string num2){
    string s = "";
    s.push_back(ch);
    s+=num1;
    s+=num2;
    return s;
}

string infixCalculation(string &str){
    stack<string> numbers;
    stack<char> operators;

    for(int i=0; i<str.length(); i++){
        if(isdigit(str[i])){
            string num = "";
            while(isdigit(str[i]) && i<str.length()){
                num+=str[i];
                i++;
            }
            i--;
            numbers.push(num);
        }
        else{
                while(!operators.empty() && preceedence(str[i])<=preceedence(operators.top())){
                    string num2 = numbers.top();
                    numbers.pop();
                    string num1 = numbers.top();
                    numbers.pop();
                    char ch = operators.top();
                    operators.pop();
                    numbers.push(calculate(num1, ch, num2));
                }
                operators.push(str[i]);    
        }
    }

    while(!operators.empty()){
        string num2 = numbers.top();
        numbers.pop();
        string num1 = numbers.top();
        numbers.pop();
        char ch = operators.top();
        operators.pop();
        numbers.push(calculate(num1, ch, num2));
    }
    return numbers.top();
}

int main(){
    string str = "2+6*4/8-3";

    cout<<infixCalculation(str);
}