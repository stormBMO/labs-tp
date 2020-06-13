#include <iostream>
#include "stack.h"  
using namespace std;


template <class T>
bool Stack<T>::empty() {
    if (top == 0) {
        return true;
    }
    else {
        return false;
    }
}

template <class T>
const T& Stack<T>::topElement() {
    cout << "In topElement Operation" << endl;
    if ( !empty() ) {
        return top->data;
    }
}

template <class T>
T Stack<T>::pop() {
    cout << "In POP Operation" << endl;
    if ( !empty() ) {
        StackNode *topNode = top;
        top = top->next;
        T data = topNode->data;
        delete topNode;
        return data;
    }
    cout << "Empty Stack" << endl;
    //return 0;
}

template <class T>
void Stack<T>::push(const T& obj) {
    cout << "In PUSH Operation" << endl;
    top = new StackNode(obj, top);
}
