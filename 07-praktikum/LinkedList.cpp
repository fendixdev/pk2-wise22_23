#include "LinkedList.h"
#include <iostream>

int LinkedList::append(char *data) { //fix für const char *data
    Node *temp = head;

    while (temp != nullptr) {
        if(temp->head == nullptr){
            temp->data = data;
            return 1;
        }
        temp = temp->head;
    }
    return 0;
}

int LinkedList::insert(char *data, int p) {
    Node *temp = head;
    Node *newNode = new Node(data);

    if(p == 0){
        newNode->head = head;
        head = newNode;
        return 1;
    }

    for (int i = 0; i < p-1; ++i) {
        if(temp->head == nullptr){
            return 0;
        }
        temp = temp->head;
    }

    newNode->head = temp->head;
    temp->head = newNode;
    return 1;
}

int LinkedList::remove(int p) {
    Node *temp = head;

    if(p == 0){
        head = temp->head;
        delete temp;
        return 1;
    }

    for (int i = 0; i < p-1; ++i) {
        if(temp->head == nullptr){
            return 0;
        }
        temp = temp->head;
    }

    Node *temp2 = temp->head;
    temp->head = temp2->head;
    delete temp2;
    return 1;
}

const char *LinkedList::get(int p) {
    Node *temp = head;

    for (int i = 0; i < p; ++i) {
        if(temp->head == nullptr){
            return 0;
        }
        temp = temp->head;
    }

    return temp->data;
}

int LinkedList::index_of(const char *data) {
    Node *temp = head;
    int i = 0;

    while (temp != nullptr) {
        if(temp->data == data){
            return i;
        }
        temp = temp->head;
        i++;
    }
    return -1;
}

const char *LinkedList::first() {
    return head->data;
}

const char *LinkedList::last() {
    Node *temp = head;

    while (temp != nullptr) {
        if(temp->head == nullptr){
            return temp->data;
        }
        temp = temp->head;
    }
    return 0;
}

void LinkedList::visit_all(void (*work)(const char *)) {
    Node *temp = head;

    while (temp != nullptr) {
        work(temp->data);
        temp = temp->head;
    }
}


//Testfunktionen
void LinkedList::printAll() {
    Node *temp = head;

    while (temp != nullptr) {
        std::cout << temp->data << std::endl;
        temp = temp->head;
    }
}

void LinkedList::addElement(char *data) {
    Node *temp = new Node(data);

    if (head == nullptr) {
        head = temp;
    } else {
        Node *temp2 = head;
        while (temp2->head != nullptr) {
            temp2 = temp2->head;
        }
        temp2->head = temp;
    }
}