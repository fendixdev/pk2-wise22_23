#include <stdio.h>
#include "min.h"


double min(double a[], int n) {
    double min = a[0];

    for (int i = 0; i < n; i++) {
        //printf("a[%d]: %.2f\n", i, a[i]); //Debugging
        if (a[i] < min) min = a[i];
    }
    return min;
}
