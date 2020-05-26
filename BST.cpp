//
// Created by parth on 5/25/2020.
//

#include "BST.h"
#include <iostream>
#include <cstdlib>

using namespace std;

tree* BST::searchTree(tree *root, int x) {
    if(root == nullptr){
        return nullptr;
    }
    if(root->key_value == x){
        return root;
    }
    else if(x < root->key_value){
        return searchTree(root->left, x);
    }
    else{
        return searchTree(root->right, x);
    }
}

tree* BST::minimum(tree *root) {
    tree* minTemp; // Temporary Pointer
    minTemp = root;
    while(minTemp->left != nullptr){
        minTemp = minTemp->left;
    }
    return minTemp;
}

tree* BST::maximum(tree *root) {
    tree* maxTemp; // Temporary Pointer
    maxTemp = root;
    while(maxTemp->right != nullptr){
        maxTemp = maxTemp->right;
    }
    return maxTemp;
}

tree* BST::insertion(tree *root, int x){
    tree *newNode;
    if (root == nullptr){
        newNode = static_cast<tree *>(malloc(sizeof(tree)));
        newNode->key_value = x;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }
    if(x < root->key_value){
        root->left = insertion(root->left, x);
    }
    if(x > root->key_value){
        root->right = insertion(root->right, x);
    }
    return root;
}