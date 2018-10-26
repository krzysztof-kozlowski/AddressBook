#ifndef PLIK_H
#define PLIK_H

#include <iostream>
#include <fstream>

using namespace std;

class Plik {
protected:
    bool czyPlikJestPusty(fstream &plikTekstowy);
};

#endif // PLIK_H
