#ifndef INC_08_PRAKTIKUM_BILD_H
#define INC_08_PRAKTIKUM_BILD_H
#include <string>
#include "Medium.h"


class Bild : public Medium{
private:
    std::string ort;
public:
    Bild(std::string title, int jahr, std::string ort): Medium(title, jahr), ort(ort) {};

    //Getter
    std::string getOrt(){
        return this->ort;
    }

    //Funktionen
    void druckeDaten();


};


#endif //INC_08_PRAKTIKUM_BILD_H
