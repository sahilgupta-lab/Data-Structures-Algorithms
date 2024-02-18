#include<vector>
#include<list>
#include<iostream>
#include<unordered_set>
using namespace std;

void addEdge(int src, int dest, vector < list <int> > &graph, bool biDir = true){
    graph[src].push_back(dest);
    if(biDir)   graph[dest].push_back(src);
}

bool search( vector < list <int> > &graph, int curr, int end, unordered_set<int> s){
    if (end == curr)   return true;
    s.insert(curr);
    for (auto ele : graph[curr]){
        if(! s.count (ele) ){
            return search(graph, ele, end, s);
        }
    }
    return false;
}

bool isPath( vector < list <int> > &graph, int v1, int v2 ){
    unordered_set<int> s;
    return search(graph, v1, v2, s);
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

    cout << isPath(graph, 0,4);
}

