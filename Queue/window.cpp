//First negative in the window of k 

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    int arr[] = {0, -1, -2, 3, 4, -5, 6, 4, 7 , -8};
    int k = 3;
    int n = sizeof(arr)/ sizeof(int);

    queue<int> q;

    for(int i=0; i<n; i++){
        if(arr[i]<0)    q.push(i);
    }

    vector<int> ans(n-k+1);
    int count = 0;

    for(int i=0; i<n-k+1; i++){
        if(q.size()>0 && i>q.front()) q.pop();
        if(q.size()==0 || q.front()>=i+k)   ans[i]=0;
        else    ans[i]=arr[q.front()];
    }

    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    cout<<endl;
}
