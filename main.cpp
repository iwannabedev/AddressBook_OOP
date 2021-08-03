#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//    ksiazkaAdresowa.rejestracjaUzytkownika();
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();


    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();


//    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//    ksiazkaAdresowa.wylogowanieUzytkownika();
    return 0;
}
