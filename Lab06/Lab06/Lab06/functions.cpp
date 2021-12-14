#include "functions.h"

void kolo()
{
    int r = 0;
    cout << "Pole kola" << endl;
    cout << "Podaj r: ";
    cin >> r;
    cout << "Pole kola wynosi: " << 3.14 * (r * r) << endl;
}

void prostokat()
{
    int a = 0, b = 0;
    cout << "Pole prostokata" << endl;
    do
    {
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
    } while (b < 0 || a < 0);
    cout << "Pole prostokata wynosi: " << a * b << endl;
}

void trojkat()
{
    int a = 0, h = 0;
    cout << "Pole trojkata" << endl;   
    do
    {
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj h: ";
        cin >> h;
    } while (a < 0 || h < 0);
    cout << "Pole trojkata wynosi: " << (a * h) / 2 << endl;
}

void szescian()
{
    int a = 0;
    do
    {
        cout << "Podaj a: ";
        cin >> a;
    } while (a < 0);
    cout << "Objetosc szescianu to: " << a * a * a << endl;
}

void walec()
{
    int r, h;
    cout << "Objetosc walca" << endl;
    
    do
    {
        cout << "Podaj r: ";
        cin >> r;
        cout << "Podaj H: ";
        cin >> h;
    } while (r < 0 || h < 0);
    cout << "Objetosc walca to: " << (3.14 * (r * r) * h) << endl;
}

bool LiczbaPierwsza(int liczba)
{
    if (liczba < 2)
        return false;
    int p = 1;//podzielnik
    int ile = 0;//liczba podzielnikow
    while (p <= liczba / 2)
    {
        if (liczba % p == 0)
        {
            ile += 1;
        }
        p++;
    }

    if (ile == 1)
        return true;
    else
        return false;
}

void ToBin(int a)
{
    int i = 0, tab[31];

    while (a) 
    {
        tab[i++] = a % 2;
        a=a/2;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << tab[j];
}

long long reku(unsigned int n)
{

    if ((n == 0) || (n == 1))
        return 1;
    else
    {

        return n * reku(n - 2);

    }

}

void Zad4()
{
    int n=0;
    do
    {
        cin >> n;

    } while (n<0 || n>30);
    if (n == 0)
    {
        cout << "Dwusilnia wynosi: 1" << endl;
    }
    else
    {
        int wynik = n * reku(n - 2);
        cout << wynik << endl;
    }
}