//
// Created by Maximilian Drude on 23.11.22.
//

#include "Node.h"

Node::Node() {
    data = 0;
    head = nullptr;
}

Node::Node(char *data) {
    this->data = data;
    this->head = nullptr;
}