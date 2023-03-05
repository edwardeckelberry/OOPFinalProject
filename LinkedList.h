//
// Created by Edward Eckelberry on 4/25/22.
//

#ifndef FINAL_PROJECT_LINKEDLIST_H
#define FINAL_PROJECT_LINKEDLIST_H
#include "Node.h"
#include <iostream>

template <class T>
class LinkedList
{
private:
    Node<T>* head = nullptr, *tail = nullptr;
    void addFirstNode(T item);
    Node<T>* createNode(T item);
    Node<T>* search(T target);
    int _size;


public:
    ///constructors
    LinkedList();
    LinkedList(const LinkedList<T>& list);
    ~LinkedList();

    ///operators
    //void operator=(const LinkedList<T>& list);
    void operator+=(T item);
    template <class S>
    friend std::ostream& operator<<(std::ostream& out,
                                    const LinkedList<S>& list);

    ///member functions
    void push_back(T item); //add item to end of list, a queue
    void push_front(T item); //add item to beginning of list, a stack
    void remove(T target); //remove target list
    void insertBefore(T inserting, T before); //insert insertThis before beforeThat
    void insertAfter(T inserting, T after); //insert insertThis before beforeThat
    void pop_front(); //remove first item in list, a stack
    void pop_back(); //remove last in list, a queue
    T& front(); //return value of first item in list
    T& back(); //return value of last item in list
    void print();
    int size();
    bool empty();


};


#include "LinkedList.cpp"
#endif //FINAL_PROJECT_LINKEDLIST_H
