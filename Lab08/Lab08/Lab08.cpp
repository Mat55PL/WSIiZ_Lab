

#include <iostream>
#include <cstdlib>

using namespace std;

int do_kwadratu(int* a);
int* potega(int a, int b);
void znak(char* a, int* b);
int min(int* a, int* b);
int* minw(int* a, int* b);
void zmiana(int* a, int* b);
void zad1()
{
    int a,b,c;
    cout << "Podaj a: ";
    cin >> a;
    cout << "adres: " << &a << endl;
    cout << "wartosc: " << *&a << endl;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Roznica: " << *&a - *&b << endl;
    cout << "Podaj c: "; 
    cin >> c;
    cout << "Srednia (a b c): " << ((*&a + *&b + *&c) / 3) << endl;
}

void zad2()
{
    int n=0, b, c;

    do {
        cout << "Podaj rozmiar tablicy (n>0): ";
        cin >> n;
    } while (!(n > 0));
    int* a;
    a = new int[n];
    int* w;
    w = a;
    cout << "Adres elementu nr.1: " << w << endl;
    cout << "Adres elemenut nr.4: " << w + 3 << endl;

    srand(time(NULL));
    cout << "Podaj poczateku przedzialu: ";
    cin >> b;
    cout << "Koniec przedzialu: ";
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        *w = rand() % (c - b + 1) + b;
        cout << w << endl;
        w++;
    }
    delete[] a;
}

void zad3()
{
    int n=0,s=0;

    do {
        cout << "Podaj rozmiar tablicy (n>0): ";
        cin >> n;
    } while (!(n > 0));
    
    int* a;
    a = new int[n];

    int* w = a;

    for (int i = 0; i < n; i++)
    {
        cout << "podaj wartosc dla " << i <<": ";
        cin >> *w;
        s += *w;
        w++;
    }

    cout << "Srednia wartosci z tablicy: " << s / n << endl;

    w = a;
    cout << "Elementy wieksze od sredniej: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (*w > s / n)
            cout << "Nr: " << i << " = " << *w << endl;

        w++;
    }
    delete[] a;
}

void zad4()
{
    int a, * w;
    w = &a;
    cout << "Podaj liczbe: ";
    cin >> a;
    cout << "Liczba do kwadratu to: " << do_kwadratu(w) << endl;
}

int do_kwadratu(int *a)
{
    return ((*a) * (*a));
}

void zad5()
{
    int a, b;
    cout << "Podaj liczbe: ";
    cin >> a;
    cout << "Podaj potege: ";
    cin >> b;

    cout << *potega(a, b) << endl;
}

int* potega(int a, int b)
{
    int p = 1;
    int* wsk = &p;

    for (int i = 0; i < b; i++)
    {
        p = p * a;
    }

    return wsk;
}

void zad6()
{
    char a, * w;
    int b, * wsk;
    cout << "Podaj znak: ";
    cin >> a;
    cout << "Ile razy ma byc wyswietlony: ";
    cin >> b;
    w = &a;
    wsk = &b;

    znak(w, wsk);
}

void znak(char* a, int* b)
{
    for (int i = 0; i < *b; i++)
    {
        cout << *a;
    }
}

void zad7()
{
    int a, b, * wa, * wb;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    wa = &a;
    wb = &b;
    cout << "Mniejsza jest: " << min(wa, wb) << endl;
    cout << "Mniejsza liczba (wskaznik) to: " << *minw(wa, wb) << " adres: " << minw(wa, wb) << endl;
}

int min(int* a, int* b)
{
    if (*a > *b)
        return *b;
    else if (*a < *b)
        return *a;
    else
        cout << "Liczby sa takie same" << endl;
}

int* minw(int* a, int* b)
{
    if (*a > *b)
        return b;
    else if (*a < *b)
        return a;
    else
        cout << "liczby sa rowne\n";
}

void zad8()
{
    int a, b;
    cout << "Liczba a: ";
    cin >> a;
    cout << "Liczba b: ";
    cin >> b;
    zmiana(&a, &b);
    cout << "Po zmianie: " << endl;
    cout << "Liczba a: " << a << endl;
    cout << "Liczba b: " << b << endl;
}

void zmiana(int* a, int* b) 
{
    int dod = *a;
    *a = *b;
    *b = dod;
}

int main()
{
    //zad1();
    //zad2(); //int *tab=new int[n]
    //zad3();
    //zad4();
    //zad5();
    //zad6();
    //zad7();
    zad8();
}


