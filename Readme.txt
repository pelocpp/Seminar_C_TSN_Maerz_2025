Erste Schritte in C

Dennis Ritchie

Unix

1980

"Hello World"

Struktur eines C-Programms.

a) Eingabe: Quelltext ( .c  )

    i) Korrektheit // Grammatik // Syntax
       ==> Compilieren
       ==> Tool: Compiler // Übersetzer

b) Ausgabe: Maschinencode
       ==> Vorstufe: Erzeugung von .obj Dateien
       ==> Erstellen (das Programm 'Bauen')
       
// ======================================

Beginn eines C-Programms:

Im Unterprogramm mit dem Namen 'main'

Debugger: Tool  Zum Suchen der Fehler

Debugger  ==> Wanze   "entwanzen"

// ======================================

Variable, Datentypen

int ( bool ) float string

Variablen kann man als Platzhalter für Speicher
ansehen.

lokale und globale Variablen

int: Ganze Zahlen (-5, 0, 5, ..)

Datentypen wie int und float
gibt es in mehreren Varianten:

a) int, long, short, long long

b) float (4 Bytes) , double (8 Bytes)

Legt fest, wieviel Speicher intern bemötigt wird.

Speichereinheit:

Bit:  2 Werte : 0 und 1

Byte: 8 Bits

Kann man Werte von -128 bis +127 darstellen.

"Zweierkomplement"

Bei 16 Bits:  -32.768 bis 32.767

1 Byte:    char
2 Bytes:   short
4 Bytes:   int (long)
8 Bytes:   long long // size_t

Standardfall:  int

Stolperfalle:  short 

       Arithmetik: Addieren, Subtrahieren

       CPU:  32-Bit Arithmetik // 64-Bit Arithmetik

       NICHT: 16-Bit Arithmetik.

// =============================================

Anweisungen /  Nicht: Befehl

if-Anweisung

SYNTAX:

    if ( bedingung ) 
    {
    }

bedingung: Ausdruck, der
wahr oder falsch ist.

// bool

Dennis Ritchie:

A Programmer knows what he does :)

====================================================

Logisches And:   &&
Logisches Oder:  ||
Logische Nicht:  !

Operatoren Vorrang // Punkt-vor-Strich

=========================================

Debugger:

Haltepunkt: Breakpoint  F9  // Maustaste linken Rand.

Einzelschritt:          F10 // Pfeiltasten


    if (a)

    identisch zu

    if (a != 0)


========================================

for in C:

SYNTAX:

for (  init ; cond ; next )
{
    // die zu wiederholenden Anw.
}

for ( int i = 0 ; i < 10 ; i = i + 1 )
{
    // die zu wiederholenden Anw.
}

// ===========================================

while - Schleife

// ===========================================

A) Teuflische Folge:

Zahlenfolge:

n gerade   ==> n / 2

n ungerade ==> 3 * n + 1

Beispiel:

7, 22, 11, 34, 17, 52, 26, 13, 40, 20,
10, 5, 16, 8, 4, 2, 1:

Für JEDEN Startwert: Nach ENDLICH vielen Schritten kommt die 1

Collatz

if ( n == 5 ) // ist n gleich 5

if ( n != 5 ) // ist n ungleich 5

if ( n % 2 == 0 ) // ist n gerade

Programm:

Eingabe des Startwerts von der Konsole:

int start;

scanf ("%d", &start);

Ausgabe der teufl. Folge in der Konsole.

============================================

Funktion
Unterprogramm

Was ist ein Unterprogramm / Funktion ???

Zusammenfassung meherer Anweisungen
zu einem Ganzen mit einem Namen.

=========================================

i = i + 1;

in C very short:

++i;
--i;

oder 

i++;
i--;

==========================================================

Was ist ein Feld / Array ???

Wie eine Python-Liste, ABER:

== Länge FEST
== Elemente VOM SELBEN TYP
== Zugriff mit INDEX

Warum ist das so einfach definiert ???

Weil alle Elemente im SPEICHER DICHT
hinter einander liegen.

=======================================

Felder und Unterprogramme

Übung:
======

Zinzes-Zinsrechnung:
====================

