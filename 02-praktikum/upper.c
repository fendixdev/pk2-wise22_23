#include <stdio.h>
#include "charToUpperCase.h"

void upper(char text[]) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = charToUpperCase(text[i]);
        }
        printf("%c", text[i]);
    }
    printf("\n");
}