#ifndef INCLUDE_STACK_H_
#define INCLUDE_STACK_H_
struct CNode{
  int data;
  CNode* next;
};

class Stack{
  CNode* top;
  CNode* minList;
 public:
  Stack() {
    top = 0;
    minList = 0;
  }
  ~Stack();
  void push(int);
  int& gettop();
  bool pop();
  int min();
};

#endif  // INCLUDE_STACK_H_
