
#include <iostream>

using namespace std;

int main()
{
   //zad 1
	/*
	float a, b;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b:";
	cin >> b;
	if (a == 0) {
		if (b == 0) {
			cout << "rownanie tozsamosciowe" << endl;
		}
		else {
			cout << "rownanie sprzeczne" << endl;
		}
	}
	else {
		cout << "x = " << -b / a;
	}
	
	zad 2+3
	float a, b, c, delta;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b:";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;

	if (a!=0) {
		delta = (b * b) - (4 * a * c);
		if (delta == 0) {
			cout << "jedno rozwiazanie x1 = " << -b / (2 * a) << endl;
		}
		else if (delta > 0) {
			cout << "dwa rozwiazania" << endl;
			cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
			cout << "x1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
		}
		else {
			cout << "brak rozwiazan" << endl;
		}
	}
	else {
		//rownanie liniowe
		if (b == 0) {
			if (c == 0) {
				cout << "rownanie tozsamosciowe" << endl;
			}
			else {
				cout << "rownanie sprzeczne" << endl;
			}
		}
		else {
			cout << "x = " << -c / b;
		}
	}
	//zad 4
	float xa,wynika;
	cout << "Funkcja a(x)" << endl;
	cout<<"Podaj x: ";
	cin >> xa;
	if (xa > 0) {
		wynika = 2 * xa;
	}
	else if (xa == 0){
		wynika = 0;
	}
	else if (xa < 0) {
		wynika = -3 * xa;
	}
	cout << "Wynik funkcji a(x) to: " << wynika << endl;
	float xb, wynikb;
	cout << "Funkcja b(x)" << endl;
	cout << "Podaj x: ";
	cin >> xb;
	if (xb >= 1) {
		wynikb = xb * xb;
	}
	else if (xb < 0) {
		wynikb = xb;
	}
	cout << "Wynik funkcji b(x) to: " << wynikb << endl;
	float xc, wynikc;
	cout << "Funkcja c(x)" << endl;
	cout << "Podaj x: ";
	cin >> xc;
	if (xc > 2) {
		wynikc = 2+xc;
	}
	else if (xc == 2) {
		wynikc = 8;
	}
	else if (xc <2) {
		wynikc = xc-4;
	}
	cout << "Wynik funkcji c(x) to: " << wynikc << endl;
	//zad 5
	float x, y, z,max1,max2,max3;
	cout << "Podaj x: ";
	cin >> x;
	cout << "Podaj y: ";
	cin >> y;
	cout << "Podaj z: ";
	cin >> z;
	if (x > y) {
		if (x > z) {
			max1 = x;
			if (y > z) {
				max2 = y;
				max3 = z;
			}
			else {
				max2 = z;
				max3 = y;

			}

		}
	}
	else {
		if (y > z) {
			max1 = y;
			if (z > x) {
				max2 = z;
				max3 = x;
			}
		}
		else {
			max1 = z;
			if (y > x) {
				max2 = y;
				max3 = x;
			}
		}
	}
	cout << "Uporzadkowane wartosci: " << max1 << " " << max2 << " " << max3 << endl;
	//zad 6
	bool rain, bus;
	cout << "Czy pada deszcz(0 nie/ 1 tak): ";
	cin >> rain;
	cout << "Czy autobus jest na przystanku (0 nie/ 1 tak): ";
	cin >> bus;
	if (bus && rain) {
		cout << "Wez parasol" << endl;
		cout << "Dostaniesz sie na uczelnie" << endl;
	}
	else if (!bus && rain)
	{
		cout << "Nie dostaniesz się na uczelnię" << endl;
	}
	else if (bus && !rain) {
		cout << "Dostaniesz sie na uczelnie" << endl;
		cout << "Miłego dnia i pięknej pogody" << endl;
	}
	//zad 7*/
	bool bonus, discount;
	cout << "Czy dostales premie(0 nie/ 1 tak): ";
	cin >> bonus;
	cout << "Czy dostales znizke na auto (0 nie/ 1 tak): ";
	cin >> discount;
	if (!discount || bonus) {
		cout << "Mozesz kupic samochod !" << endl;
		cout << "Znizki na samochod nie ma" << endl;
	}
	else if (!discount || !bonus) {
		cout << "Zakup samochod trzeba odlozyc na pozniej..." << endl;
		cout << "Znizki na samochod nie ma" << endl;
	}
	else if (discount || bonus) {
		cout << "Mozesz kupic samochod !" << endl;
	}
}

