#include <stdio.h>

//Testprojekt für Call by Reference & Call by Value

void addOne(int *a) {
    printf("func addOne: Adresse von a: %x\n", a); //Der Pointer hat als Value die Speicheradresse von int a. Bei &a würde man die Mem. address vom Pointer erhalten.
    *a += 1;
    printf("func addOne: Value von a: %d\n", *a);
}

int main() {
    printf("Starting...\n");
    int a = 5;
    printf("main: Adresse von a: %x\n", &a);
    addOne(&a);
    printf("main: Value von a: %d\n", a);
    return 0;
}
