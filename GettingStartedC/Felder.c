#include <stdio.h>

#include "Globals.h"

#define length 10

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

int zinsenRevised(
    double interests[], 
    int len, 
    double startCapital, 
    double interest) 
{
    double newCapital = startCapital;

    interests[0] = startCapital;

    int years = 0;

    printf("Startkapital: %f\n", startCapital);

    while (newCapital < 2 * startCapital)
    {
        double interestProYear = (newCapital / 100.0) * interest;

        newCapital += interestProYear;

        years++;

        // passt years noch in Bezug auf len ?
        if (years == len) {
            // break;
            return 0;
        }

        interests[years] = newCapital;

        printf("Im %d. Jahr:  Aktuelles Kapital: %f\n", years, newCapital);
    }

    return years;
}

// double myInterests[3] = { 0.0 };

void zinsen()
{
    double myInterests[20] = { 0.0 };

    int years = zinsenRevised(myInterests, 20, 1000.0, 5.0);
}


void zinsen_erste_version() {

    double startCapital = 1000.0;

    double newCapital = startCapital;

    double interest = 5.0;

    int years = 0;  

    printf("Startkapital: %f\n", startCapital);

    while ( newCapital < 2 * startCapital )
    {
        double interestProYear = (newCapital / 100.0) * interest;

        newCapital += interestProYear;

        years++;

        printf("Im %d. Jahr:  Aktuelles Kapital: %f\n", years, newCapital);
    }
}