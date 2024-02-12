//Input a string and count the number of times the neighbouring characters are different from each other

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter the word: ";
    cin>>str;
    int count=0, n=str.size()-1;

    for(int i=1; i<n; i++){
        if(n==1)    break;
        if(n==2){
            count=1;
            break;
        }
        if (i==0){
            if (str[i]!=str[i+1])   count++;
        }
        else if(str[i]!=str[i-1] && str[i]!=str[i+1])    count++;
        else if(i==n-1){
            if(str[i]!=str[i-1])    count++;
        }
    }

    cout<<count<<endl;
}