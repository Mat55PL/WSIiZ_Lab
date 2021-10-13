
#include <iostream>

using namespace std;

int main()
{

    //zad 1
    int NrAlbumu = 65561;
    cout << "Nr Albumu to: " << NrAlbumu << endl;
    //zad 2
    int a;
    cout << "Podaj dowolna liczbe calkowita: ";
    cin >> a;
    if (a % 2 == 0)
        cout << "Liczba " << a << " jest parzysta" << endl;
    else
        cout << "Liczba " << a << " jest nieparzysta" << endl;
    //zad3
    float b, c;
    cout << "Podaj liczbe nr.1: ";
    cin >> b;
    cout << "Podaj liczbe nr.2: ";
    cin >> c;
    if (b > c)
        cout << "Liczba " << b << " jest wieksza" << endl;
    else if (b == c)
        cout << "Liczby sa takie same" << endl;
    else
        cout << "Liczba " << c << " jest wieksza" << endl;
    //zad4
    float d, e, f, g;
    cout << "Podaj 4. liczby do obliczenia sredniej arytmetycznej" << endl;
    cin >> d;
    cin >> e;
    cin >> f;
    cin >> g;
    cout << "Srednia arytmetyczna wynosi: " << (d + e + f + g) / 4 << endl;
    
    //zad 5
    float i, j;
    char znak;
    float wynik;
    cout << "Podaj liczbe nr.1: ";
    cin >> i;
    cout << "Podaj liczbe nr.2: ";
    cin >> j;
    cout << "Znaki dzialan:\n '+' -> dodawanie\n  '-' -> odejmowanie\n '*' -> mnozenie\n '/' -> dzielenie\n 's' -> obliczanie sredniej arytmetycznej" << endl;
    cout << "Podaj znak: ";
    cin >> znak;
    switch (znak) {
    case '+':
        wynik = i + j;
        break;
    case '-':
        wynik = i - j;
        break;
    case '*':
        wynik = i * j;
        break;
    case '/':
    {
        if (i == 0 || j == 0)
            cout << "Nie dzielimy przez 0!" << endl;
        else
            wynik = i / j;
    }
    break;
    case 's':
        wynik = (i + j) / 2;
        break;
    default:
        cout << "Nie rozpoznano znaku" << endl;
    }
    cout << "Wynik dzialania to: " << wynik << endl;
}

