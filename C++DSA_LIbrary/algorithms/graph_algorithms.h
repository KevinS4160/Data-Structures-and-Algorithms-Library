#ifndef GRAPH_ALGORITHMS_H
#define GRAPH_ALGORITHMS_H

#include <vector>
#include <queue>
#include <limits>

class GraphAlgorithms {
public:
    // Performs Breadth-First Search (BFS) on a graph
    static std::vector<int> bfs(int startNode, const std::vector<std::vector<int>>& adjList);

    // Performs Depth-First Search (DFS) on a graph
    static void dfs(int node, const std::vector<std::vector<int>>& adjList, std::vector<bool>& visited, std::vector<int>& result);

    // Implements Dijkstra's Algorithm for shortest path
    static std::vector<int> dijkstra(int startNode, const std::vector<std::vector<std::pair<int, int>>>& adjList, int numNodes);
};

#endif // GRAPH_ALGORITHMS_H
