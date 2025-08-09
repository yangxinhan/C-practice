#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <climits>
using namespace std;

struct Device {
    int x, y;
};

double distance(const Device& a, const Device& b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

// BFS for finding shortest path with hop limit
int findShortestPath(vector<vector<int>>& graph, int start, int end, int maxHops) {
    int n = graph.size();
    vector<int> dist(n, INT_MAX);
    queue<int> q;
    
    q.push(start);
    dist[start] = 0;
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        if (curr == end) {
            return dist[end];
        }
        
        if (dist[curr] >= maxHops) continue;
        
        for (int next : graph[curr]) {
            if (dist[next] > dist[curr] + 1) {
                dist[next] = dist[curr] + 1;
                q.push(next);
            }
        }
    }
    
    return dist[end] == INT_MAX ? -1 : dist[end];
}

// DFS for finding connected component size
void dfs(vector<vector<int>>& graph, int node, vector<bool>& visited, int& componentSize) {
    visited[node] = true;
    componentSize++;
    
    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(graph, next, visited, componentSize);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, R, T;
    cin >> N >> R >> T;
    
    vector<Device> devices(N);
    for (int i = 0; i < N; i++) {
        cin >> devices[i].x >> devices[i].y;
    }
    
    // Build adjacency graph
    vector<vector<int>> graph(N);
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (distance(devices[i], devices[j]) <= R) {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }
    
    int Q;
    cin >> Q;
    
    for (int q = 0; q < Q; q++) {
        int op, A, B;
        cin >> op >> A >> B;
        A--; B--; // Convert to 0-indexed
        
        if (op == 0) {
            // Query message transmission with hop limit
            int hops = findShortestPath(graph, A, B, T);
            if (hops != -1) {
                cout << "Yes " << hops << "\n";
            } else {
                cout << "No\n";
            }
        } else {
            // Query if in same bluetooth shared block
            vector<bool> visited(N, false);
            int componentSize = 0;
            
            dfs(graph, A, visited, componentSize);
            
            if (visited[B]) {
                cout << "Yes " << componentSize << "\n";
            } else {
                cout << "No\n";
            }
        }
    }
    
    return 0;
}
