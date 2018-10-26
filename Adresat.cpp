#include "Adresat.h"

Adresat::Adresat(int id, int idUzytkownika, string imie, string nazwisko, string numerTelefonu, string email, string adres) {
    if (id > 0)
        this->id = id;
    else {
        cout << "ID nie moze byc mniejsze, badz rowne 0. Blad krytyczny - nastapi wyjscie z programu.";
        system("pause");
        exit(0);
    }
    if (idUzytkownika > 0)
        this->idUzytkownika = idUzytkownika;
    else {
        cout << "ID nie moze byc mniejsze, badz rowne 0. Blad krytyczny - nastapi wyjscie z programu.";
        system("pause");
        exit(0);
    }

    this->imie = imie;
    this->nazwisko = nazwisko;
    this->numerTelefonu = numerTelefonu;
    this->email = email;
    this->adres = adres;
}

void Adresat::ustawId(int noweId) {
    if (noweId >= 0)
        id = noweId;
}

void Adresat::ustawIdUzytkownika(int nowyIdUzytkownika) {
    idUzytkownika = nowyIdUzytkownika;
}

void Adresat::ustawImie(string noweImie) {
    imie = noweImie;
}

void Adresat::ustawNazwisko(string noweNazwisko) {
    nazwisko = noweNazwisko;
}

void Adresat::ustawNumerTelefonu(string nowyNumerTelefonu) {
    numerTelefonu = nowyNumerTelefonu;
}

void Adresat::ustawEmail(string nowyEmail) {
    email = nowyEmail;
}

void Adresat::ustawAdres(string nowyAdres) {
    adres = nowyAdres;
}

int Adresat::pobierzId() {
    return id;
}

int Adresat::pobierzIdUzytkownika() {
    return idUzytkownika;
}

string Adresat::pobierzImie() {
    return imie;
}

string Adresat::pobierzNazwisko() {
    return nazwisko;
}

string Adresat::pobierzNumerTelefonu() {
    return numerTelefonu;
}

string Adresat::pobierzEmail() {
    return email;
}

string Adresat::pobierzAdres() {
    return adres;
}
