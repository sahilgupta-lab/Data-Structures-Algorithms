#include<vector>
#include<queue>
#include<list>
#include<iostream>
#include<unordered_set>
using namespace std;

void addEdge(int src, int dest, vector < list <int> > &graph, bool biDir = true){
    graph[src].push_back(dest);
    if(biDir)   graph[dest].push_back(src);
}

void displayGraph( vector < list <int> > &graph ){
    for (int i=0; i<graph.size(); i++){
        cout << i << " -> ";
        for (auto ele : graph[i])   cout << ele << ", ";
        cout << endl;
    }
}

vector<int> bfsTraversal( vector < list <int> > &graph, int startingNode ){
    vector<int> res;
    unordered_set<int> visited;
    queue<int> q;
    q.push(startingNode);
    visited.insert(startingNode);
    while(!q.empty()){
        int ele = q.front();
        q.pop();
        for(auto v : graph[ele]){
            if(!visited.count(v))
                q.push(v);
                visited.insert(v);
        }  
        res.push_back(ele);
    }
    return res;
}

int main(){
    int v;
    cout << "Enter the number of verices: ";
    cin >> v;

    int e;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector < list <int> > graph(v);

    while(e--){
        int src;
        cout << "Enter the source node :";
        cin >> src;
        int dest;
        cout << "Enter the destination node :";
        cin >> dest;
        addEdge(src, dest, graph);
    }

    vector<int> ans = bfsTraversal(graph, 0);

    for(auto ele : ans)     cout << ele << " ";
    cout << endl;
}

