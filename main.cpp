#include <iostream>
#include "KsiazkaAdresowa.h"
#include "PlikZAdresatami.h"

using namespace std;

char wybierzOpcjeZMenuGlownego();
char wybierzOpcjeZMenuZalogowanegoUzytkownika();

int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;

    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            wybor = wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() > 0)
        {
            do
            {
                ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika());
                wybor = wybierzOpcjeZMenuZalogowanegoUzytkownika();

                switch (wybor)
                {
                case '1':
                     ksiazkaAdresowa.dodajAdresata(ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika());
                    break;
                case '2':
                     ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                    break;
                case '3':
                    // ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                    break;
                case '4':
                    // ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                    break;
                case '5':
                    // ksiazkaAdresowa.usunAdresata();
                    break;
                case '6':
                    // ksiazkaAdresowa.edytujAdresata();
                    break;
                case '7':
                    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                    break;
                case '8':
                    ksiazkaAdresowa.wyloguj();
                    break;
                }
            } while (wybor != '8');
        }
    }
    return 0;
}

char wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;
    cin.ignore();

    return wybor;
}

char wybierzOpcjeZMenuZalogowanegoUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;
    cin.ignore();

    return wybor;
}
