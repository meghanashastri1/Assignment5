/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/


//# pragma once
#ifndef TREENODE_H
#define TREENODE_H

#include <cstddef>
#include <iostream>

using namespace std;

template <class E>
class TreeNode
{
  public:
    TreeNode(){
      key = NULL;
      left = NULL;
      right = NULL;
    };
    TreeNode(E k){//k = key, which in this example is also the value(data)
      key = k;
      left = NULL;
      right = NULL;
    };
    ~TreeNode(){//when creating a template class destructor must be virtual

    };

    E key;
    TreeNode *left;
    TreeNode *right;
    //TreeNode *parent;
};

#endif
