#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika(){
    uzytkownikMenadzer.logowanieUzytkownika();
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
