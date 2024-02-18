#include<vector>
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

void dfs(vector < list <int> > &graph, int currentNode, unordered_set<int> &visited){
    visited.insert(currentNode);
    for(auto neighbour : graph[currentNode]){
        if(!visited.count(neighbour))
            dfs(graph, neighbour, visited);
    }
}

int connectedComponents(vector < list <int> > &graph){
    unordered_set <int> visited;
    int count = 0;
    int v = graph.size();
    for(int i=0; i<v; i++){
        if(!visited.count(i)){
            dfs(graph, i, visited);
            count++;
        }
    }
    return count;
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

    cout << connectedComponents(graph);
}

