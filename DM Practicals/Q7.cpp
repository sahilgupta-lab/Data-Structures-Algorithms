#include<iostream>
#include<vector>



int main() {
    // Example adjacency list
    std::vector<std::vector<int>> adjList = {
        {1, 2},     // Vertex 0 is connected to vertices 1 and 2
        {0, 2, 3},  // Vertex 1 is connected to vertices 0, 2, and 3
        {0, 1},     // Vertex 2 is connected to vertices 0 and 1
        {1}         // Vertex 3 is connected to vertex 1
    };

    // Get the number of vertices
    int numVertices = adjList.size();

    // Create an adjacency matrix filled with zeros
    std::vector<std::vector<int>> adjMatrix(numVertices, std::vector<int>(numVertices, 0));

    // Convert adjacency list to adjacency matrix
    for (int i = 0; i < numVertices; i++) {
        // Iterate over the adjacent vertices of vertex i
        for (int j : adjList[i]) {
            // Set the corresponding entry in the adjacency matrix to 1
            adjMatrix[i][j] = 1;
        }
    }

    // Display the adjacency matrix
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            std::cout << adjMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;


}