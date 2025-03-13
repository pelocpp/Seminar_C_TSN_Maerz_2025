#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_LENGTH  100

void dynamisch()
{
    char vorname[BUFFER_LENGTH] = { 0 };

    printf("Geben Sie Ihren Vornamen ein: ");
    int result = scanf_s("%s", vorname, BUFFER_LENGTH);

    printf("Result:  %d\n", result);
    printf("Vorname: %s\n", vorname);

    // Speicher für Vornamen passgenau anlegen
    int len = strlen(vorname) + 1;  // plus '\0' 

    char* name = malloc(len * sizeof(char));

    strcpy_s(name, len, vorname);

    printf("Vorname: %s\n", name);

    free(name);
}

void dynamisch_zum_ersten()
{
    int n;

    printf("Geben Sie die Laenge des Felds ein: ");
    scanf_s("%d", &n);

    printf("Eingabe: %d\n", n);

    // Möchte Speicher für n int-Variablen anlegen

    // Vorab: Wieviele Bytes benötigt eine int-Variable?

    int anzBytes = sizeof(int);

    int* mem = NULL;
    
    mem = malloc(n * sizeof(int));
    if (mem != NULL) {

        // Wie kann ich auf diesen Speicher schreibend zugreifen ???
        for (int i = 0; i < n; i++) {
            mem[i] = 123 + i;
        }

        // Wie kann ich auf diesen Speicher lesend zugreifen ???
        for (int i = 0; i < n; i++) {
            printf("%d\n", mem[i]);
        }

        free(mem);
    }
    else {

        printf("Kein Speicher verfügbar!\n");
    }
}