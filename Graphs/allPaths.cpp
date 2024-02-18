#include<vector>
#include<list>
#include<iostream>
#include<unordered_set>
using namespace std;

void addEdge(int src, int dest, vector < list <int> > &graph, bool biDir = true){
    graph[src].push_back(dest);
    if(biDir)   graph[dest].push_back(src);
}

void search( vector < list <int> > &graph, int curr, int end, unordered_set<int> s, vector < vector <int> > &res, vector<int> &temp){
    temp.push_back(curr);
    if (end == curr){
        res.push_back(temp);
        temp.pop_back();
        return;
    }
    s.insert(curr);
    for (auto ele : graph[curr]){
        if(! s.count (ele) ){
            search(graph, ele, end, s, res, temp);
        }
    }
    temp.pop_back();
    s.erase(curr);
}

vector<vector<int>> allPaths( vector < list <int> > &graph, int v1, int v2 ){
    unordered_set<int> s;
    vector <vector <int> > res;
    vector <int> temp;
    search(graph, v1, v2, s, res, temp);
    return res;
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

    vector<vector<int>> paths = allPaths(graph, 0, 3);

    for (int i=0; i<paths.size(); i++){
        for (auto ele : paths[i]){
            cout << ele << " ";
        }
        cout << endl;
    }
}

