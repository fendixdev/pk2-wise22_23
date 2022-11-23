#include <iostream>
#include "LinkedList.h"


int main() {

    LinkedList list;

    char test1[] = "Test1";
    char test2[] = "Test2";
    char test3[] = "Test3";

    list.addElement(test1);
    list.addElement(test2);
    list.addElement(test3);
    list.printAll();

    return 0;
}
