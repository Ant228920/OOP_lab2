#ifndef LIBRARY_STACKARRAY_H
#define LIBRARY_STACKARRAY_H
#include <iostream>
using namespace std;
template <typename T>
class StackArray{
    T *elements;
    int capacity;
    int top;
public:
    StackArray(){
        capacity = 10;
        top = 0;
        elements= new T[capacity];
    }

    ~StackArray(){
        delete[] elements;
    }

    bool isEmpty() const {
        return top == 0;
    }

    T peek() const {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty");
        }
        return elements[top - 1];
    }


    void push(const T& obj) {
        if (top == capacity) {
            throw out_of_range("Array is overflowed");
        }
        elements[top++] = obj;
    }

    T pop() {
        if (isEmpty()) {
            throw std::underflow_error("Stack is empty");
        }
        T obj = elements[--top];
        if (top == capacity) {
            throw out_of_range("Array is overflowed");
        }
        return obj;
    }

    int Size() const {
        return top;
    }

    friend ostream& operator<<(ostream &os, StackArray<T> &stack) {
        for (size_t i = 0; i < stack.top; ++i) {
            os << stack.elements[i] << " ";
        }
        return os<<endl;
    }



};

#endif //LIBRARY_STACKARRAY_H