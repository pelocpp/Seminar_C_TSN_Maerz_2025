// =======================================================================
// Datei Wallet.h

#pragma once

// =======================================================================
// Konstanten

#define MinCent 0
#define MaxCent 99

// =======================================================================
// Datentypen

// Data
struct wallet
{
    int euros;
    int cents;  // 0 .. 99
};

typedef struct wallet Wallet;

// =======================================================================
// Vorwärtsdeklarationen // Funktionsprototypen

// Funktionen, die auf den Daten 'struct wallet' arbeiten (Methoden)
// Schnittstelle
void reset(Wallet* wallet);
void addEuros(Wallet* wallet, int euros);
void addCent(Wallet* wallet, int cent);
void print(const Wallet* wallet);
int  compare(const Wallet* wallet, const Wallet* other);
void subEuros(Wallet* wallet, int euros);
void subCent(Wallet* wallet, int cent);

// ==================================================