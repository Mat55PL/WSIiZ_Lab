#include "functions.h"




int main()
{
    //zad1
    
    char figura;
    cout << "Instrukcja: a=kolo b=prostokat c=trojkat d=szescian e=walec" << endl;
    cout << "Podaj rodzaj figury: ";
    cin >> figura;
    switch (figura) {
        case 'a':
            kolo();
           break;
        case 'b':
            prostokat();
            break;
        case 'c':
            trojkat();
             break;
        case 'd':
            szescian();
            break;
        case 'e':
            walec();
            break;
        default:
            cout << "erorr";
    }
    ////zad2
    int liczba;
    cout << "podaj liczbe: ";
    cin >> liczba;
    if (LiczbaPierwsza)
    {
        cout << liczba << " jest liczba pierwsza!" << endl;
    }
    else
    {
       cout << liczba << " nie jest liczba pierwsza!" << endl;
    }
    //zad 3
    int dec;
    cout << "Podaj liczbe do zmiany na system binarny: ";
    cin >> dec;
    ToBin(dec);
    //zad 4
    Zad4();

}



