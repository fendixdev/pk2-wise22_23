#include "stringcat.h"
#include <string.h>
#include <stdlib.h>

char *stringcat(const char *str1, const char *str2) {
    char *concat = (char *) malloc(100); //Speicherplatz freigeben
    strcpy(concat, str1);
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    strcpy(concat + i, str2);
    return concat;
}

