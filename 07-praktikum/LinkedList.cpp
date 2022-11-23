#include "LinkedList.h"
#include <iostream>

int LinkedList::append(const char *data) {

    Node *temp = nullptr;

    while (temp->head != nullptr) {
        temp->head = temp->head;
    }

    return 0;
}


//Testfunktionen
void LinkedList::printAll() {
    Node *temp = head;

    while(temp != nullptr){
        std::cout << temp->data << std::endl;
        temp = temp->head;
    }
}

void LinkedList::addElement(char *data) {
    Node *temp = new Node(data);

    if(head == nullptr){
        head = temp;
    } else {
        Node *temp2 = head;
        while(temp2->head != nullptr){
            temp2 = temp2->head;
        }
        temp2->head = temp;
    }
}