#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList list;

    char test1[] = "test1";
    char appendText[] = "appendText";


    list.addElement("Elem 1");
    list.addElement("Elem 2");
    list.append(" - appended");
    list.printAll();
    return 0;
}
