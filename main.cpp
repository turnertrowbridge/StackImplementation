#include <iostream>
#include "Stack.h"

using namespace std;
int main() {

    Stack stack;
    cout << stack.peek() << endl;
    stack.push(5);
    cout << stack.peek() << endl;
    stack.push(2);
    stack.push(3);
    stack.push(4);
    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;

    return 0;
}
