#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;

void bfs(int start) {
    vector<bool> visited(graph.size(), false);
    vector<int> queue;      // simple queue

    queue.push_back(start);

    while (!queue.empty()) {
        int node = queue.front();
        queue.erase(queue.begin());  // pop front
        if (visited[node]) continue;

        visited[node] = true;
        cout << node << " ";

        for (int neighbor : graph[node]) {
            queue.push_back(neighbor);
        }
    }
}

int main() {
    int n = 6;
    graph.resize(n);

    graph[0] = {1, 2};
    graph[1] = {3, 4};
    graph[2] = {5};
    graph[3] = {};
    graph[4] = {};
    graph[5] = {};

    cout << "BFS: ";
    bfs(0);
} 