#ifndef OOP_LAB2_PRIORNODE_H
#define OOP_LAB2_PRIORNODE_H

#include <memory>

namespace generic_node {
    template<typename T>
    struct Node {
        T data;
        std::shared_ptr<Node<T>> next;

        Node(const T& value) : data{value}, next{nullptr} {};
    };
}
#endif //OOP_LAB2_PRIORNODE_H
