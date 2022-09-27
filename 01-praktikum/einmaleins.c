#include <stdio.h>

int einmaleins(){

    int von, bis;
    int counter = 0;

    printf("Von: ");
    scanf("%d", &von);
    printf("Bis: ");
    scanf("%d", &bis);

    for(int i = 1 ; i <= 10; i++) {
        for (int j = von; j <= bis; j++) {
            printf("%5d", i * j);
            counter++;
            if (counter == von + 1) {
                printf("\n");
                counter = 0;
            }

        }
    }
    return 0;
}