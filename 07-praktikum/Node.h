#ifndef INC_07_PRAKTIKUM_NODE_H
#define INC_07_PRAKTIKUM_NODE_H

class Node {
public:
    char* data;
    int p;
    Node* next;
    Node(char* data, int p) {
        this->data = data;
        this->p = p;
        this->next = nullptr;
    }
};


#endif //INC_07_PRAKTIKUM_NODE_H
