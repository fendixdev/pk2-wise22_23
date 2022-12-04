#include <iostream>
#include <string>
#include "Medium.h"
#include "Audio.h"
#include "Bild.h"

int main() {
    std::cout << "Start..." << std::endl;

    Audio *a = new Audio("Beatles", "Yesterday", 1965, 200);
    Bild *b = new Bild("Hamburg", 2019, "Hamburg");

    a->druckeDaten();
    b->druckeDaten();
    //std::cout << "Alter: " << a->getAlter() << std::endl;

    return 0;
}
