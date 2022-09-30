#include <stdio.h>
#define SIZE 2

int ring[SIZE];
int head = 0;
int tail = 0;
int count = 0;

void enqueue(int data) {
    if (SIZE == count){
        ring[(tail + 1) % SIZE] = data;
    } else {
        ring[tail] = data;
        tail = (tail + 1) % SIZE;
        count++;
    }
}

int dequeue() {
    if (count == 0) return -1;
    int data = ring[head];
    head = (head + 1) % SIZE;
    count--;
    return data;
}

void print(){
    for(int i = 0; i < SIZE; i++){
        printf("data: %d | ", ring[i]);
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