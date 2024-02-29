#include<bits/stdc++.h>
using namespace std;

void addEdge(int src, int dest, bool birDir , vector<list<int>> &graph){
    if(!birDir)
        graph[src].push_back(dest);
    else{
        graph[src].push_back(dest);
        graph[dest].push_back(src);
    }
}

vector<int> topologicalSort(vector<list<int>> &graph){
    vector<int> ans;
    int v = graph.size();
    vector<int> inDegree(v, 0);
    vector<bool> visited(v, false);

    for(int i=0; i<v; i++){
        for(auto neighbour : graph[i])
            inDegree[neighbour]++;
    }

    queue<int> q;
    for(int i=0; i<v; i++){
        if(inDegree[i] == 0){
            q.push(i);
            visited[i] = true;
        }
    }

    while(!q.empty()){
        int ele = q.front();
        q.pop();
        ans.push_back(ele);
        for(auto neighbour : graph[ele]){
            inDegree[neighbour]--;
            if(inDegree[neighbour] == 0 && !visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }

    return ans;
}

int main(){
    int v, e;
    cout << "Enter the number of vertices : ";
    cin >> v;
    cout << "Enter the number of edges : ";
    cin >> e;

    vector<list<int>> graph(v);
    while(e--){
        int src, dest;
        cout << "Enter the source and destination node : ";
        cin >> src >> dest;
        addEdge(src, dest, false, graph);
    }

    vector<int> tSort = topologicalSort(graph);

    for(auto ele : tSort)   cout << ele << " ";
    cout << endl;
}