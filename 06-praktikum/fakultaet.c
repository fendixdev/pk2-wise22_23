#include "fakultaet.h"
#include <stdio.h>

unsigned long long int fakultaet(int n) {
    int i = 0;
    if(n == 0) return 1;
    for (i = n - 1; i > 0; i--) n *= i;
    return n;
}

/*
 * if (n == 0) return 0;
 * return n * fakultaet(n-1);
 */