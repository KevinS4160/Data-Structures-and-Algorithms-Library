#ifndef STACK_H
#define STACK_H

#include <iostream>

struct StackNode {
    int data;
    StackNode* next;

    StackNode(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    StackNode* top;

public:
    Stack();
    ~Stack();
    
    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
    void display() const;
};

#endif // STACK_H
