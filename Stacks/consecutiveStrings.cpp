//Remove consecutive characters from the strings

#include<iostream>
#include<stack>
#include<string>
using namespace std;

void removeConsecutiveChar(string &str){
    stack <char> st;
    string temp = str;
    str = "";

    st.push(temp[0]);
    str+=temp[0];

    for(int i=1; i<temp.length(); i++){
        if(st.top() != temp[i]){
            st.push(temp[i]);
            str+=temp[i];
        }  
    }

}

int main(){
    string str = "aaabbccccddeeee";
    removeConsecutiveChar(str);
    cout<<str<<endl;
}