#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

void dalal(string &ans, int decimalNum){
    if(decimalNum==1){
        ans+="1";
        return;
    }
    if(decimalNum%2==0) dalal(ans+="0", decimalNum/2);
    else    dalal(ans+="1", decimalNum/2);
}

int decimalToBinary(int decimalNum){
    string ans = "";
    dalal(ans, decimalNum);
    reverse(ans.begin(), ans.end());
    return stoi(ans);
}

int main(){
    cout<<decimalToBinary(8);
}