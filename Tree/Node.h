//
// Created by cjose on 5/2/2024.
//

#ifndef SMART_NODE_H
#define SMART_NODE_H


template <typename T> class Node {
private:
    T data;
    Node<T>* left;
    Node<T>* right;

public:
    Node() {
        left = nullptr;
        right = nullptr;
    }
    Node(T data) {
        this->data = data;
        Node();
    }
    T getData() {
        return data;
    }
    void setData(T data) {
        this->data = data;
    }

};


#endif //SMART_NODE_H
