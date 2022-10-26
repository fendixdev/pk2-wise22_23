// Big Endian: [0 | 0 | 0 | 1]
// Little Endian: [1 | 0 | 0 | 0]

#include <stdio.h>

union endian {
    int i;
    unsigned char byte[sizeof(int)];
};

int main() {

    union endian e;
    e.i = 1;

    int i = 0;
    for (i = 0; i < sizeof(int); i++) {
        printf("%d", e.byte[i]);
    }
    printf("\n");

    return 0;
}