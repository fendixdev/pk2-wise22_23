#include <stdio.h>
#include "countspace.h"
#include "min.h"
#include "stringcat.h"

int main() {

    char string[] = "Hallo ich bin Max!";
    double zahlen[5] = {6.0, 3.0, 2.0, 9.0, 8.0};

    char string1[] = "Guten";
    char string2[] = " Morgen";


    //countspaceIndex() mit Indexzugriff
    printf("countspaceIndex(): Anzahl der Leerzeichen: %d\n", countspaceIndex(string));

    //countspacePointer() mit Zeigerarithmetik
    printf("countspacePointer(): Anzahl der Leerzeichen: %d\n", countspacePointer(string)); //char-Array (String) ist bereits ein Pointer. feld <=> &feld[0]

    //double min(double a[], int n)
    printf("min(): Kleinste Zahl %.2f\n", min(zahlen, 5));

    //Stringcat
    printf("stringcat(): %s\n", stringcat(string1, string2)); //string1 <=> &string1[0], string2 <=> &string2[0]
    return 0;
}
