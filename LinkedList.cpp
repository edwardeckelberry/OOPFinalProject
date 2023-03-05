#ifndef FINAL_PROJECT_LINKEDLIST_CPP
#define FINAL_PROJECT_LINKEDLIST_CPP
#include "LinkedList.h"

//To create a node:
template<class T>
void LinkedList<T>::addFirstNode(T item)
{
    Node<T>* n = createNode(item);
    tail = head = n;

}

template<class T>
Node<T> *LinkedList<T>::createNode(T item)
{
    Node<T>* node = new Node<T>;
    node->next = nullptr;   //3. point n's next to nullptr
    node->data = item; //4. set n's value to item
    return node;
    //now, to use this function, you need
    //another function.
}

template<class T>
Node<T> *LinkedList<T>::search(T target)
{
    //1. create walker and point to head
    //2. walk walker to node previous to target
    //3. create pointer, target, and
    Node<T>* walker = head;

    while(walker != nullptr)
    {
        if(walker->data == target)
        {
            std::cout << "target found" << std::endl;
            return target;
        }
        walker = walker->next;
    }

    return nullptr;
}

template<class T>
LinkedList<T>::LinkedList()
{

}

template<class T>
LinkedList<T>::LinkedList(const LinkedList<T>& list)
{

}

template<class T>
LinkedList<T>::~LinkedList()
{
    while(head != nullptr)
    {
        pop_front();
    }
}

template<class T>
void LinkedList<T>::operator+=(T item)
{
    push_back(item);
}

template <class T>
std::ostream& operator<<(std::ostream& out, const LinkedList<T>& list)
{
    std::cout << "Linked List: " << std::endl;

    Node<T>* walker = list.head;

    while (walker != nullptr)
    {
        std::cout << walker->data << " ";
        walker = walker->next;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    return out;
}

template<class T>
void LinkedList<T>::push_back(T item)
{
    _size++;
    if(head == nullptr)
        addFirstNode(item);
    else
    {
        Node<T>* n = createNode(item);
        tail->next = n;
        tail = n;
    }
}

template<class T>
void LinkedList<T>::push_front(T item)
{
    _size++;
    if(head == nullptr)
        addFirstNode(item);
    else
    {
        Node<T>* node = createNode(item);
        node->next = head;
        head = node;
    }
}

template<class T>
void LinkedList<T>::remove(T target)
{
    //check if target is head
    //if so, pop front
    //else, perform between head and tail algorithm
    //check if tail was removed, if so, point tail to the last node
    _size--;
    Node<T>* walker = head;
    if(head->data == target)
    {
        pop_front();
        return;
    }
    else
    {
        while (walker->next != nullptr)
        {
            if(walker->next->data == target)
            {
                Node<T>* item = walker->next;
                walker->next = walker->next->next;
                delete item;
                return;
            }
            walker = walker->next;
        }
    }
    if(tail->data == target)
    {
        pop_back();
        return;
    }
}

template<class T>
void LinkedList<T>::insertAfter(T inserting, T after)
{
    if(head->data == after || tail->data == after)
    {
        push_back(inserting);
        return;
    }
    Node<T>* walker = head;
    while(walker != nullptr)
    {
        if(walker->data == after)
        {
            Node<T>* n = createNode(inserting);
            n->next = walker->next;
            walker->next = n;
            return;
        }
        walker = walker->next;
    }
    std::cout<<"Couldn't find " << after << ", nothing has been changed." << std::endl;
}

template<class T>
void LinkedList<T>::insertBefore(T inserting, T before)
{
    Node<T>* walker = head;
    if(head->data == before)
    {
        push_front(inserting);
        return;
    }
    while(walker != nullptr)
    {
        if(walker->next == nullptr)
        {
            std::cout<<"Couldn't find '" << before << "', nothing has been changed." << std::endl;
            return;
        }
        if(walker->next->data == before)
        {
            Node<T>* n = createNode(inserting);
            n->next = walker->next;
            walker->next = n;
            return;
        }
        walker = walker->next;
    }
}

template<class T>
void LinkedList<T>::pop_front()
{
    //1. create temp and point to head
    //2. point head to head's next
    //3. delete temp
    Node<T>* temp = head;
    head = head->next;
    delete temp;
}

template<class T>
void LinkedList<T>::pop_back()
{
    //1. create walker and point to head
    //2. walk walker to node previous to tail
    //3. point walker's next to tail pointer/next
    //4. delete tail;
    //5. point tail to walker
    Node<T>* walker = head;
    while(walker != nullptr)
    {
        if(walker->next == tail)
        {
            walker->next = tail->next;
            delete tail;
            tail = walker;
            return;
        }
        walker = walker->next;
    }


}

template<class T>
T &LinkedList<T>::front()
{
    return head->data;
}

template<class T>
T &LinkedList<T>::back()
{
    return tail->data;
}

template<class T>
void LinkedList<T>::print()
{
    Node<T>* w;
    w = head;
    while(w != nullptr)
    {
        std::cout << w->data << " ";
        w = w->next;
    }
    std::cout << std::endl;
}

template<class T>
int LinkedList<T>::size()
{
    return _size;
}

template<class T>
bool LinkedList<T>::empty()
{
    //Node<T>* walker = head;
    if(head == nullptr)
    {
        return true;
    }
    else
        return false;
}


#endif //LINKED_LIST1_LINKEDLIST_CPP