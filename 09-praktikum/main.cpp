#include <iostream>
#include "LinkedList.h"

void ausgabe(const char* text){
    std::cout << text << std::endl;
}

int main() {
    using namespace std;
    LinkedList liste;

    char test1[] = "Hallo";


    liste.append(test1);
    liste.append(test1);
    liste.printAll();

    return 0;
}
