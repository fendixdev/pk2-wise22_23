#ifndef INC_07_01_PRAKTIKUM_MIT_STRUCT_LINKEDLIST_H
#define INC_07_01_PRAKTIKUM_MIT_STRUCT_LINKEDLIST_H

#include <stddef.h>

class LinkedList {

public:

    struct node {
        char *data;
        node *next;
    };

    node *head;

    LinkedList(): head(nullptr) {};

    int append(char *data);

    int insert(char *data, int p);

    int remove(int p);

    const char *get(int p);

    int index_of(const char *data);

    const char *first();

    const char *last();

    void printAll();

    void addElement(char *data);

    void visit_all(void (*work)(const char *data));

#endif //INC_07_01_PRAKTIKUM_MIT_STRUCT_LINKEDLIST_H

};
