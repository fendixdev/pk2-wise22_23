#include <stdio.h>
#include "charToUpperCase.h"
#include "upper.h"

int main() {
    //Aufgabe 1
    //printf("%c\n", charToUpperCase('a'));

    //Aufgabe 2
    char text[5] = {'a', 'B', 'c', 'd', '!'};
    upper(text);
    return 0;
}
