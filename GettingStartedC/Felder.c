#include "Globals.h"

#define length 10

#define length2  sdfsdfsdfsdf  

// globale Variable
int g_zahlen[5] = { 0 };

void initArray(int feld[], int count)
{
    for (int i = 0; i < count; ++i) {

        feld[i] = 2 * i + 1;
    }
}

void printArray(int feld[], int count)
{
    for (int i = 0; i < count; ++i) {

        printf("%d ", feld[i]);
    }
}

void felder()
{
    int zahlen[length] = { 0 };  // lokale Variable

    initArray(zahlen, length);

    printArray(zahlen, length);
}

void felder_intro()
{
    int zahlen[length] = { 0 };  // lokale Variable

    // Zugriff auf der erste Element

    zahlen[0] = 123; 

    // Vorbelegung eines Felds
    for (int i = 0; i < length; ++i) {
        zahlen[i] = 2 * i;
    }
}