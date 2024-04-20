#ifndef OOP_LAB2_SINGLLINKEDLIST_H
#define OOP_LAB2_SINGLLINKEDLIST_H

#include "SinglNode.h"
#include <iostream>
using namespace std;
using namespace single_node;
template <typename T>

class SinglLinkedList {
private:
    unique_ptr<Node<T>> head;
    int size;
    void checkIndex(int index) const {
        if (index < 0 && index >= size) {
            throw std::out_of_range("Index out of range");
        }
    }
public:
    SinglLinkedList() : head{nullptr}, size{0} {};
    SinglLinkedList(int value) : head{make_unique<Node<T>>(value)}, size{1} {};
    void InsertAtBeginning( T value){
        unique_ptr<Node<T>> newNode = make_unique<Node<T>>(value);
        newNode->next = std::move(head);
        head = std::move(newNode);
        size++;
    }
    void insertAtEnd(int value) {
        unique_ptr<Node<T>> newNode = make_unique<Node<T>>(value);
        Node<T> *current = head.get();
        if (!current) {
            head = std::move(newNode);
            size++;
            return;
        }
        while (current->next) {
            current = current->next.get();
        }
        current->next = std::move(newNode);
        size++;
    }
    int operator[](int index) const {
        checkIndex(index);
        Node<T> *current = head.get();
        for (int i = 0; i < index; i++) {
            current = current->next.get();
        }
        return current->data;
    }
    void insertAtIndex(int index, int value) {
        checkIndex(index);

        if (index == 0) {
            T insertAtBeginning(value);
            return;
        } else if (index == size) {
            T insertAtEnd(value);
            return;
        } else {
            unique_ptr<Node<T>> newNode = make_unique<Node<T>>(value);
            Node<T> *current = head.get();
            for (int i = 0; i < index - 1; i++) {
                current = current->next.get();
            }
            newNode->next = std::move(current->next);
            current->next = std::move(newNode);
            size++;
        }
    }
    void removeFromBeginning() {
        if (!head) {
            throw std::out_of_range("List is empty!");
        }
        head = std::move(head->next);
        --size;
    }
    void removeFromEnd() {
        if (!head) {
            throw std::out_of_range("List is empty!");
        }
        if (size == 1) {
            head.reset();
            --size;
            return;
        }
        Node<T> *current = head.get();
        while (current->next->next) {
            current = current->next.get();
        }
        current->next.reset();
        --size;
    }
    void removeAtIndex(int index) {
        checkIndex(index);
        if (index == 0) {
            removeFromBeginning();
            return;
        } else if (index == size - 1) {
            removeFromEnd();
            return;
        }

        Node<T> *current = head.get();
        for (int i = 0; i < index - 1; i++) {
            current = current->next.get();
        }
        current->next = std::move(current->next->next);
        --size;

    }
    bool search(int value) const {
        Node<T> *current = head.get();
        while (current) {
            if (current->data == value) {
                return true;
            }
            current = current->next.get();
        }
        return false;
    }
    int getSize() const {
        return size;
    }
    friend ostream &operator<<(ostream &os, SinglLinkedList &obj) {
        Node<T> *current = obj.head.get();
        os << "List data: " << endl;
        while (current != nullptr) {
            os << current->data << " ";
            current = current->next.get();
        }
        os << endl;
        return os;
    }
    bool isEmpty()const{
        if(!head)
            return true;
        else
            return false;
    }
};



#endif //OOP_LAB2_SINGLLINKEDLIST_H
