//Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.

#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main(){

    string str;
    cout<<"Enter the string: ";
    cin>>str;

    int largest = str[0] - '0';
 
    for(int i = 1; str[i]!='\0'; i++){
        if((str[i]-'0')>largest) largest=(str[i]-'0');
    }

    int secondLargest = INT_MIN;

    for(int i = 0; str[i]!='\0'; i++){
        if((str[i]-'0')>secondLargest && (str[i]-'0')<largest)    secondLargest=(str[i]-'0');
    }

    cout<<endl<<secondLargest<<endl;
}