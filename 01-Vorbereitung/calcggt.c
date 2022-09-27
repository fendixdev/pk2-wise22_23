#include <stdio.h>
#include "ggt.h"

int main() {
    printf("GGT von 9 und 21 ist %d\n", ggt(9, 21));
    printf("GGT von 36 und 90 ist %d\n", ggt(36, 90));
    return 0;
}

// Objektdatei erzeugen: gcc -c ggt.c
// Compilen: gcc -o calcggt calcggt.c ggt.o (gcc -o name quelle obj-datei)
