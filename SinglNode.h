#ifndef OOP_LAB2_SINGLNODE_H
#define OOP_LAB2_SINGLNODE_H

#include <memory>


namespace single_node {
    template <typename T>
    struct Node {
        T data;
        std::unique_ptr<Node> next;
        Node(int value) : data{value}, next{nullptr} {};
    };
}

#endif //OOP_LAB2_SINGLNODE_H