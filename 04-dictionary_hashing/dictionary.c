#include <stdio.h>
#define M 2

enum status
{
    frei,      // 0
    geloescht, // 1
    belegt     // 2
};

typedef struct 
{
    int wert;
    enum status state;
} element;

static element Array[M];

int insert(int a)
{

    int bnummer = a % M; // 5
    int i = bnummer;     // 5

    while (Array[i].state == 2)
    {
        i = (i + 1) % M; //  5 6 7 8 9 10
        if (i == bnummer)
        { //
            printf("Array Durchgesucht !\n");
            return 0;
        }
    }

    Array[i].wert = a;
    Array[i].state = belegt;
    return 1;

    // struct element *ptr = &Array[bnummer];
    // while (ptr->state != 0) // 0 = frei
    // {
    //     if (ptr->wert == -1)
    //     {
    //         ptr = &Array[0];
    //     }
    //     else
    //     {
    //         ptr = ptr + 1;
    //     }
    // }
    // ptr->wert = a;
    // ptr->state = 2;
}

int delete1 (int a)
{
    int bnummer = a % M;
    int i = bnummer;

    // Es gibt kein Element zum Löschen
    if (Array[i].state == frei)
        return 0;

    while (Array[i].wert != a)
    {
        i = (i + 1) % M;
        if (i == bnummer)
            return 0;
        else
        {
            Array[i].wert = 0;
            Array[i].state = geloescht;
            return 1;
        }
    }

    return 0;
}

int member(int a)
{
    int bnummer = a % M;

    // 1.Fall Schlüssel gefunden
    if (Array[bnummer].wert == a)
        return 1;

    // 2.Fall , Element wurde nie hinzugefügt
    else if (Array[bnummer].state == frei)
        return 0;

    // 3.Fall
    int i = bnummer;
    while (Array[i].wert != a)
    {
        i = (i + 1) % M;
        // Array Durchgelaufen, Schlüssel nicht gefunden
        if (i == bnummer)
            return 0;
    }
    return 1;
}

void printArray()
{
    element *ptr = Array;
    while (ptr->wert != Array[M].wert)
    {
        printf("%d ", ptr->wert);
        ptr = ptr + 1;
    }
}