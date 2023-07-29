//
// Created by muis on 28-7-23.
//

#include "stack.h"
#include "queue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {

  Stack<int> s(5, {1,2,3,4});
  for (; !s.empty(); s.pop())
  {
    cout << "element at top:   " << s.top() << endl;
    cout << "size of stack:    " << s.size() << endl;
    cout << "capacity of stack:" << s.capacity() << endl;
  }

  return 0;
}
