// Sort a string in decreasing order of values associated after removal of values smaller than x

#include<iostream>
#include<string>
using namespace std;

void bubbleSort(string &str, int n){
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(str[j]<str[j+1])     swap(str[j], str[j+1]);
            flag = false;
        }
        if(flag)    break;      //swap did not happen
    }
}

int main(){
    string str = "hasinsjgohsnkhslhxzuyyxzyeilal";
    string s ="";

    for(int i=0; i<str.length(); i++)   
        if(str[i]>='x')     s.push_back(str[i]);

    bubbleSort(s, s.length());

    cout<<s<<endl;
}