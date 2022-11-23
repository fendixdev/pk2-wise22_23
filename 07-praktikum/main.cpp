#include <iostream>
#include "LinkedList.h"


int main() {

    LinkedList list;

    char test1[] = "Test1";
    char test2[] = "Test2";
    char test3[] = "Test3";
    char test4[] = "append";
    char test5[] = "insert";

    list.addElement(test1);
    list.addElement(test2);
    list.addElement(test3);
    list.append(test4);
    list.insert(test5, 2);
    list.printAll();

    return 0;
}
