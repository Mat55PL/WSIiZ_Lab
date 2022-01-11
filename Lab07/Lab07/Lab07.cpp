
#include <iostream>

using namespace std;

void bin(int a);
int NWD(int a, int b);
int fib(int a);
int silnia(int a);
int ciag(int n);


void zad1()
{
    int liczba;
    cout << "Podaj liczbe do konwersji na system 2: ";
    cin >> liczba;
    bin(liczba);
}

void bin(int a)
{
    if (a > 0)
    {
        bin(a / 2);
        cout << a % 2;
    }
}

void zad2()
{
    int a, b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << NWD(a, b) << endl;
}

int NWD(int a, int b)
{
    if (b != 0)
        return NWD(b, a % b);

    return a;
}

void zad3()
{
    int a;
    cout << "Ile wyrazow w ciagu fib: ";
    cin >> a;
    cout << fib(a) << endl;
}

int fib(int a)
{
    if (a < 3)
        return 1;

    return fib(a - 2) + fib(a - 1);
}

void zad4()
{
    int a;
    cout << "Podaj liczbe do silnii: ";
    cin >> a;
    cout << silnia(a) << endl;
}

int silnia(int a)
{
    if (a < 2)
        return 1;
    return a * silnia(a - 1);
}

void zad5()
{
    int n;
    cout << "podaj n: ";
    cin >> n;
    cout << ciag(n) << endl;

}

int ciag(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 0.5;
    else if (n > 2)
        return (-ciag(n - 1) * ciag(n - 2));
}

int main()
{
    zad1();
    zad2();
    zad3();
    zad4();
    zad5();
}


