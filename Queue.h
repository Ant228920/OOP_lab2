#ifndef OOP_LAB2_QUEUE_H
#define OOP_LAB2_QUEUE_H
#include <iostream>
#include "DoubleLinked.h"
using namespace std;

template <typename T>
class Queue{
private:
    DoubleLinkedList<T> list;
public:
    Queue() : list() {};

    void Enqueue(const T& value){
        list.insertAtEnd(value);
    }

    void  Dequeue(){
        if(list.isEmpty()){
            throw out_of_range("Stack is empty");
        }
        else{
            list.removeFromBeginning();
        }
    }

    int Peek(){
        if(list.isEmpty()){
            throw out_of_range("Stack is empty");
        }
        else{
            return list[0];
        }

    }
    bool isEmpty() const{
        return list.isEmpty();
    }
    friend ostream& operator<<(ostream &os, Queue <T> &obj) {
        os << obj.list;
        return os;
    }
};
#endif //OOP_LAB2_QUEUE_H
