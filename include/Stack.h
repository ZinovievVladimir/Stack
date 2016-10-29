#ifndef INCLUDE_STACK_H_
#define INCLUDE_STACK_H_
struct CNode{
  int data;
  CNode* next;
};

class Stack{
  CNode* top;
 public:
  Stack() {
    top = 0;
  }
  ~Stack();
  bool push(int);
  int& gettop();
  bool pop();
  int min();
};

#endif  // INCLUDE_STACK_H_
