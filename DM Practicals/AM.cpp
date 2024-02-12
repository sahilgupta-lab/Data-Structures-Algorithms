#include <iostream>
#include <vector>
using namespace std;
int main() {
  // Define the number of vertices and edges.
  int n = 5;
  int m = 6;
  // Create a vector to store the vertices.
  vector<int> vertices = {0, 1, 2, 3, 4};
  // Create a vector to store the edges.
  vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 3}, {3, 4}};
  // Create an adjacency matrix.
  int adjMatrix[n][n];
  // Initialize the adjacency matrix to 0.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      adjMatrix[i][j] = 0;
    }
  }
  // Iterate over the edges and add them to the adjacency matrix.
  for (int i = 0; i < m; i++) {
    int u = edges[i].first;
    int v = edges[i].second;
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
  }
  // Print the adjacency matrix.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << adjMatrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}