cmake_minimum_required(VERSION 3.26)
project(oop_lab2)

set(CMAKE_CXX_STANDARD 17)

add_executable(oop_lab2 main.cpp
        SinglLinkedList.h
        SinglNode.h
        DoubleLinked.h
        DoubleNode.h
        Stack.h
        Queue.h
        PriorityQueue.h)
