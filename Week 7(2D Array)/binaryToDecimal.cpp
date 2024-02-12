#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of binary elements: ";
    cin>>n;

    vector<int> v;
    cout<<"\nEnter the binary elements: ";
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }    

    reverse(v.begin(),v.end());

    int decimal=0;
    for(int i = 0; i<n; i++){
        decimal+=v[i]*pow(2,i);
    }

    cout<<"\nThe decimal conversion is "<<decimal;
}