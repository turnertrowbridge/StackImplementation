//
// Created by Turner on 12/1/22.
//

#ifndef STACKIMPLEMENTATION_STACK_H
#define STACKIMPLEMENTATION_STACK_H

class Node {
public:
    explicit Node(int value);
    int value;
    Node* next;
};


class Stack {
public:
    Node* top;
    Node* bottom;
    int length;
    Stack();
    int peek();
    void push(int value);
    int pop();
};


#endif //STACKIMPLEMENTATION_STACK_H
