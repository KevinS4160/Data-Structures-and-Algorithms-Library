#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>

class Graph {
public:
    Graph(bool isDirected = false);  // Constructor with directed/undirected option

    void addEdge(int u, int v);  // Add an edge between two nodes
    void removeEdge(int u, int v);  // Remove an edge
    void addVertex(int v);  // Add a vertex
    bool hasEdge(int u, int v);  // Check if edge exists
    void printGraph();  // Display adjacency list

private:
    std::unordered_map<int, std::list<int>> adjList;  // Adjacency list representation
    bool directed;
};

#endif // GRAPH_H
