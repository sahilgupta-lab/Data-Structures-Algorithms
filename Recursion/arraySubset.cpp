#include<iostream>
#include<vector>
using namespace std;

void subset(int array[], int n, vector<int> &ans, int idx){
    if(idx==n){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    int m = array[idx];
    ans.push_back(m);
    subset(array, n, ans, idx+1);
    ans.pop_back();
    subset(array, n, ans, idx+1);
}

int main(){
    vector<int> v;
    int arr[]= {1,2,3};

    subset(arr, 3, v, 0);
}

