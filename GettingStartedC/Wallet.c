//// Geldbeutel
//
//// DATEN
//struct wallet
//{
//    int euros;
//    int cents;  // 0 .. 99
//};
//
//typedef struct wallet Wallet;
//
//// Funktionen, die auf den Daten 'struct wallet' arbeiten:
//// Methoden
//
//void reset(Wallet* wallet);
//void addEuros(Wallet* wallet, int euros);
//void addCent(Wallet* wallet, int cent);
//
//void print(Wallet* wallet); // "20 Euros, 10 cent"
//
//int  compare(Wallet* wallet, Wallet* other);
//void subEuros(Wallet* wallet, int euros);
//void subCent(Wallet* wallet, int cent);
//
//void wallet()
//{
//    Wallet myWallet = { 0, 0 };  // __init__ von Python
//
//    print(&myWallet);  // "0 Euros, 0 Cent"
//
//    addEuros(&myWallet, 20);  // 20 Euros
//    addCent(&myWallet, 150);  // 21,50 Euros
//
//    subEuros(&myWallet, 8);   //  13,50 Euros
//    subCent(&myWallet, 170);  //  11,80 Euros
//
//    Wallet otherWallet = { 11, 80 };
//
//    // < 0: Im ersten Geldbeutel ist weniger drin
//    // 0 == ist gleich
//    // > 0: Im ersten Geldbeutel ist mehr drin
//    int isSame = compare(&myWallet, &otherWallet);
//}
