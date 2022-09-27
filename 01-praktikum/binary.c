#include <stdio.h>

int binary(){
    int number = 0;
    int counter = 0;
    char storage[16];

    printf("Number: ");
    scanf("%d", &number);

    //Modulo
    while(number != 0){
        if(number % 2 == 0){
            storage[counter] = '0';
        } else {
            storage[counter] = '1';
        }
        counter++;
        number /= 2;
    }

    //Fill up unused spaces with 0
    for(int i = counter; i <= 15; i++){
        storage[i] = '0';
    }

    //Print array reverse for binary number
    for(int i = 15; i >= 0; i--){
        printf("%c", storage[i]);
    }
    printf("\n");


    return 0;
}