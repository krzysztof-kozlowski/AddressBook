#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika(){
    uzytkownikMenadzer.logowanieUzytkownika();
    wczytajAdresatowZalogowanegoUzytkownikaZPliku(pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika(){
    return uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::wyloguj(){
    uzytkownikMenadzer.wyloguj();
}

int KsiazkaAdresowa::dodajAdresata(){
    adresatMenedzer.dodajAdresata(pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika){
    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu(){
    adresatMenedzer.wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku(){
    adresatMenedzer.wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){
    adresatMenedzer.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::usunAdresata(){
    adresatMenedzer.usunAdresata();
}

void KsiazkaAdresowa::edytujAdresata(){
    adresatMenedzer.edytujAdresata();
}
