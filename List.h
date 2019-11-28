/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/


#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListNode.h"
using namespace std;

template <class E>
class List {
  private:
    ListNode<E> *back;
    unsigned int size;

  public:
    ListNode<E> *front;

    List();
    ~List();

    void insertFront(E data){
      ListNode<E> *node = new ListNode(data);
      if (isEmpty()) {//size == 0
        back = node;
      } else {
        //not an empty list
        node->next = front;
        front->prev = node;
      }
      front = node;
      size++;
    };

    void insertBack(){
      ListNode<E> *node = new ListNode(data);
      if (isEmpty()) {//size == 0
        front = node;
      } else {
        //not an empty list
        node->prev = back;
        back->next = node;
      }
      back = node;
      size++;
    };

    E removeFront(){

    };
    E removeBack(){

    };

    bool remove(E key){
      ListNode<E> *ft = front;

      if (front->next == NULL) {
        //only one element in the list
        back = NULL;
      } else {
        //more than one element in the list
        front->next->prev = NULL;
      }
      front = front->next;
      int temp = ft->data;
      ft->next = NULL;
      --size;
      delete ft;
  r   return temp;
    };

    E search(E value){

    };

    int getSize(){
      return size;
    };

    void printList(){
      ListNode<E> *curr = front;
      while (curr != NULL) {
        cout << curr->data <<endl;
        curr = curr->next;
      }
    };

};


#endif
