#include <iostream>
#include <vector>
using namespace std;

int main(){
    int v,e;
    cout<<"Enter number of vertex and edges."<<endl;
    cin>>v>>e;
    vector<int> adj[v];
    vector<int> in(v,0);
    for(int i=1;i<=e;i++){
        int a,b;
        cout<<"Enter the end points of the edges:)"<<endl;
        cin>>a>>b;
        adj[a].push_back(b);
        in[b]++;
    }
    // for(int i=0;i<v;i++){
    //     cout<<i<<" : ";
    //     for(int j=0;j<adj[i].size();j++){
    //         cout<<adj[i][j]<<",";
    //     }
    //     cout<<endl;
    // }
    bool flag=1;
    for(int i=0;i<v;i++){
        if((in[i] + adj[i].size()) != (v-1)){
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"Complete"<<endl;
    else
        cout<<"Not"<<endl;
} complete graph