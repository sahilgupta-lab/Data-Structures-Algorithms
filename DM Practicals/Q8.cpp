#include <iostream>
#include <vector>
using namespace std;

int main(){
    int v,e;
    cout<<"Enter number of vertex and edges."<<endl;
    cin >> v >> e;
    vector<int> out(v,0);
    vector<int> in(v,0);
    for(int i=1;i<=e;i++){
        int a,b;
        cout<<"Enter the end points of edges."<<endl;
        cin >> a >> b;
        in[b]++;
        out[a]++;
    }
    cout<<"InDegree : "<<endl;
    for(int i=0;i<v;i++){
        cout<<i<<" : "<<in[i]<<endl;
    }
    cout<<"OutDegree : "<<endl;
    for(int i=0;i<v;i++){
        cout<<i<<" : "<<out[i]<<endl;
    }
}