#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList();
    ~LinkedList();

    void insert(int value);
    void remove(int value);
    void display() const;
};

#endif // LINKED_LIST_H
