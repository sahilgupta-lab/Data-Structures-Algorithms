#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;

void addEdge(int src, int dest, vector < unordered_map<int, int> > &graph, bool biDir, int weight){
    graph[src][dest] = weight;
    if(biDir)    graph[dest][src] = weight;
}

void displayGraph( vector < unordered_map<int, int> > &graph ){
    for (int i=0; i<graph.size(); i++){
        cout << i << " -> ";
        for (auto ele : graph[i])   cout << "( " <<ele.first << " , " << ele.second << " ) ";
        cout << endl;
    }
}

int main(){
    int v;
    cout << "Enter the number of verices: ";
    cin >> v;

    int e;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector < unordered_map<int, int> > graph(v);

    while(e--){
        int src;
        cout << "Enter the source node: ";
        cin >> src;
        int dest;
        cout << "Enter the destination node: ";
        cin >> dest;
        int weight;
        cout << "Enter the weight of the edge: ";
        cin >> weight;
        addEdge(src, dest, graph, 1, weight);
    }

    displayGraph(graph);
}

