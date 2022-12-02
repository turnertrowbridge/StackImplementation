//
// Created by Turner on 12/1/22.
//

#include <iostream>
#include "Stack.h"

Node::Node(int value) {
    this->value = value;
    this->next = nullptr;
}

Stack::Stack(){
    this->top = nullptr;
    this->bottom = nullptr;
    this->length = 0;
}

int Stack::peek() {
    if(top == nullptr){ // check if no value to peek
        std::cout << "No values on stack, returning -1" << std::endl;
        return -1;
    }
    return top->value;
}

void Stack::push(int value) {
    Node* newNode = new Node(value);

    if(top == nullptr && bottom == nullptr){
        top = newNode;
        bottom = newNode;
        length++;
        return;
    }

    newNode->next = top;
    top = newNode;
    length++;
}

int Stack::pop() {
    if(top == nullptr){  // check if no value to peek
        std::cout << "No values on stack, returning -1" << std::endl;
        return -1;
    }

    // store topNode value into popValue and delete topNode from stack
    // make topNext->next new topNode
    Node* newTop = top->next;
    int popValue = top->value;
    delete top;
    top = newTop;
    length--;

    return popValue;
}
