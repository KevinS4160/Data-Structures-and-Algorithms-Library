#include <iostream>
#include <vector>
#include <queue>
#include <chrono>
#include "../C++DSA_Library/data_structure/graph.h"  // Include your graph implementation

using namespace std;
using namespace std::chrono;

void benchmarkBFS(Graph& graph, int startNode) {
    auto start = high_resolution_clock::now();
    
    graph.bfs(startNode);
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "BFS Execution Time: " << duration.count() << " ms" << endl;
}

void benchmarkDijkstra(Graph& graph, int startNode) {
    auto start = high_resolution_clock::now();
    
    graph.dijkstra(startNode);
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Dijkstra's Execution Time: " << duration.count() << " ms" << endl;
}

int main() {
    Graph graph(10);
    graph.addEdge(0, 1, 2);
    graph.addEdge(1, 2, 4);
    graph.addEdge(2, 3, 1);
    graph.addEdge(3, 4, 7);
    graph.addEdge(4, 5, 3);

    cout << "Benchmarking Graph Algorithms..." << endl;
    benchmarkBFS(graph, 0);
    benchmarkDijkstra(graph, 0);

    return 0;
}
