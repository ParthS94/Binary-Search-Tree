//
// Created by parth on 5/25/2020.
//

#ifndef BINARYSEARCHTREE_BST_H
#define BINARYSEARCHTREE_BST_H

struct tree //Since each left and right sub trees are BST trees as well
{
    int key_value;
    struct tree *left;
    struct tree *right;
    struct tree *parent;
};

class BST {
public:
    tree* searchTree(tree *root, int x);
    tree *minimum(tree *root);
    tree *maximum(tree *root);
    tree *insertion(tree* root, int x);
};


#endif //BINARYSEARCHTREE_BST_H
