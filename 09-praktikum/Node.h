#ifndef INC_07_PRAKTIKUM_NODE_H
#define INC_07_PRAKTIKUM_NODE_H

#include <stddef.h>

class Node {
public:
    char* data;
    Node* head;
    Node();
    Node(char* data);
};


#endif //INC_07_PRAKTIKUM_NODE_H
