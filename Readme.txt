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

int, long, short, long long

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
