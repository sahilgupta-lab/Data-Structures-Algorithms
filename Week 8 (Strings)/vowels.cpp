#include<iostream>
using namespace std;

int main(){

    int n, count=0;
    cout<<"Enter the size of the string: ";
    cin>>n;
    char arr[n];

    cout<<"Enter the elements of the string: ";
    for(int i = 0; i<n; i++)    cin>>arr[i];

    for(int i = 0; i<n; i++){
        if(arr[i]=='a'  ||  arr[i]=='e'  ||  arr[i]=='i'  ||  arr[i]=='o'  ||   arr[i]=='u')    count++;  
    }
    
    cout<<"The number of vowels is "<<count<<endl;
}