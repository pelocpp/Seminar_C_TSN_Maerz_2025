#include <stdio.h>    // printf
#include <stdlib.h>   // malloc, free
#include <string.h>   // strcpy

#define NumContacts   10
#define BufferLength  100

struct Contact
{
    char* name;
    int   phone;
};

// Feld für Kontakte
struct Contact myContacts[NumContacts];

// Vorwärtsdeklarationen
void enterContact();
void printContacts();
void releaseContacts();
void searchContact();

// Realisierung
void enterContact()
{
    char vorname[BufferLength] = { 0 };
    int phone = 0;

    printf("Geben Sie Ihren Namen ein: ");
    scanf_s("%s", vorname, BufferLength);
    printf("Vorname: %s\n", vorname);

    // Speicher für Vornamen passgenau anlegen
    int len = (int) strlen(vorname) + 1;  // plus '\0' 
    char* name = malloc(len * sizeof(char));
    strcpy_s(name, len, vorname);

    printf("Geben Sie Ihre Telefonnummer ein: ");
    scanf_s("%d", &phone);
    printf("Telefonnummer: %d\n", phone);

    // suche freien Platz im Feld myContacts
    for (int i = 0; i < NumContacts; i++) {

        if (myContacts[i].name == NULL) {

            // leeren Platz gefunden, baue eine Contact Struktur
            struct Contact myContact = { 
                .name = name,
                .phone = phone
            };

            // Wertzuweisung: 
            // Füge myContact in das globale Feld myContacts ein
            myContacts[i] = myContact;

            printf("Habe Kontakt an der Stelle %d eingefuegt!\n", i);

            break; // bin fertig
        }
    }
}

void searchContact()
{
    char vorname[BufferLength] = { 0 };
    int phone = 0;

    printf("Suche Nummer von: ");
    scanf_s("%s", vorname, BufferLength);
    printf("Name: %s\n", vorname);

    for (int i = 0; i < NumContacts; i++) {

        if (myContacts[i].name == NULL) {
            continue;
        }

        // VORSICHT: Hier werden Adressen verglichen
        // if (myContacts[i].name == vorname) {
        if ( strcmp (myContacts[i].name, vorname) == 0) {

            int phone = myContacts[i].phone;
            printf("%s hat die Tel.Nr. %d\n", vorname, phone);
            return;
        }
    }

    printf("%s ist nicht im Telefonbuch enthalten.\n", vorname);
}

void releaseContacts()
{
    for (int i = 0; i < NumContacts; i++) {

        if (myContacts[i].name != NULL) {

            free(myContacts[i].name);  // gib Namen wieder frei !!!
        }
    }
}

void printContacts()
{
    for (int i = 0; i < NumContacts; i++) {

        if (myContacts[i].name != NULL) {

            printf("Name: %s, Phone: %d\n", 
                myContacts[i].name, myContacts[i].phone);
        }
    }
}

void kontakteverwaltung()
{
    int menu = 0;

    printf("Meine Kontakte\n");
    printf("==============\n");

    while (menu != 9) {

        printf("Waehlen Sie aus:\n");
        printf("1 - Neuer Kontakt:\n");
        printf("2 - Alle Kontakte ausgeben:\n");
        printf("3 - Suche Telefonnummer:\n");
        printf("9 - Ende:\n");

        scanf_s("%d", &menu);

        switch (menu)
        {
        case 1:
            enterContact();
            break;
        case 2:
            printContacts();
            break;
        case 3:
            searchContact();
            break;
        case 9:
            printf("Ende des Programms\n");
            releaseContacts();
            break;
        default:
            printf("Falsche Eingabe\n");
        }
    }
}


