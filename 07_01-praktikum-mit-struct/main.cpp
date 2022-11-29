#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList list;

    char test1[] = "test1";
    char appendText[] = "appendText";

    list.addElement(test1);
    list.printAll();
    return 0;
}
