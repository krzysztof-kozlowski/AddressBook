#include "Uzytkownik.h"

Uzytkownik::Uzytkownik(int id, string login, string haslo) {
    if (id > 0)
        this->id = id;
    else {
        cout << "ID nie moze byc mniejsze, badz rowne 0. Blad krytyczny - nastapi wyjscie z programu.";
        system("pause");
        exit(0);
    }

    this->login = login;
    this->haslo = haslo;
}

void Uzytkownik::ustawId(int noweId) {
    if (noweId >= 0)
        id = noweId;
}

void Uzytkownik::ustawLogin(string nowyLogin) {
    login = nowyLogin;
}

void Uzytkownik::ustawHaslo(string noweHaslo) {
    haslo = noweHaslo;
}

int Uzytkownik::pobierzId() {
    return id;
}

string Uzytkownik::pobierzLogin() {
    return login;
}

string Uzytkownik::pobierzHaslo() {
    return haslo;
}
