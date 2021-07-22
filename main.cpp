#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//    ksiazkaAdresowa.rejestracjaUzytkownika();
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wylogowanieUzytkownika();
    return 0;
}
