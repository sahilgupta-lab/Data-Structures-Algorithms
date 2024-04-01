#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> &parent, int x){
    if(x == parent[x])  return x;
    else    return parent[x] = find(parent, parent[x]);
}

void union(vector<int> &size, vector<int> &parent,vector<int> &minimal, vector<int> &maximal, int a, int b){
    a = find(a);
    b = find(b);
    if(a==b)    return;

    if(size[a] > size[b]){
        size[b] += size[a];
        parent[b] = a;
        maximal[a] = max(maximal[a], maximal[b]);
        minimal[a] = min(minimal[a], minimal[b]);
    }
    else{
        size[a] += size[b];
        parent[a] = b;
        maximal[b] = max(maximal[a], maximal[b]);
        minimal[b] = min(minimal[a], minimal[b]);
    }
}

