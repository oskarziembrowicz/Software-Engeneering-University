#include <iostream>
#include "Jamnik.h"

using namespace std;

int main(){

    Jamnik wybranyJamnik;


    wybranyJamnik.setImie("Zyzio");
    wybranyJamnik.setPlec("samiec");
    wybranyJamnik.setKoloSiersci("brunatny");
    wybranyJamnik.setWiek(5);
    wybranyJamnik.setDlugoscCiala(45);
    wybranyJamnik.setRodzajUszu("dlugie_oklaple");


    cout << "Dane wybranego zwierzaka:\n";
    cout << "Imie: " << wybranyJamnik.getImie() << "\n";
    cout << "Plec: " << wybranyJamnik.getPlec() << "\n";
    cout << "Wiek: " << wybranyJamnik.getWiek() << "\n";
    cout << "Kolor siersci: " << wybranyJamnik.getKolorSiersci() << "\n";
    cout << "Rodzaj uszu: " << wybranyJamnik.getRodzajUszu() << "\n";
    cout << "Dlugosc ciala: " << wybranyJamnik.getDlugoscCiala() << "\n";
    cout << "\nOto twoj jamnik.\n*Zyzio*: ";
    wybranyJamnik.dajGlos();
    return 0;
}
