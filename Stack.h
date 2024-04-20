#ifndef OOP_LAB2_STACK_H
#define OOP_LAB2_STACK_H
#include <iostream>
#include "DoubleLinked.h"

using namespace std;
template <typename T>
class Stack{
private:
    DoubleLinkedList<T> list;
public:
    Stack() : list() {};
    bool isEmpty() const{
        return list.isEmpty();
    }

    void Push(const T& value){
        list.insertAtEnd(value);
    }
    void Pop(){
        if(list.isEmpty()){
            throw out_of_range("Stack is empty");
        }
        else{
            list.removeFromEnd();
        }
    }
    int Peek(){
        if(list.isEmpty()){
            throw out_of_range("Stack is empty");
        }
        else{
            return list[Size() - 1];
        }
    }
    int Size() const{
        return list.getSize();
    }
    friend std::ostream& operator<<(std::ostream& os, Stack<T>& stack) {
        os << stack.list;
        return os;
    }
};
#endif //OOP_LAB2_STACK_H
