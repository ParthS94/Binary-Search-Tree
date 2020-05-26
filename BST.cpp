//
// Created by parth on 5/25/2020.
//

#include "BST.h"
#include <iostream>
#include <cstdlib>

using namespace std;

tree* BST::searchTree(tree *t, int x) {
    if(t == nullptr){
        return nullptr;
    }
    if(t->key_value == x){
        return t;
    }
    else if(x < t->key_value){
        return searchTree(t->left, x);
    }
    else{
        return searchTree(t->right, x);
    }
}