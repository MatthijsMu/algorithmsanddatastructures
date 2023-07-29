//
// Created by muis on 28-7-23.
//

#include "queue.h"
#include <algorithm>

template<typename El>
Queue<El>::Queue (size_t N) : cap{N}, sz{0}, arr{new El[N]} {}

template<typename El>
void Queue<El>::enqueue (El &e) {
  arr[(front + sz++) % cap] = e;
}

template<typename El>
El &Queue<El>::peek () {
  return &arr[front];
}

template<typename El>
void Queue<El>::dequeue () {
  front += 1;
  front %= cap;
  sz = sz == 0 ? 0 : sz - 1;
}

template<typename El>
Queue<El>::~Queue () {
  delete[] arr;
}

template<typename El>
bool Queue<El>::full () {
  return sz == cap;
}

template<typename El>
bool Queue<El>::empty () {
  return sz == 0;
}

template<typename El>
size_t Queue<El>::capacity () {
  return cap;
}

template<typename El>
Queue<El>::Queue (size_t N, std::initializer_list<El> els) : sz{N}, arr (new El[sz]) {
  std::copy (els.begin (), els.end (), arr);
}

template<typename El>
size_t Queue<El>::size () {
  return sz;
}