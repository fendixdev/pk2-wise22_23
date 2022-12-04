#ifndef INC_08_PRAKTIKUM_AUDIO_H
#define INC_08_PRAKTIKUM_AUDIO_H

#include <string>
#include "Medium.h"

class Audio : public Medium {
private:
    std::string interpret;
    int dauer;

public:
    Audio(std::string interpret, std::string title, int jahr, int dauer) : Medium(title, jahr), interpret(interpret), dauer(dauer){};

    //Getter
    std::string getInterpret();
    int getDauer();

    //Setter
    void setInterpret(std::string interpret);
    void setDauer(int dauer);

    //Funktionen
    void druckeDaten();
};


#endif //INC_08_PRAKTIKUM_AUDIO_H
