#pragma once

#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami :public PlikTekstowy {
    string nazwaTymczasowegoPlikuZAdresatami;
    int idOstatniegoAdresata;

    bool czyPlikJestPusty();
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);
    int pobierzZPlikuIdOstatniegoAdresata();

public:
    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {
        idOstatniegoAdresata = 0;
        nazwaTymczasowegoPlikuZAdresatami = "Adresaci_temp.txt";
    };
    bool dopiszAdresataDoPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void edytujWybranegoAdresataWPliku(int idEdytowanegoAdresata, string liniaZDanymiAdresataPoEdycji);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
};
