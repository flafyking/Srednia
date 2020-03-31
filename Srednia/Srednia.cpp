#include <iostream>

using namespace std;

int rozm;
float Suma = 0;
float Srednia;

int SumaTablicy(int tablica[]) {
    for (int i = 0; i < rozm; i++) {
        Suma = Suma + tablica[i];
    }
    return Suma;
}

int main()
{
    cout << "Podaj dlugosc tablicy: ";
    cin >> rozm;

    int* tab = new int[rozm];

    for (int i = 0; i < rozm; i++) {
        cout << "Podaj wartosc nr " << i + 1 << ":";
        cin >> tab[i];
    }

    for (int i = 0; i < rozm; i++) {
        cout << "Wartosc nr " << i + 1 << " : " << tab[i] << endl;
    }

    SumaTablicy(tab);
    
    Srednia = Suma / rozm;
    cout.precision(2);
    cout.setf(std::ios::fixed);
    cout << "Srednia wynosi: " << Srednia;
}
