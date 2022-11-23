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
    int append(const char* data);
    int remove (int p);
    const char *get(int p);
    int index_of(const char* data);
    const char *first();
    const char *last();
    void visit_all((*work)(const char* data));
};


#endif //INC_07_PRAKTIKUM_NODE_H
