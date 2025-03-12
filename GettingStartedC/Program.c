#include <stdio.h>

#include "Globals.h"

void main()
{
    wallet();
}

void main_intro()
{
    zinsen();
    return;


    g_zahlen[0] = 123;

    felder();

    printHello(5);
    printf("\n");
    printHello(3);

    int ergebnis;
    ergebnis = malZwei(5);
}



void introduction()
{

    int m = 0;
    float f = 3.5;

    printf("Hello World\n");

    // =========================

    int a = 1;
    int b = 2;

    int c = 5;
    int d = 6;

    if ((a < b) || !(d < c))
    {
        printf("%d ist kleiner als %d\n", a, b);
    }
    else if (a == 2 * b)
    {
        printf("nicht erfuellt\n");
        printf("nicht erfuellt\n");
    }

    // ============================

    // Bemerkung:

    //if (a)
    //{
    //    printf("Bin hier ...");
    //}

    // ===========================================

    // for - Wiederholungsanweisung
    for (
        int i = 0; i < 10; i = i + 3)
    {
        // die zu wiederholenden Anw.
        printf("bin hier: %d\n", i);
    }



    // ======================

    printf("While:\n");

    int n = 1;
    while (n < 6)
    {
        printf("n = %d\n", n);
        n += 1;
    }

    int start;
    scanf_s("%d", &start);
    printf("Start: %d\n", start);

    // from while to for
    for (int n = 1; n < 6; n += 1)
    {
        printf("for: n = %d\n", n);
    }
}

