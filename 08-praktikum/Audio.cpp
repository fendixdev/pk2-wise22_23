#include "Audio.h"
#include "Medium.h"
#include <iostream>
#include <string>

std::string Audio::getInterpret() {
    return this->interpret;
}

int Audio::getDauer() {
    return this->dauer;
}

void Audio::setInterpret(std::string interpret) {
    this->interpret = interpret;
}

void Audio::setDauer(int dauer) {
    this->dauer = dauer;
}

void Audio::druckeDaten() {
    std::cout << "- ID: " << getId() << " \"" << getTitle() << "\" von " << getInterpret() << " aus dem Jahr " << getJahr() << " mit der Spieldauer von " << getDauer() << " Sekunden." << std::endl;
}
