#include <iostream>
#include <vector>
#include <climits>
#include "DataStructure\Bucket_Queue\BucketQueue.h"

class Graph {
public:
    Graph(int vertices) : adj(vertices), V(vertices) {}

    void add_edge(int u, int v, int weight) {
        adj[u].push_back({v, weight});
    }

    void dijkstra(int src) {
        std::vector<int> dist(V, INT_MAX);
        BucketQueue bq(V);

        bq.insert(0, src);
        dist[src] = 0;

        while (!bq.is_empty()) {
            int u = bq.extract_min();

            for (const auto& [v, weight] : adj[u]) {
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    bq.insert(dist[v], v);
                }
            }
        }

        for (int i = 0; i < V; ++i) {
            std::cout << "Distance from " << src << " to " << i << " is " << dist[i] << "\n";
        }
    }

private:
    int V;
    std::vector<std::vector<std::pair<int, int>>> adj;
};

int main() {
    Graph g(5);
    g.add_edge(0, 1, 2);
    g.add_edge(0, 2, 4);
    g.add_edge(1, 2, 1);
    g.add_edge(1, 3, 7);
    g.add_edge(2, 4, 3);
    g.add_edge(3, 4, 1);

    g.dijkstra(0);

    return 0;
}
