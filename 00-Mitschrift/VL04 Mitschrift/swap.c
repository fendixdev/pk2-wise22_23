#include <stdio.h>

void swap(int *a, int *b) { //Dreieckstausch
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 100;
    int b = 200;
    printf("Nicht vertauscht: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Vertauscht: a = %d, b = %d\n", a, b);
    return 0;
}