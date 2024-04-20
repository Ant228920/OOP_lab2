#ifndef OOP_LAB2_DOUBLENODE_H
#define OOP_LAB2_DOUBLENODE_H
#include <memory>

using namespace std;
template <typename T>
struct DoubleNode{
    T data;
    shared_ptr<DoubleNode> next;
    weak_ptr<DoubleNode> previous;

    DoubleNode(T value) : data(value) {}
};
#endif //OOP_LAB2_DOUBLENODE_H
