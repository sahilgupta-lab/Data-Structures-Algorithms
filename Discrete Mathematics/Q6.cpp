#include <iostream>
#include <vector>

using namespace std;

bool isCompleteGraph(const vector<vector<int>>& graph) {
    int numVertices = graph.size();

    // Check if each pair of distinct vertices is connected by an edge
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            if (i != j && graph[i][j] != 1)
                return false;
        }
    }

    return true;
}

int main() {
    int numVertices;

    cout << "Enter the number of vertices in the graph: ";
    cin >> numVertices;

    // Initialize the adjacency matrix with zeros
    vector<vector<int>> graph(numVertices, vector<int>(numVertices, 0));

    cout << "Enter the adjacency matrix of the graph:" << endl;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            cin >> graph[i][j];
        }
    }

    if (isCompleteGraph(graph))
        cout << "The graph is a complete graph." << endl;
    else
        cout << "The graph is not a complete graph." << endl;

    return 0;
}
