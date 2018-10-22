#include "PlikZAdresatami.h"

void PlikZAdresatami::dopiszAdresataDoPliku(Adresat &adresat){
    string liniaZDanymiAdresata = "";
    fstream plikTekstowy;
    plikTekstowy.open(nazwaPlikuZAdresatami.c_str(), ios::out | ios::app);

    if (plikTekstowy.good() == true)
    {
        liniaZDanymiAdresata = zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(adresat);

        if (czyPlikJestPusty() == true)
        {
            plikTekstowy << liniaZDanymiAdresata;
        }
        else
        {
            plikTekstowy << liniaZDanymiAdresata ;
        }
        plikTekstowy << endl;
        plikTekstowy.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku i zapisac w nim danych." << endl;
    }
    system("pause");
}

string PlikZAdresatami::zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat){
    string liniaZDanymiAdresata = "";

    liniaZDanymiAdresata += MetodyPomocnicze::konwerjsaIntNaString(adresat.pobierzId()) + '|';
    liniaZDanymiAdresata += MetodyPomocnicze::konwerjsaIntNaString(adresat.pobierzIdUzytkownika()) + '|';
    liniaZDanymiAdresata += adresat.pobierzImie() + '|';
    liniaZDanymiAdresata += adresat.pobierzNazwisko() + '|';
    liniaZDanymiAdresata += adresat.pobierzNumerTelefonu() + '|';
    liniaZDanymiAdresata += adresat.pobierzEmail() + '|';
    liniaZDanymiAdresata += adresat.pobierzAdres() + '|';

    return liniaZDanymiAdresata;
}

bool PlikZAdresatami::czyPlikJestPusty() {
    fstream plikTekstowy;
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
}

int PlikZAdresatami::sprawdzIdOstatniegoAdresata(){
    fstream plikTekstowy;
    int idOstatniegoAdresata;
    string zawartoscLiniiZPliku, pojedynczaDanaZPliku;

    plikTekstowy.open(nazwaPlikuZAdresatami.c_str(), ios::in);
    if (plikTekstowy.good() == false) {
        return 0;
    } else {
        while(getline(plikTekstowy, zawartoscLiniiZPliku)) {
            int dlugoscLiniiZPliku = zawartoscLiniiZPliku.size();
            for (int i = 0; i < dlugoscLiniiZPliku; i++) {
                if (zawartoscLiniiZPliku[i] == '|') {
                    idOstatniegoAdresata = atoi(pojedynczaDanaZPliku.c_str());
                    pojedynczaDanaZPliku = "";
                    break;
                } else
                    pojedynczaDanaZPliku += zawartoscLiniiZPliku[i];
            }
        }
    }
    plikTekstowy.close();

    return idOstatniegoAdresata;
}
