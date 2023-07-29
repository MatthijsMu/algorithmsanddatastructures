//
// Created by muis on 28-7-23.
//

#include "stack.h"
#include <algorithm>
#include <iostream>

using namespace  std;


template<typename El>
Stack<El>::Stack (size_t N) : cap{N}, sz{0}, arr{new El[N]} {}

template<typename El>
void Stack<El>::push (El &e) {
  arr[sz++] = e;
}

template<typename El>
El &Stack<El>::top () {
  return &arr[sz];
}

template<typename El>
void Stack<El>::pop () {
  sz = sz == 0 ? 0 : sz - 1;
}

template<typename El>
Stack<El>::~Stack () {
  delete[] arr;
  cout << "destroyed the stack!";
}

template<typename El>
bool Stack<El>::full () {
  return sz == cap;
}

template<typename El>
bool Stack<El>::empty () {
  return sz == 0;
}

template<typename El>
size_t Stack<El>::capacity () {
  return cap;
}

template<typename El>
Stack<El>::Stack (size_t N , initializer_list<El> els) : sz{N}, arr(new El[sz]) {
  copy(els.begin(), els.end(), arr);
}

template<typename El>
size_t Stack<El>::size() {
  return sz;
}