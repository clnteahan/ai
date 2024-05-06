//
// Created by cjose on 5/2/2024.
//

#ifndef SMART_TREE_H
#define SMART_TREE_H


#include "Node.h"

template <typename T> class Tree {
private:
    Node<T>* root;
public:
    /**
     * Constructs a Tree with a null root.
     */
    Tree() {
        root = nullptr;
    }
    Node<T>* getRoot() {
        return root;
    }
    void setRoot(Node<T>* root) {
        this->root = root;
    }

    [[nodiscard]] explicit operator string const() {
        return (string) root;
    }
};


#endif //SMART_TREE_H
