#include "binomialkoeffizienten.h"
#include "fakultaet.h"
#include <stdio.h>

int binomialkoeffizienten(int n, int k) {
    return (fakultaet(n) / (fakultaet(k) * fakultaet(n - k)));
}
