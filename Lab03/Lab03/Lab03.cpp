

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	//zad1
	int liczba,i;
	cout<<"Podaj dowolną liczbe" << endl;
	cin >> liczba;
	for (i = 0; i < liczba; i++)
	{
		cout << i << endl;
	}
	i = 0;
	while (i < liczba)
	{
		cout << i << endl;
		i++;
	}
	do
	{
		cout << i << endl;
		i++;
	} while (i < liczba);
		//zad2
	int a;
	cout << "Podaj dowolną liczbe:" << endl;
	do
	{
		cin >> a;
	} while (a>=0);
	//zad3;
	int c=0, ujemne=0, dodatnie=0,sdodatnie=0,sujemne=0;
	for (int i = 0; i < 10; i++)
	{
		cin >> c;
		if (c < 0)
		{
			ujemne++;
			sujemne = sujemne + c;
		}
		else
		{
			dodatnie++;
			sdodatnie = sdodatnie + c;
		}

	}
	cout << "Liczb dodatnich jest: " << dodatnie << endl;
	cout << "Liczb ujemnych jest: " << ujemne << endl;
	cout << "Suma liczb dodatnich to: " << sdodatnie << endl;
	cout << "Suma liczb ujemnych to: " << sujemne << endl;
	//zad4
	int n = 0, d=0, sparzystych = 0, iloczyn=1;
	cout << "Podaj n: ";
	cin >> n;
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Podaj liczbe: ";
			cin >> d;
			if (d % 2 == 0)
			{
				sparzystych = sparzystych+d;
				iloczyn *= d;
			}
		}
		cout << "Suma: " << sparzystych << endl;
		cout << "Iloczyn: " << iloczyn << endl;
	}
	else
	{
		cout << "N nie moze byc ujemne" << endl;
	}
	//zad5
	
	int e=0, n = 0, d = 0, sparzystych = 0, iloczyn = 1;
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		e = rand() % 11 - 5;
		cout << e << endl;
	}
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			d = rand() % 56 - 5;
			cout << d << " ";
			if (d % 2 == 0)
			{
				sparzystych = sparzystych + d;
				iloczyn *= d;
			}
		}
		cout << "Suma: " << sparzystych << endl;
		cout << "Iloczyn: " << iloczyn << endl;
	}
	else
	{
		cout << "N nie moze byc ujemne" << endl;
	}
	//
	// 
	// 
	// 
	// 
	// 
	//pdf 1.1
	//zad 1
	int n = 0, pkt=0, sumapkt=0, i=0;
	float srednia = 0;
	cout << "Podaj liczbe studentow: ";
	cin >> n;
	while(i<n)
	{
		cout << "Podaj liczbe punktow dla studenta nr. " << i << ": ";
		cin >> pkt;
		sumapkt = sumapkt + pkt;
		i++;
	}
	srednia = sumapkt / n;
	cout << "Srednia punktow uzyskanych przez studentow to: " << srednia << endl;
	//zad2
	int n = 0, pkt = 0, sumapkt = 0, i = 0;
	float srednia = 0;
	cout << "Podaj liczbe studentow: ";
	cin >> n;
	while (i < n)
	{
		cout << "Podaj liczbe punktow dla studenta nr. " << i << ": ";
		cin >> pkt;
		if (pkt >= 0 && pkt <= 100)
		{
			sumapkt = sumapkt + pkt;
			i++;
		}
		else
		{
			cout << "Niepoprawna liczba" << endl;
		}
	}
	srednia = sumapkt / n;
	cout << "Srednia punktow uzyskanych przez studentow to: " << srednia << endl;
	//zad3
	int n = 0, pkt = 0, sumapkt = 0, i = 0;
	float srednia = 0;
	cout << "Podaj liczbe studentow: ";
	cin >> n;
	while (i < n)
	{
		cout << "Podaj liczbe punktow dla studenta nr. " << i << ": ";
		cin >> pkt;
		if (pkt >= 0 && pkt <= 100)
		{
			sumapkt = sumapkt + pkt;
			i++;
		}
		else
		{
			cout << "Niepoprawna liczba" << endl;
			continue;
		}
	}
	srednia = sumapkt / n;
	cout << "Srednia punktow uzyskanych przez studentow to: " << srednia << endl;
	//zad4
	int n = 0, pkt = 0, sumapkt = 0, i = 0;
	float srednia = 0;
	cout << "Podaj liczbe studentow: ";
	cin >> n;
	do
	{
		cout << "Podaj liczbe punktow dla studenta nr. " << i << ": ";
		cin >> pkt;
		if (pkt >= 0 && pkt <= 100)
		{
			sumapkt = sumapkt + pkt;
			i++;
		}
		else
		{
			cout << "Niepoprawna liczba" << endl;
			continue;
		}
	} while (i < n);
	srednia = sumapkt / n;
	cout << "Srednia punktow uzyskanych przez studentow to: " << srednia << endl;
	//zad5
	int max = 0;
	cout << "Petla nr.1" << endl;
	max = 100;
	for (int i = 1; i <= max; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Petla nr.2" << endl;
	max = 0;
	for (int i = 100; i >= max; i--)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Petla nr.3" << endl;
	max = 77;
	for (int i = 7; i <= max; i=i+7)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Petla nr.4" << endl;
	max = 0;
	for (int i = 20; i >= max; i = i-2)
	{
		cout << i << " ";
	}
	cout << endl;
}


