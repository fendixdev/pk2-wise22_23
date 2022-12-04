#include "Bild.h"
#include <iostream>

void Bild::druckeDaten() {
    std::cout << "- ID: " << getId() << " \"" << getTitle() << "\" aus dem Jahr " << getJahr() << " aufgenommen in " << getOrt() << std::endl;
}
