#include <stdio.h>

// Unterprogramm
void printHello(int wieOft)
{
    for (int i = 0; i < wieOft; i++) {
        printf("Hello\n");
    }
}

// Funktion
int malZwei(int wert)
{
    int result;

    result = wert * 2;

    return result;
}