#include "LinkedList.h"
#include <iostream>
#include <stdio.h>

//TODO: append fix
int LinkedList::append(char *data) { //Text wird ersetzt, nicht appended
    node *current = head;
    if (head == nullptr) {
        std::cout << "List is empty" << std::endl;
        head = new node;
        head->data = data;
        head->next = nullptr;
        return 1;
    } else {
            while (current->next != nullptr) {
                current = current->next;
            }
            //append text
            char *newArray = new char[std::strlen(current->data) + std::strlen(data) + 1];
            std::strcpy(newArray,
                        current->data); //Copies the C string pointed by source into the array pointed by destination, including the terminating null character (and stopping at that point).
            std::strcat(newArray, data); //Appends a copy of the source string to the destination string.
            current->data = newArray;
            return 1;
    }
    return 0;
}

int LinkedList::insert(char *data, int p) {
    node *current = head;
    node *newNode;
    newNode->data = data;
    newNode->next = nullptr;

    if (p == 0) { //Wenn an erster Stelle eingefügt werden soll
        newNode->next = head;
        head = newNode;
        return 1;
    }
    for (int i = 0; i < p - 1; i++) {
        if (current->next == nullptr) return 0;
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
    return 1;
}

int LinkedList::remove(int p) {
    node *current = head;
    node *temp;
    if (p == 0) {
        head = current->next;
        delete current;
        return 1;
    }
    for (int i = 0; i < p - 1; i++) {
        if (current->next == nullptr) return 0;
        current = current->next;
    }
    temp = current->next;
    current->next = temp->next;
    delete temp;
    return 1;
}

const char *LinkedList::get(int p) {
    node *current = head;
    for (int i = 0; i < p; i++) {
        if (current->next == nullptr) return nullptr;
        current = current->next;
    }
    return current->data;
}

int LinkedList::index_of(const char *data) {
    node *current = head;
    int i = 0;
    while (current != nullptr) {
        if (strcmp(current->data, data) == 0) return i;
        current = current->next;
        i++;
    }
    return -1;
}

const char *LinkedList::first() {
    return head->data;
}

const char *LinkedList::last() {
    node *current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    return current->data;
}

void LinkedList::visit_all(void (*work)(const char *)) {
    node *current = head;
    while (current != nullptr) {
        work(current->data);
        current = current->next;
    }
}

//Testfunktionen

void LinkedList::addElement(char *data) {
    node *newNode = new node;
    newNode->data = data;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        node *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList::printAll() {
    node *current = head;
    while (current != nullptr) {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}