#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;  // adjacency list
vector<bool> visited;

void dfs(int node) {
    if (visited[node]) return;

    visited[node] = true;
    cout << node << " ";

    for (int neighbor : graph[node]) {
        dfs(neighbor);   // go deeper
    }
}

int main() {
    int n = 6; // number of nodes (0 to 5)
    graph.resize(n);
    visited.resize(n, false);

    // build graph
    graph[0] = {1, 2};
    graph[1] = {3, 4};
    graph[2] = {5};
    graph[3] = {};
    graph[4] = {};
    graph[5] = {};

    cout << "DFS: ";
    dfs(0);
}
