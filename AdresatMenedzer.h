#pragma once

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenedzer.h"

using namespace std;

class AdresatMenedzer {
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;

public:
    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
};
