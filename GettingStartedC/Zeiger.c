#include <stdio.h>


// Unterprogramm

void vertausche(int* n, int* m)
{
    int tmp1 = *n;  // indirektes Lesen
    int tmp2 = *m;

    *n = tmp2;      // indirektes Schreiben
    *m = tmp1;
}

int malDreiClassic(int n)
{
    return 3 * n;
}

void malDrei(int n)
{
    n = 3 * n;
}

void malDreiNeu(int* ip)
{
    int tmp;

    tmp = *ip;      // indirekte lesender Zugriff

    tmp = 3 * tmp;  

    *ip = tmp;      // indirekte (schreibende) Zugriff
}

void zeiger()
{
    int x = 5;
    int y = 6;

    printf("x=%d - y=%d \n", x, y);
    vertausche(&x, &y);
    printf("x=%d - y=%d \n", x, y);
}

void zeiger_malDrei()
{
    int x = 5;
    printf("x=%d\n", x);

    //malDrei(x);
    malDreiNeu(&x);
    printf("x=%d\n", x);
}

void zeiger_introduction()
{
    int n = 123;           // Declaration
    printf("n: %d\n", n);

    int* pi;

    pi = &n;  // Adresse von
 
    *pi = 456; // Indirekter Zugriff  // Statement

    // Wie groﬂ ist ein int im Speicher ???
    int anzahlBytes = sizeof(float);
    printf("anzahlBytes: %d\n", anzahlBytes);
}