//
// Created by muis on 28-7-23.
//

#ifndef ALGORITHMSANDDATASTRUCTURES_STACK_H
#define ALGORITHMSANDDATASTRUCTURES_STACK_H

#include <cstddef>
#include <initializer_list>

using std::size_t;

template<typename El>
class Stack
{
private:
    size_t sz;
    size_t cap;
    El* arr;

public:
    // properties of the Stack's size:
    bool empty();
    bool full();
    size_t size();
    size_t capacity();

    // constructors:
    Stack(size_t);
    Stack(size_t, std::initializer_list<El>);

    // insert a new element.
    // if full, undefined behaviour.
    void push(El&);

    // return a reference to the top element.
    // if empty, undefined behaviour.
    El& top();

    // remove the top element.
    // if empty, nothing happens.
    void pop();

    // destructor:
    ~Stack();
};




#endif //ALGORITHMSANDDATASTRUCTURES_STACK_H
