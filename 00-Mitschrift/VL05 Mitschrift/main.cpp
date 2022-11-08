#include "punkt.h"
#include <iostream>

int main() {

    Punkt p {}; //Objekt erzeugen - !! mit { }

    std::cout << p.to_string() << std::endl;

    return 0;
}