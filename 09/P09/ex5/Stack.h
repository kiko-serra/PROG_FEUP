#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

template <typename T>
struct node {
  T value;
  node<T>* next; 
};

template <typename T>
class Stack {
public:
  Stack();
  ~Stack();
  size_t size() const;
  bool peek(T& elem) const;
  bool pop(T& elem);
  void push(const T& elem);
private:
  int size_;
  node<T>* top_;
};

//Deliver only the following functions

// Constructor
template <typename T>
Stack<T>::Stack():size_(0), top_(NULL){}

// Destructor
template<typename T>
Stack<T>::~Stack(){
  while(top_ != NULL){
    node<T>* temp = top_;
    top_ = top_->next;
    delete temp;
  }
}

// Return the size of the stack
template<typename T>
size_t Stack<T>::size() const{
  return size_;
}

// Return the top element of the stack
template<typename T>
bool Stack<T>::peek(T& elem) const{
  if(!size_) return false;
  elem = top_->value;
  return true;
}

// Pop the top element of the stack
template<typename T>
bool Stack<T>::pop(T& elem){
  if(!size_) return false;
  elem = top_->value;
  node<T>* temp = top_;
  top_ = top_->next;
  delete temp;
  size_--;
  return true;
}

// Push an element to the stack
template<typename T>
void Stack<T>::push(const T& elem){
  node<T>* temp = new node<T>;
  temp->value = elem;
  temp->next = top_;
  top_ = temp;
  size_++;
}


#endif