Startkapital:  1.000€

5% Zinsen: 

1. Jahr: 50€      // 1.050€
2. Jahr: 52,50€   // 1.102,50 €

1.000€
1.050€
1.102,50€
..
..
2.000€ oder mehr

Ziel: Verdopplung

int doubleInterestCapital (
    float betrag,             // 1.000
    float interest,           // 5.0
    float interestRates[],    // Feld der Länge 10
    10                        // Länge des Feld
);

Funktion ===> Ergebnis

0:  Feld zu klein - keine Verdopplung
Ein Wert groesser 0: Anzahl der Jahre, die für
                     die Verdopplung des Einsatzes
                     benötigt worden sind.

Beispiel eines Aufrufs:

float capital [10];

int result = doubleInterestCapital (1000.0, 5.0, capital, 10);

if (result == 0) {
   // Feld zu klein
}
else {
   // Alle Jahreswerte des eingesetzten Kapitals ausgeben.
}


Bemerkung:

== Ein Feld hat eine FESTE Länge

== Dynamische Speicherverwaltung

// Warum lernen wir nicht C++

C

C++

C ist in C++ enthalten (zu 98% // minimale Unterschiede)

============================================================
============================================================

Zeiger // Pointer
-----------------

Es gibt einen Datentyp 'Adresse' in C

ABER:  Diesen betrachten wir IMMER mit einem Datentyp.

Adresse eine int-Variablen

Adresse einer double-Variablen

1024h  // Hexadezimaler Wert

1024h  ==> plus 8 Bytes:  

=========================================================

Zeiger in C:

2 Operationen:

i) Adresse einer Variablen: & - Operator.

                Adress-Operator.

ii) Indirekten Zugriffs-Operator:

n = 123;  // direkte Zugriff auf n

ip = &n;   // Anwendung des Adress-Operator.

*ip = 123;  // indirekte (schreibende) Zugriff auf n
            // mittels der Adresse von n

int m = *ip;  // indirekte lesender Zugriff 

// ================================================

Wozu ???????????????????????????????????????????

void malDrei(int n)
{
    n = 3 * n;
}

Wie wird ein Wert an malDrei übergeben ????

zB

int x = 5; 


Wie wird x an malDrei übergeben:

In Gestalt einer KOPIE.

Kann man eine Funktion wie malDrei
zum Laufen bringen ???

===============================

A) Bringe vertausche zum Laufen

===============================

int: Bitmuster             ==>  Zweierkomplement

flaot / double: Bitmuster  ==>  IEEE Format.

Vorkommaanteil, Nachkommaanteil, Exponent, Mantisse

Tool:

https://www.h-schmidt.net/FloatConverter/IEEE754de.html

=============================================

= Adressen

= Indirektes Lesen

= Indirektes Schreiben

=============================================

Strukturen 

Was ist eine Struktur

Uhrzeit:

int hours1;
int minutes1;
int seconds1;

int hours2;
int minutes2;
int seconds2;

int hours3;
int minutes3;
int seconds3;

Vorgehensweis: Brute-Force

============================

Nicht Brute-Force:  Struktur

Zusammengesetzter Datentyp:

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int n;

struct Time now;
struct Time pause;

============================

Kombi:  Übung und Objektorientierung für Arme

============================

Was bedeutet Objektorientierung ???

Ich habe Daten und Funktionen (Methoden) zusammen
in einem sprachlichen Konstrukt.

Konstrukt: Klasse

Konstrukt der Klasse in C (für Arme): Struktur

============================================================

Geldbeutel

// DATEN
struct wallet
{
    int euros;
    int cents;  // 0 .. 99
};

typedef struct wallet Wallet;

// Funktionen, die auf den Daten 'struct wallet' arbeiten:
// Methoden

void reset       (Wallet* wallet);
void addEuros    (Wallet* wallet, int euros);
void addCent     (Wallet* wallet, int cent);

void print       (Wallet* wallet); // "20 Euros, 10 cent"

void compare     (Wallet* wallet, Wallet* other);
void subEuros    (Wallet* wallet, int euros);
void subCent     (Wallet* wallet, int cent);
