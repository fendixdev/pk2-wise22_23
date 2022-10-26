#include <stdio.h>

struct punkt {
    int x;
    int y;
};

struct rechteck { //Rechteck setzt sich aus den 2x2 Punkten zusammen.
    struct punkt p1;
    struct punkt p2;
};

struct rechteck create_rechteck(int x1, int y1, int x2, int y2) {
    struct rechteck r; //Speicher reservieren

    r.p1.x = x1;
    r.p1.y = y1;
    r.p2.x = x2;
    r.p2.y = y2;

    return r;
}

int flaeche(struct rechteck r) {
    return (r.p2.x - r.p1.x) * (r.p1.y - r.p2.y);
}

void print_punkt(struct punkt p) {
    printf("(%d, %d)\n", p.x, p.y);
}

int main(){

    struct punkt p;
    p.x = 100;
    p.y = 200;
    print_punkt(p);

    struct rechteck r = create_rechteck(100, 110, 110, 100);
    printf("Fläche: %d\n", flaeche(r));

    return 0;
}