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

bool helper( vector < list <int> > &graph, int startingNode, int parent,  unordered_set<int> &visited){
    visited.insert(startingNode);
    for(auto neighbour : graph[startingNode]){
        if(!visited.count(neighbour)){
            bool ans = helper(graph, neighbour, startingNode, visited);
            if(ans == true)     return true;
        }
        else if(visited.count(neighbour) && neighbour != parent)
            return true;
    }
    return false;
}

bool isCycle( vector < list <int> > &graph, int startingNode ){
    unordered_set<int> visited;
    return helper(graph, startingNode, -1, visited);
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

