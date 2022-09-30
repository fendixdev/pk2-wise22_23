#include <stdio.h>

int ring[2];
int arrLength = 2;
int head_index = 0;
int tail_index = 0;
int size = 0;

void enqueue(int data) {
    if (size == arrLength){
        ring[tail_index + 1] = data;
    } else {
        ring[tail_index] = data;
        tail_index = (tail_index + 1) % arrLength;
        size++;
    }
}

int dequeue() {
    if (size == 0) return -1;
    int data = ring[head_index];
    head_index = (head_index + 1) % arrLength;
    size--;
    return data;
}

void print(){
    for(int i = 0; i < arrLength; i++){
        printf("d: %d ", ring[i]);
    }
    printf("\n");
}


int main() {
    enqueue(1);
    enqueue(2);
    enqueue(2);
    printf("%i ", dequeue());
    enqueue(3);
    printf("%i ", dequeue());
    printf("%i ", dequeue());
    printf("%i ", dequeue());
    enqueue(4);
    enqueue(5);
    printf("%i ", dequeue());
    printf("%i \n", dequeue());
    return 0;
}