
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //wstep
	char tab[] = "wiosna";
	//char tab1[] = { 'n','e','a','d', '\0' }; //'\0' -> znak null konca tablicy
	char tab2[100];
	char s2[10];
	//cin.getline(tab2,50);
	cin.get(tab2, 40);
	cout << tab2;
	cout << size(tab2);
	//strcpy_s(tab, s2);//kopiowanie
	strcat_s(tab,s2);// połączenie tablic
	string imie;
	//zad1
	//nie roznia sie
	//zad 2
	//nie ponieważ nie mozna wpisac do tablicy int'owej za pomocą cin potrzebne jest podanie indeksu!
	//zad3
	char  tab[] = "wiosna";
	cout << (size(tab));
	//zad4
	string dane;
	string dane_kopia;
	string dane_razem;
	cin >> dane;
	dane_kopia = dane;
	dane_razem = dane + dane_kopia;
	cout << "Rozmiar: " << size(dane) << endl;
	char tab[10];
	char tab2[10];
	cin.getline(tab, 100);
	strcpy_s(tab2, tab);
	cout <<"1. "<<tab << ' ' <<"2. "<<tab2 << endl;
	strcat_s(tab, tab2);
	cout << "3. " << tab << endl;
	cout<<"4. "<<size(tab)<<endl;
	//zad5
	char adres[100];
	char nr[100];
	int ocena;
	int staz;

	cout << "Podaj nazwę ulicy na ktorej mieszkasz: ";
	cin.getline(adres, 100);
	cout << "Podaj nr domu: ";
	cin.getline(nr, 100);
	cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2 - 5]: ";
	cin >> ocena;
	cout << "Twoj staz programistyczny: ";
	cin >> staz;
	cout << "Adres: " << adres <<" "<<nr<< endl;
	if (ocena < 2)
		ocena = 2;
	else if (ocena > 5)
		ocena = 5;
	cout << "Ocena: " << ocena << endl;
	cout << "Staz: " << staz << " dni" << endl;
	//zad6
	string text;
	int spol = 0, sam = 0;
	getline(cin, text);
	for (int i = 0; i <= text.size(); i++)
	{
		
			if (tolower(text[i]) == 'a' || tolower(text[i]) == 'e' || tolower(text[i]) == 'i' || tolower(text[i]) == 'o' || tolower(text[i]) == 'u' || tolower(text[i]) == 'y' )
			{
				sam++;
			}
			else if (text[i] == ' ')
			{
				continue;
			}
			else
			{
				spol++;
			}
	}
	cout << "Spolglosek: " << spol << " Samoglosek: " << sam << endl;
}



