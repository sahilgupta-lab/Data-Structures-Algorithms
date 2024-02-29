#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> &parents, int x){
    if(parents[x] == x)  return x;
    return parents[x] = find(parents, parents[x]);
}

void union(vector<int> &parents, vector<int> &rank, int a, int b){
    int a = find(parents, a);
    int b = find(parents, b);
    if(a==b)    return;

    if(rank[a] < rank[b]){
        rank[b]++;
        parents[a] = b;
    }
    else{
        rank[a]++;
        parents[b] = a;
    }
}

int main(){

}