#include <stdio.h>
#include <string.h>

int laenge(char text[]) {
    int i = 0;
    while (text[i] != '\0') i++;
    return i;
}

int main() {
    char text[100];
    strcpy(text, "Hallo"); //string.h lib
    printf("Länge: %d", laenge(text));
    return 0;
}
