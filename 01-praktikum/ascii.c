#include <stdio.h>

int ascii(){
    int counter = 0;
    int z = 0;

    printf("Anzahl der Zeilen: ");
    scanf("%d", &z);

    for (int i = 32; i < 127; i++) {
        printf("%5d %c", i, i);
        counter++;
        if (counter == z) {
            printf("\n");
            counter = 0;
        }
    }
    return 0;
}