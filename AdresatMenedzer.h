#pragma once

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenedzer.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer {
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer();
    void dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void dopiszAdresataDoPliku(Adresat adresat);
};
