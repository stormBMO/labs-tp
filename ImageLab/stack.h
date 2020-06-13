#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>
using namespace std;

template <class T>
class Stack {
    public:
        Stack():top(0) {
            cout << "In Stack constructor" << endl;
        }
        ~Stack() {
            cout << "In Stack destructor" << endl;
            while ( !empty() ) {
                pop();
            }
            empty();
        }

        void push (const T& object);
        T pop();
        const T& topElement();
        bool empty();

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

#endif 