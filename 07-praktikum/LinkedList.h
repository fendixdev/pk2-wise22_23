#ifndef INC_07_PRAKTIKUM_LINKEDLIST_H
#define INC_07_PRAKTIKUM_LINKEDLIST_H

#include <stddef.h>
#include "Node.h"

class LinkedList {
public:
    Node *head;
    LinkedList(){
        this->head = nullptr;
    }

    int append(char* data);
    int insert(char* data, int p);
    int remove (int p);
    const char *get(int p);
    int index_of(const char* data);
    const char *first();
    const char *last();
    void printAll();
    void addElement(char* data);
    void visit_all(void (*work)(const char* data));
};

#endif //INC_07_PRAKTIKUM_LINKEDLIST_H
