using namespace std;
#include <iostream>

int main()
{
	// Kahve otomat sim�lasyonu yap�n.
	// Kahve fiyat� ve haz�rlanma s�resi belirtin
	// Switch-case kullan�n.
	// 3 se�enek sunun.
	// Default durumunda "Ge�ersiz Se�im" mesaj� versin.

	int secim;
	cout << "Kahvet Otomati \n";
	cout << "1- Espresso \n";
	cout << "2- Latte \n";
	cout << "3- Mocha \n";

	cout << "Se�im Yapin: ";
	cin >> secim;

	switch (secim) {
	case 1:
		cout << "-- Espresso -- \n";
		cout << "Hazirlanma Suresi: 15 dk \n";
		cout << "Fiyat: 80 TL \n";
		break;
	case 2:
		cout << "-- Latte -- \n";
		cout << "Hazirlanma Suresi: 20 dk \n";
		cout << "Fiyat: 100 TL \n";
		break;
	case 3:
		cout << "-- Mocha -- \n";
		cout << "Hazirlanma Suresi: 8 dk \n";
		cout << "Fiyat: 120 TL \n";
		break;

	default: 
		cout << "Gecersiz Se�im";
		break;
	}

}

