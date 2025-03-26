#include <iostream>
#include "C++DSA_Library/data_structure/graph.h"
#include "C++DSA_Library/data_structure/linked_list.h"
#include "C++DSA_Library/data_structure/tree.h"
#include "C++DSA_Library/data_structure/queue.h"
#include "C++DSA_Library/algorithms/sorting.h"
#include "C++DSA_Library/algorithms/graph_algorithms.h"

using namespace std;

int main() {
    cout << "Testing Data Structures and Algorithms\n";

    // --- Test Graph ---
    Graph graph(5);
    graph.addEdge(0, 1, 2);
    graph.addEdge(1, 2, 4);
    graph.printGraph();

    // --- Test Graph Algorithms ---
    cout << "Running BFS on Graph:\n";
    graph.bfs(0);

    // --- Test Linked List ---
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.printList();

    // --- Test Queue ---
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    cout << "Queue Front: " << q.front() << endl;

    // --- Test Tree ---
    BinaryTree tree;
    tree.insert(15);
    tree.insert(10);
    tree.insert(20);
    tree.inOrderTraversal();

    // --- Test Sorting ---
    vector<int> arr = {5, 2, 9, 1, 6};
    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
