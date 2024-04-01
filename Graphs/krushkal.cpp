#include<bits/stdc++.h>
using namespace std;

bool cmp(const vector<int> &edge1, const vector<int> &edge2){
    return edge1[2] < edge2[2];
}


int find(vector<int> &parent, int x){
    if (parent[x] == x)     return x;
    return  find(parent, parent[x]); 
}

bool isCycle (vector<int> &edge, vector<int> &parent, vector<int> &rank){
    int v1 = edge[0];
    int v2 = edge[1];

    v1 = find(parent, v1);
    v2 = find(parent, v2);

    if (v1 == v2)   return true;

    if (rank[v2] > rank[v1]){
        rank[v2]++;
        parent[v1] = v2;
    }
    else{
        rank[v1]++;
        parent[v2] = v1;
    }

    return false;
}

int krushkalMST (int v, vector<vector<int>> &edges) {
    int ans = 0;
    vector<int> rank (v, 0);
    vector<int> parent (v);

    for (int i=0; i<v; i++){
        parent[i] = i;
    }

    sort(edges.begin(), edges.end(), cmp);

    for(auto edge : edges){
        int v1 = edge[0];
        int v2 = edge[1];
        int weight = edge[2];

        if (!isCycle(edge, parent, rank))
            ans += weight;
    }

    return ans;
}

int main(){
    int v;
    cout << "Enter the number of vertices : ";
    cin >> v;

    int e;
    cout << "Enter the number of edges : ";
    cin >> e;

    vector<vector<int>> edges;

    while(e--){
        vector<int> temp;
        int v1, v2, weight;
        cout << "Enter the source node : ";
        cin >> v1;
        cout << "Enter the destination node : ";
        cin >> v2;
        cout << "Enter the weight of the edge : ";
        cin >> weight;
        temp.push_back(v1);
        temp.push_back(v2);
        temp.push_back(weight);
        edges.push_back(temp);
    }

    cout << krushkalMST(v, edges);
}