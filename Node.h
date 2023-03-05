//
// Created by Edward Eckelberry on 4/25/22.
//

#ifndef FINAL_PROJECT_NODE_H
#define FINAL_PROJECT_NODE_H
template <class T>
struct Node
{
    T data;
    Node<T>* next = nullptr; //next is automatically nullptr
};

#endif //FINAL_PROJECT_NODE_H
