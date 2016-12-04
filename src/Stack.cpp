#include "Stack.h"
#include <stdexcept>

Stack::~Stack() {
  while (top != 0) {
    CNode* buf = top->next;
    delete top;
    top = buf;
  }
}

void Stack::push(int x) {
  CNode* node = new CNode;
  node->data = x;
  node->next = top;
  top = node;

  if (minList != 0) {
    if (minList->data >= x) {
      node = new CNode;
      node->data = x;
      node->next = minList;

      minList = node;
    }
  } else {
    node = new CNode;
    node->data = x;
    node->next = minList;

    minList = node;
  }
}

int& Stack::gettop() {
  if (top != 0)
    return top->data;
  else
    throw 1;
}

bool Stack::pop() {
  if (top != 0) {
    CNode *s = top;
    top = top->next;
    delete s;
    if (top->data == minList->data) {
      s = minList;
      minList = minList->next;
      delete s;
    }
    return true;
  }
  else {
    return false;
  }
}

int Stack::min() {
  CNode *buf = top;

  if (top != 0) {
    return minList->data;
  } else {
    throw std::logic_error("Stack is empty!");
  }
}