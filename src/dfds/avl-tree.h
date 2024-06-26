#ifndef DF_DS_LIBRARY_AVL_TREE_H
#define DF_DS_LIBRARY_AVL_TREE_H

#include "binary-search-tree.h"

class AVLTree : public BinarySearchTree{
public:
    // Overriden insert and remove functions
    // Do not modify these definitions

    // The AVL tree should be kept balanced after calling just insert or remove.
    bool insert(DataType val);
    bool remove(DataType val);

    // Define additional functions and attributes below if you need
    void leftRotate(Node *nodeParent, Node *node);
    void rightRotate(Node *nodeParent, Node *node);

    int getDepth(Node *n) const;
    int getLargerHeight(Node *n);

    void insertBalance(Node *unbalancedParent, Node *unbalancedNode, Node *locChild, DataType val);
    void removeBalance(Node *node, Node *nodeParent);
};

#endif  // DF_DS_LIBRARY_AVL_TREE_H

