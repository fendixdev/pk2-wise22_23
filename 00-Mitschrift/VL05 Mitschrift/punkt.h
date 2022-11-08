//Includeguard

//#ifndef PUNKT_H_
//#define PUNKT_H_

//Klassendeklaration

#include <iostream>

class Punkt {
private:
    int x;
    int y;
public:
    Punkt(); //Standartkonstruktor
    Punkt(int x, int y); //Konstruktor
    int getX();
    int getY();
    std::string to_string();
};