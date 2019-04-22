#ifndef BST_H
#define BST_H

#include <iostream>
#include "node.h"

template <typename T>
class BST : public Node<T> {
public:
    BST() {
        this->left= nullptr;
        this->right=nullptr;
    }

    BST(T x) {
        this->val = x;
        this->left= nullptr;
        this->right=nullptr;
    }
};

#endif // BST_H


