//given n string consisting of digits from 0 to 9. Return the index of string which has the maximum value

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of strings: ";
    cin>>n;

    vector<string> v(n);
    vector<int> v2(n);
    cout<<"Enter the strings of numbers: ";
    for(int i = 0; i<n; i++)    cin>>v[i];

    for(int i = 0; i<n; i++){
        int temp = stoi(v[i]);
        v2[i] = temp;
    }

    auto maxElement = max_element(v2.begin(),v2.end());

    for(int i = 0; i<n; i++){
        if(v2[i] == *maxElement)    cout<<i<<endl;
    }


}