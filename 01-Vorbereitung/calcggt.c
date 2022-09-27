#include <stdio.h>
#include "ggt.h"

int main() {
    printf("GGT von 9 und 21 ist %d\n", ggt(9, 21));
    printf("GGT von 27 und 9 ist %d\n", ggt(27, 9));
    return 0;
}

// Objektdatei erzeugen: gcc -c ggt.c
// Compilen: gcc -o calcggt calcggt.c ggt.o (gcc -o name quelle obj-datei)
