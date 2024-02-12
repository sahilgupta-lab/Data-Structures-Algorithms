#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    string num1 = "987";
    string num2 = "861";


    stack <int> st1;
    stack <int> st2;
    stack<int> ans;

    for(int i=0; i<num1.length(); i++)  st1.push(num1[i] - '0');
    for(int i=0; i<num2.length(); i++)  st2.push(num2[i] - '0');

    int carry = 0;
    while(!st1.empty() && !st2.empty()){
        int sum = st1.top() + st2.top() + carry;
        st1.pop();
        st2.pop();
        carry = sum/10;
        ans.push(sum%10);
    }

    if(!st1.empty()){
        while(!st1.empty()){
            if(carry != 0){
                ans.push(st1.top()+carry);
                st1.pop();
                carry = 0;
            }
            ans.push(st1.top());
            st1.pop();
        }
    }

    if(!st2.empty()){
        while(!st2.empty()){
            if(carry != 0){
                ans.push(st2.top()+carry);
                st2.pop();
                carry = 0;
            }
            ans.push(st2.top());
            st2.pop();
        }
    }

    if(carry != 0){
        ans.push(carry);
    }

    string totalSum = "";

    while(!ans.empty()){
        totalSum += to_string(ans.top());
        ans.pop();
    }

    cout << "The sum of "<<num1<<" and "<<num2<<" is "<<totalSum<<endl;
}