/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/

#ifndef BST_H
#define BST_H
#include "TreeNode.h"
#include <cstddef>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

template <class E>
class BST {
  private:
    TreeNode<E> *root;
    unsigned int size;
    TreeNode<E>* getRoot(){
      return root;
    };

  public:

    BST(){
      root = NULL;
    };

    ~BST(){

    };

    /*void deleteTree(TreeNode<E> *node){
      if (node == NULL){
        cout << "the tree is already deleted" << endl;
      } else if (node->left != NULL){
        deleteTree(node->left);
      } else if (node->right != NULL){
        deleteTree(node->right);
      } else {
        deleteNode(node->key);
      }
      root = NULL;
    };*/

    TreeNode<E> *search(E k){
      if (root == NULL) {
        return NULL;
      }
      TreeNode<E> *current = root;
      while (current->key!=k){
        if(k<current->key){
          current = current->left;
        } else {
          current = current->right;
        }
        if (current== NULL){
          return NULL;
        }
      }
      return current;
    };

    void insert(E k){
      TreeNode<E> *node = new TreeNode<E>(k);
      if (root == NULL) {
        root = node;
        ++size;
      } else {
        TreeNode<E> *current = root;
        TreeNode<E> *parent = NULL;
        while (true){
          parent = current;
          if (k < current->key){
            current = current->left;
            if (current ==NULL){
              parent->left = node;
              ++size;
              break;
            }
          } else if (k > current->key) {
            current = current->right;
            if(current==NULL){
              parent->right = node;
              ++size;
              break;
            }
          } else {
            break;
          }
        }
      }
    };

    bool deleteNode(E k){
      if (root == NULL){
        return false;
      }
      TreeNode<E> *current = root;
      TreeNode<E> *parent = NULL;
      bool isLeft = true;
      while(current->key!=k){
        parent = current;
        if(k<current->key){
          isLeft = true;
          current = current->left;
        } else {
          isLeft = false;
          current = current->right;
        }
        if(current==NULL){//we did not find node - return false
          return false;
        }
      }
      //we found what we are looking before
      //check if node to be deleted is a leaf node
      if (current->left == NULL && current->right == NULL){//no children
        //easy case: the found value is the root
        if(current == root){
          root = NULL;
        } else if (isLeft){
          parent->left = NULL;
        } else {
          parent->right = NULL;
        }
        delete current;
        --size;
      } else if (current->right == NULL){//doesnt have right child must be a left child
        //need to check if node is a root
        if(current == root) {
          root = current->left;
        } else if(isLeft){
          parent->left = current->left;
        } else {
          //right child
          parent->right = current->left;
        }
        delete current;
        --size;
      } else if (current->left == NULL){ //doesnt have left child must be a right child
        //need to check if node is a root
        if(current == root) {
          root = current->right;
        } else if(isLeft){
          parent->left = current->right;
        } else {
          //right child
          parent->right = current->right;
        }
        delete current;
        --size;
      } else {
        //node to be deleted has 2 children, and let the games begin
        TreeNode<E> *successor = getSuccessor(current);
        if(current == root){
          root == successor;
        } else if (isLeft){
          parent->left = successor;
        } else {
          parent->right = successor;
        }
        successor->left = current->left;
        delete current;
        --size;
      }
      return true;
    };

    //helper function
    bool isEmpty(){
      return (size == 0);
    };

    int getSize(){
      return size;
    };

    TreeNode<E> *getMin(){
      TreeNode<E> *current = root;
      if (root == NULL) {
        return NULL;
      }
      while (current->left != NULL) {
        current = current->left;
      }
      return current;
    };

    TreeNode<E> *getMax(){
      TreeNode<E> *current = root;
      if (root == NULL) {
        return NULL;
      }
      while (current->right != NULL) {
        current = current->right;
      }
      return current;
    };

    //print tree with inorder traversal starting at root
    //print it as a string, therefore we convert it to
    string printTree(TreeNode<E> *node){
      ostringstream treeString;
      if (node == NULL){
        return treeString.str();
      }
      printTree(node->left);
      treeString << node->key << endl;
      printTree(node->right);
      return treeString.str();
    };

    TreeNode<E> *getSuccessor(TreeNode<E> *d){
      TreeNode<E> *current = d->right;
      TreeNode<E> *sp = d;
      TreeNode<E> *successor = d; // node left of d

      while (current!=NULL){
        //traverse tree until we find Successor
        sp = successor;
        successor = current;
        current = current->left;
      }
      //by this point all of our pointers should be in the right spot
      if (successor != d->right){
          sp->left = successor->right;
          successor->right = d;
      }
      return successor;
    };
};


#endif
