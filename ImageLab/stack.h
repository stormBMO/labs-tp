#pragma once

#include <iostream>

template <class T>
class Stack {
    public:
        Stack():top(0) {}
        ~Stack() {
            while ( !isEmpty() ) {
                pop();
            }
            isEmpty();
        }

        void push (const T& object);
        T pop();
        const T& topElement();
        bool isEmpty();

    private:
        struct StackNode {              
            T data;                     
            StackNode *next;         
            StackNode(const T& newData, StackNode *nextNode)
                : data(newData), next(nextNode) {}
        };

        Stack(const Stack& lhs) {}

        Stack& operator=(const Stack& rhs) {}
        StackNode *top;                 

};


template <class T>
void Stack<T>::push(const T& obj) {
    top = new StackNode(obj, top);
}

template <class T>
T Stack<T>::pop() {
    if (!isEmpty()) {
        StackNode *topNode = top;
        top = top->next;
        T data = topNode->data;
        delete topNode;
        return data;
    }
    throw std::out_of_range("Pop: empty stack");
}

template <class T>
const T& Stack<T>::topElement() {
    if (!isEmpty()) {
        return top->data;
    }
    throw std::out_of_range("Top: empty stack");
}

template <class T>
bool Stack<T>::isEmpty() {
    return top == 0;
}
