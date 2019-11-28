#ifndef LISTNODE_H
#define LISTNODE_H
/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/
#include <iostream>

using namespace std;

template <class E>
class ListNode {
  public:
    E data;
    ListNode<E> *next;
    ListNode<E> *prev;

    ListNode(){
      next = NULL;
      prev = NULL;
    };

    ListNode(E d){
      data = d;
      next = NULL;
      prev = NULL;
    };
    ~ListNode(){

    };
};



#endif
