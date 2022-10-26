#include <stdlib.h>
#include <stdio.h>

struct element {
    long key;
    struct element *next;
};

struct element *top = NULL;

int push(long k) { //int für Rückgabe
    struct element *neu = (struct element *) malloc(sizeof(struct element));
    if (neu != NULL) {
        neu->key = k; // Kurz: neu -> key = k | Lang: (*neu).key = k (Zugriff auf Attribut von key in structure neu)
        neu->next = top;
        top = neu;
        return 1;
    } else {
        return 0;
    }
}

long pop() {
    if (top != NULL) {
        long k = top->key;
        struct element *tmp = top;
        top = top->next;
        free(tmp);
        return k;
    } else {
        return -1;
    }
}

int main() {
    int i = 0;
    int y = 0;

    for (i = 0; i <= 100; i++) {
        push(i);
    }

    for(y = 100; y != 0; y--){
        printf("%ld\n", pop());
    }
    printf("Done\n");
    return 0;
}