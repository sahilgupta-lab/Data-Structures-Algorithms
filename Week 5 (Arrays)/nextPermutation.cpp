#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    vector <int> v;
    cout<<"Enter the size of the vector: ";
    cin>>n;

    cout<<"Enter the elements of the vector: ";
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }


    //Pivot
    int piv = -1;

    for(int i = n-2; i>=0; i--){
        if(v[i]<v[i+1]){
            piv=i;
            break;
        }  
    }


    //Reverse
    if(piv==-1) reverse(v.begin(),v.end());
    else{
         reverse(v.begin()+piv+1,v.end());

        int swapI;
        for(int i = piv+1; i<n;i++)
            if(v[i]>v[piv]){
                swapI=i;
                break;
            } 

        int temp = v[swapI];
        v[swapI] = v[piv];
        v[piv] = temp;
    }

    //Result
    for(int i = 0; i<n; i++)    cout<<v[i]<<" ";


    




}