//Skip all occurences of a character from a string

#include<iostream>
#include<string>
using namespace std;

void rmOccur(string oStr, string nStr, char ch){
    if(oStr.size()==0){
        cout<<nStr<<endl;
        return;
    }
    if(oStr[0]!=ch){
        nStr.push_back(oStr[0]);
    }
    rmOccur(oStr.substr(1), nStr, ch);
}

void rmOccur(string oStr, string nStr, char ch, int idx){
    if(oStr.size()==idx){
        cout<<nStr<<endl;
        return;
    }
    if(oStr[idx]!=ch){
        nStr.push_back(oStr[idx]);
    }
    rmOccur(oStr, nStr, ch, idx+1);
}

int main(){
    
    rmOccur("Hello","",'l',0);
}