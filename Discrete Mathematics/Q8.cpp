#include <iostream>
#include <vector>

using namespace std;
 

int main() {
    int numVertices;

    cout << "Enter the number of vertices in the directed graph: ";
    cin >> numVertices;

    int graph[numVertices][numVertices];

    cout << "Enter the adjacency matrix of the directed graph:" << endl;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            cin >> graph[i][j];
        }
    }

    int inDegree[numVertices] = {0}, outDegree[numVertices] = {0};
    
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            if (graph[i][j] == 1) {
                outDegree[i]++;
                inDegree[i]++;
            }
        }
    }

    
    
    cout << "Vertex\tIn-Degree\tOut-Degree" << endl;
    for (int i = 0; i < numVertices; i++) {
        cout << i << "\t" << inDegree[i] << "\t\t" << outDegree[i] << endl;
    }

    return 0;
}
