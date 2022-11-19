#include <stdio.h>

int countspaceIndex(char s[]) { //Mit Indexzugriffen
    int i = 0;
    int spaces = 0;
    while (s[i] != '\0') {
        if (s[i] == ' ') spaces++;
        i++;
    }
    return spaces;
}

int countspacePointer(char s[]) { //Mit Zeigerarithmetik
    int spaces = 0;

    while (*s != '\0') {
        if (*s == ' ') spaces++;
        s++;
    }

    return spaces;
}


