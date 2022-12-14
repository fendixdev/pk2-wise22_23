#include <iostream>
#include "LinkedList.h"

void ausgabe(const char *text) {
    std::cout << text << std::endl;
}

int main() {
    LinkedList list;

    char test1[] = "test1";
    char appendText[] = "appendText";


    list.addElement("Elem 1");
    list.addElement("Elem 2");
    list.insert("Elem 3", 2);
    list.visit_all(ausgabe);
    return 0;
}
