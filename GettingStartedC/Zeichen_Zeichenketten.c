// Zeichen_Zeichenketten.c

#include <stdio.h>

void test_zeichen()
{
    int greater = 123;

    char ch = 'A';

    printf("ch = %c\n", ch);

    int n = ch;

    printf("n = %d\n", n);

    ch = 126;

    printf("ch = %c\n", ch);

    for (int i = 0; i <= 127; i++) {

        printf("%3d: %c\n", i, i);
    }
}

// ====================================

int string_length(char kette[])
{
    int index = 0;

    while (kette[index] != '\0') {
        index++;
    }

    return index;
}

int string_to_upper (char kette[])
{
    int index = 0;

    while (kette[index] != '\0') {

        // ist das Zeichen an dieser Stelle ein Kleinbuchstabe ???
        char ch = kette[index];

        // ch ist ein Kleinbuchstabe
        if ( ch >= 97  && ch <= 122 ) {
            
            ch = ch - 32;        // mach groß aus klein
            kette[index] = ch;   // rückschreiben
        }

        index++;
    }
}

void string_reverse(char kette[])
{
    // compute length
    int length = string_length(kette);

    // swap chars  // vertauschen
    // 8 / 2 = 4
    // 9 / 2 = 4
    for (int i = 0; i < length / 2; i++) {

        char ch = kette[length - 1 - i];

        kette[length - 1 - i] = kette[i];

        kette[i] = ch;
    }
}

void test_zeichenketten()
{
    // konstante Zeichenkette
    const char* s = "ABCDEF";
    printf("Kette:  %s\n", s);

    // Zeichenketten Variable
    char kette[] = "abcdef";
    printf("Kette:  %s\n", kette);

    //char kette2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 0 };
    char kette2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
    printf("Kette2: %s\n", kette2);

    int len = string_length(kette2);

    char kette3[] = "abcABC!123";
    printf("Vorher  Kette3: %s\n", kette3);
    string_to_upper(kette3);
    printf("Nachher Kette3: %s\n", kette3);
}