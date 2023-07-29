//
// Created by muis on 28-7-23.
//

#ifndef ALGORITHMSANDDATASTRUCTURES_QUEUE_H
#define ALGORITHMSANDDATASTRUCTURES_QUEUE_H

#include <cstddef>
#include <initializer_list>

using std::size_t;

template<typename El>
class Queue
{
private:
    size_t front;
    size_t sz;
    size_t cap;
    El* arr;

public:
    // properties of the Queue's size:
    bool empty();
    bool full();
    size_t size();
    size_t capacity();

    // constructors:
    Queue(size_t);
    Queue(size_t, std::initializer_list<El>);

    // insert a new element at the back.
    // if full, undefined behaviour.
    void enqueue(El&);

    // return a reference to the front element.
    // if empty, undefined behaviour.
    El& peek();

    // remove the front element.
    // if empty, nothing happens.
    void dequeue();

    // destructor:
    ~Queue();
};


#endif //ALGORITHMSANDDATASTRUCTURES_QUEUE_H
