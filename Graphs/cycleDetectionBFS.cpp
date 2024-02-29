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

bool isCycle( vector < list <int> > &graph, int startingNode ){
    int v = graph.size();
    vector<int> parent(v);
    unordered_set<int> visited;
    queue<int> q;
    q.push(startingNode);
    parent[startingNode] = -1;
    visited.insert(startingNode);
    while(!q.empty()){
        int ele = q.front();
        q.pop();
        for(auto v : graph[ele]){
            if(!visited.count(v)){
                q.push(v);
                visited.insert(v);
                parent[v] = ele;
            }
            else if(visited.count(v) && v != parent[ele])
                return true;   
        }  
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

    cout << isCycle(graph, 0);
}

