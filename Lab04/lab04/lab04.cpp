
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	
	int tab[5] = { 12,4,5,65,5 };
	int tab1[6] = { 1,2 };
	int tab2[100] = { 0 };

	const int roz = 10;
	int tab11[roz];
	//zad1
	int w = 3;
	int tab[10];
	for (int i = 0; i < 10; i++)
	{
		tab[i] = w;
		cout << tab[i] << endl;
		w = w + 3;
	}
	cout << endl;
	//zad2

	for (int i = 0; i < 10; i=i+2)
	{
		cout << tab[i] << endl;
	}
	//zad3
	int a,x=0;
	cout << "Podaj wartosc a: ";
	cin >> a;
	int tab3[8];
	for (int i = 9; i >= 0; i--)
	{
		tab3[i] = a-x;

		x = x + 5;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << tab3[i] << endl;
	}
	//zad4
	int n = 10,a=-23,b=50,min=100;
	int tab[10];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % 73 - 23;
		cout << tab[i] << " ";
		if (tab[i] < min)
			min = tab[i];
	}
	cout << endl;
	cout <<"Wartosc minmalna to: "<<min<< endl;
	//zad5
	int a, b,n=10;
	int Tab5[10];
	cout << "Podaj wartosc nr.1: ";
	cin >> a;
	cout << "Podaj wartosc nr.2: ";
	cin >> b;
	Tab5[0] = a;
	Tab5[1] = b;
	for (int i = 2; i < n; i++)
	{
		Tab5[i] = Tab5[i - 1] + Tab5[i - 2];
	}
	for (int i = 0; i < n; i++)
	{
		cout << Tab5[i] << " ";
	}
	cout << endl;
	//zad6
	int n = 20;
	int tab6[20] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 10; i < n; i++)
	{
		tab6[i] = tab6[i - 10];
	}
	for (int i = 0; i < n; i++)
	{
		cout << tab6[i] << " ";
	}
	cout << endl;
	//zad7
	int tab[3][3] ={ { 3,6,8 },{4, 7, 9} ,{5, 8, 10}};
	int sum=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j)
				sum = sum+tab[i][j];
		}
	}
	cout << "Suma przekatnej to: " << sum << endl;
	//zad8
	cout << "Suma dodanych dwóch macierzy to: " << endl;
	int Tab8[2][2] = { {5,8},{8,5} };
	int Tab9[2][2] = { {4,7},{3,5} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			Tab8[i][j] = Tab8[i][j] + Tab9[i][j];
			cout << Tab8[i][j] << " ";
		}
		cout << endl;
	}
}


