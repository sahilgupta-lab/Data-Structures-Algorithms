#include<iostream>
#include<stack>
#include<string>
using namespace std;

int preceedence(char ch){
    if(ch=='/' || ch=='*')  return 2;
    else    return 1;
}

int calculate(int num1, char ch, int num2){
    if(ch=='+') return num1+num2;
    else if(ch=='-')    return num1-num2;
    else if(ch=='/')    return num1/num2;
    else    return num1*num2;
}

int infixCalculation(string &str){
    stack<int> numbers;
    stack<char> operators;

    for(int i=0; i<str.length(); i++){
        if(isdigit(str[i])){
            int num = 0;
            while(isdigit(str[i]) && i<str.length()){
                num*=10;
                num+=(str[i]-'0');
                i++;
            }
            i--;
            numbers.push(num);
        }
        else{
                while(!operators.empty() && preceedence(str[i])<=preceedence(operators.top())){
                    int num2 = numbers.top();
                    numbers.pop();
                    int num1 = numbers.top();
                    numbers.pop();
                    char ch = operators.top();
                    operators.pop();
                    numbers.push(calculate(num1, ch, num2));
                }
                operators.push(str[i]);
              
        }
    }

    while(!operators.empty()){
        int num2 = numbers.top();
        numbers.pop();
        int num1 = numbers.top();
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