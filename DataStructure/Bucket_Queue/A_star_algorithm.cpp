#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include "DataStructure\Bucket_Queue\BucketQueue.h"

class Graph {
public:
    Graph(int vertices) : adj(vertices), V(vertices), h(vertices) {}

    void add_edge(int u, int v, int weight) {
        adj[u].push_back({v, weight});
    }

    void set_heuristic(int vertex, int heuristic) {
        h[vertex] = heuristic;
    }

    void a_star(int src, int goal) {
        std::vector<int> dist(V, INT_MAX);
        BucketQueue bq(V);

        bq.insert(h[src], src);
        dist[src] = 0;

        while (!bq.is_empty()) {
            int u = bq.extract_min();

            if (u == goal) break;

            for (const auto& [v, weight] : adj[u]) {
                int new_cost = dist[u] + weight;
                if (new_cost < dist[v]) {
                    dist[v] = new_cost;
                    int priority = new_cost + h[v];
                    bq.insert(priority, v);
                }
            }
        }

        std::cout << "Distance from " << src << " to " << goal << " is " << dist[goal] << "\n";
    }

private:
    int V;
    std::vector<std::vector<std::pair<int, int>>> adj;
    std::vector<int> h;
};

int main() {
    Graph g(5);
    g.add_edge(0, 1, 2);
    g.add_edge(0, 2, 4);
    g.add_edge(1, 2, 1);
    g.add_edge(1, 3, 7);
    g.add_edge(2, 4, 3);
    g.add_edge(3, 4, 1);

    g.set_heuristic(0, 7);
    g.set_heuristic(1, 6);
    g.set_heuristic(2, 2);
    g.set_heuristic(3, 1);
    g.set_heuristic(4, 0);

    g.a_star(0, 4);

    return 0;
}
