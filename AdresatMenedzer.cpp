#include "AdresatMenedzer.h"

void AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika){
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika){
    Adresat adresat;
    string imie, nazwisko, numerTelefonu, email, adres;

    adresat.ustawId(sprawdzIdOstatniegoAdresata() + 1);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    cin >> imie;
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie));

    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko));

    cout << "Podaj numer telefonu: ";
    cin.sync();
    getline(cin, numerTelefonu);
    adresat.ustawNumerTelefonu(numerTelefonu);

    cout << "Podaj email: ";
    cin >> email;
    adresat.ustawEmail(email);

    cout << "Podaj adres: ";
    cin.sync();
    getline(cin, adres);
    adresat.ustawAdres(adres);

    return adresat;
}

int AdresatMenedzer::sprawdzIdOstatniegoAdresata() {
    return plikZAdresatami.sprawdzIdOstatniegoAdresata();
}

void AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika){
    plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika, adresaci);
}
