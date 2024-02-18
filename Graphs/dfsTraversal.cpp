#include<vector>
#include<list>
#include<iostream>
#include<unordered_set>
using namespace std;

void addEdge(int src, int dest, vector < list <int> > &graph, bool biDir = true){
    graph[src].push_back(dest);
    if(biDir)   graph[dest].push_back(src);
}

void helper(vector < list <int> > &graph, int currentVertex, vector<int> &ans, unordered_set<int> &visited){
    visited.insert(currentVertex);
    ans.push_back(currentVertex);

    for(auto ele : graph[currentVertex]){
        if (!visited.count(ele)){
            helper(graph, ele, ans, visited);
        }
    }
}

vector<int> dfsTraversal(vector < list <int> > &graph, int startingVertex){
    unordered_set<int> s;
    vector<int> ans;
    helper(graph, startingVertex, ans, s);
    return ans;
}

int main(){
    int v;
    cout << "Enter the number of vertices: ";
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

    vector<int> dfs = dfsTraversal(graph, 0);

    for(auto ele : dfs)
        cout << ele << " ";
    cout << endl;
}

