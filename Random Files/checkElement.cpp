#include <iostream>
using namespace std;

int main(){

    //Input of set
    int n;
    cout<<"Enter the size of the set: ";
    cin>>n;

    int set[n];
    cout<<"Enter the elements of the set: ";
    for(int i = 0; i<n; i++) cin>>set[i];

    //Input of element
    int x;
    cout<<"Enter the number to be checked: ";
    cin>>x;

    //Check
    bool check = 0;
    for(int i = 0; i<n; i++){
        if(x == set[i]) check = 1; 
    }

    //Result
    if(check == 1) cout<<x<<" is a member of the entered set"<<endl;
    else cout<<x<<" is not a member of the entered set"<<endl;
}
