#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int> v;
    cout<<"Enter the size of the vector: ";
    cin>>n;

    cout<<"Enter the elements of the vector: ";
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int e;
    bool flag = 0;
    cout<<"Enter the element to be checked: ";
    cin>>e;

    int lOcc;
    for(int i = 0; i<v.size();i++){
        if(e==v[i]){
            lOcc = i+1;
            flag = 1;
        }
    }

    if(flag==0) cout<<"The element is not present in the vector";
    else cout<<"The element is present in the vector and its last occurence is "<<lOcc<<endl;


}