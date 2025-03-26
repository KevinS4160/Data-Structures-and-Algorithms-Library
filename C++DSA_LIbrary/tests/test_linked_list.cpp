#include <iostream>
#include "../C++DSA_Library/data_structure/linked_list.h"

using namespace std;

int main() {
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    
    cout << "Linked List after insertion: ";
    list.printList();

    list.deleteNode(20);
    cout << "Linked List after deleting 20: ";
    list.printList();

    return 0;
}
