#include<iostream>
#include<string>
using namespace std;

// int main(){

//     string str;
//     int mCount = 0; char ch = 'a';
//     cout<<"Enter the word: ";
//     cin>>str;

//     for(int i = 0; str[i]!='\0'; i++){
//         int cCount = 0;
//         for(int j = i; str[j]!='\0'; j++){
//             if(str[i]==str[j])  cCount++;
//         }
//         if(cCount>mCount){
//             mCount=cCount;
//             ch=str[i];
//         }
//     }

//     cout<<"The most occuring character is "<<ch<<endl;
// }

int main(){

    string str;
    cout<<"Enter the word: ";
    cin>>str;

    int arr[26]={0};

    for(int i = 0; str[i]!='\0'; i++){
        arr[str[i]-97]++;
    }

    int maxNum=0;
    for(int i = 0; i<26; i++){
        if(arr[i]>maxNum)   maxNum=arr[i];
    }

    for(int i = 0; i<26; i++){
        if(arr[i]==maxNum){
            cout<<char(97+i)<<" : "<<maxNum<<endl;
        }
    }
}