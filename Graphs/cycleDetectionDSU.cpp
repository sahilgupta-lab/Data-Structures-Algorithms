#include<vector>
#include<queue>
#include<list>
#include<iostream>
#include<unordered_set>
using namespace std;


int find(vector<int> &parent, int x){
    if(parent[x] == x)  return x;
    return find(parent, parent[x]);
}

bool unionGraph (vector<int> &parent, vector<int> &rank, int a, int b){
    a = find(parent, a);
    b = find(parent, b);

    if(a==b)    return true;
    else if(rank[a] > rank[b]){
        rank[a]++;
        parent[b] = a;
    }
    else{
        rank[b]++;
        parent[a] = b;
    }
    return false;
}


bool isCycle( vector <int> &parent, vector<int> &rank, vector<vector<int>> &edges ){
    for(auto ele : edges){
        int v1 = ele[0];
        int v2 = ele[1];
        bool ans = unionGraph(parent, rank, v1, v2);
        if(ans)     return true;
    }
    return false;
}

int main(){
    int v;
    cout << "Enter the number of verices: ";
    cin >> v;

    int e;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector < vector <int> > edges;

    while(e--){
        int src;
        cout << "Enter the source node :";
        cin >> src;
        int dest;
        cout << "Enter the destination node :";
        cin >> dest;
        edges.push_back({src, dest});
    }

    vector<int> parent(v);
    vector<int> rank(v, 0);

    for(int i=0; i<v; i++){
        parent[i] = i;
    }

    cout << isCycle(parent, rank, edges);
}

