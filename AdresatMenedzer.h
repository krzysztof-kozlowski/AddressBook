#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "UzytkownikMenadzer.h"
#include "PlikZAdresatami.h"

class AdresatMenedzer {
    PlikZAdresatami plikZAdresatami;

    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    void dodajAdresata(int idZalogowanegoUzytkownika);
    int sprawdzIdOstatniegoAdresata();
};
#endif // ADRESATMENADZER_H
