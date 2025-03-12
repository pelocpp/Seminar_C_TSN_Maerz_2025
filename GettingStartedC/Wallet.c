// =======================================================================
// Geldbeutel
// =======================================================================

#include <stdio.h>

// =======================================================================
// Data
struct wallet
{
    int euros;
    int cents;  // 0 .. 99
};

typedef struct wallet Wallet;

// =======================================================================
// Funktionen, die auf den Daten 'struct wallet' arbeiten (Methoden)
// Schnittstelle
void reset     (Wallet* wallet);
void addEuros  (Wallet* wallet, int euros);
void addCent   (Wallet* wallet, int cent);
void print     (const Wallet* wallet);
int  compare   (const Wallet* wallet, const Wallet* other);
void subEuros  (Wallet* wallet, int euros);
void subCent   (Wallet* wallet, int cent);

// =======================================================================
// Implementierung

void reset(Wallet* wallet)
{
    wallet->euros = 0;
    wallet->cents = 0;
}

void addEuros(Wallet* wallet, int euros)
{
    wallet->euros += euros;
}

void addCent(Wallet* wallet, int cent) {

    wallet->cents += cent;
    if (wallet->cents >= 100) {
        wallet->euros += wallet->cents / 100;
        wallet->cents = wallet->cents % 100;
    }
}

void print(const Wallet* wallet) // "20 Euros, 10 cent"
{
    printf("%d Euros, %d Cent\n", wallet->euros, wallet->cents);
}

// < 0: Im ersten Geldbeutel ist weniger drin
// 0:   Inhalt ist gleich
// > 0: Im ersten Geldbeutel ist mehr drin
int compare(const Wallet* wallet, const Wallet* other)
{
    if (wallet->euros == other->euros)
    {
        return wallet->cents - other->cents;
    }

    return wallet->euros - other->euros;
}

void subEuros(Wallet* wallet, int euros)
{
    if (wallet->euros >= euros) {
        wallet->euros -= euros;
    }
}

void subCent(Wallet* wallet, int cent)
{
    if (cent < wallet->cents) {
        wallet->cents -= cent;
    }
    else {

        int euros = cent / 100;
        int cents = cent % 100;

        if (wallet->euros >= euros && wallet->cents >= cents) {

            wallet->euros -= euros;
            wallet->cents -= cents;
        }
        else if (wallet->euros >= (euros + 1) && wallet->cents < cents) {
            wallet->euros -= (euros + 1);
            wallet->cents = wallet->cents + 100 - cents;
        }
        else {
            printf("Nicht genug Geld im Geldbeutel\n");
        }
    }
}

void wallet()
{
    Wallet myWallet = { 0, 0 };

    print(&myWallet);                 // "0 Euros, 0 Cent"

    addEuros(&myWallet, 20);          // 20 Euros
    print(&myWallet);

    addCent(&myWallet, 150);          // 21,50 Euros
    print(&myWallet);

    subEuros(&myWallet, 8);           //  13,50 Euros
    print(&myWallet); 
    
    subCent(&myWallet, 170);          //  11,80 Euros
    print(&myWallet);

    Wallet otherWallet = { 11, 80 };  //  11,80 Euros

    int isSame = compare(&myWallet, &otherWallet);  // 0
}

void wallet_nur_subCent()
{
    Wallet myWallet = { 3, 50 };
    print(&myWallet);

    subCent(&myWallet, 270);          //  11,80 Euros
    print(&myWallet);

    subCent(&myWallet, 80);           //  11,80 Euros
    print(&myWallet);
}

// =======================================================================
// End-of-File
// =======================================================================
