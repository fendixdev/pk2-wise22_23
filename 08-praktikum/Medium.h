#ifndef INC_08_PRAKTIKUM_MEDIUM_H
#define INC_08_PRAKTIKUM_MEDIUM_H

#include <string>


class Medium {
private:
    int id;
    std::string title;
    int jahr;

public:
    Medium(std::string title, int jahr) : title(title), jahr(jahr) {
        static int idCounter = 0;
        this->id = idCounter++;
    };

    //Getter
    int getAlter() { //Inline-Funktion
        return 2022 - jahr;
    }

    std::string getTitle();
    int getId();
    int getJahr();

    //Funktionen
    virtual void druckeDaten() = 0;

};

#endif //INC_08_PRAKTIKUM_MEDIUM_H
