#include <iostream>
#include "../C++DSA_Library/data_structure/graph.h"

using namespace std;

int main() {
    Graph graph(5);

    graph.addEdge(0, 1, 2);
    graph.addEdge(1, 2, 3);
    graph.addEdge(2, 3, 1);
    graph.addEdge(3, 4, 4);
    
    cout << "Graph adjacency list:" << endl;
    graph.printGraph();

    cout << "BFS from node 0: ";
    graph.bfs(0);
    
    cout << "Dijkstra from node 0:" << endl;
    graph.dijkstra(0);

    return 0;
}
