#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

struct QueueNode {
    int data;
    QueueNode* next;
    
    QueueNode(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
    QueueNode* front;
    QueueNode* rear;
    
public:
    Queue();
    ~Queue();
    
    void enqueue(int value);
    int dequeue();
    bool isEmpty() const;
    void display() const;
};

#endif // QUEUE_H
