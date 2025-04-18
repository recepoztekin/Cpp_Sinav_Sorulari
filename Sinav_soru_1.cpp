#include <iostream>
using namespace std;


int main()
{
	// Kullanýcýnýn girdiði sayýlarýn ortalamasýný hesaplayan bir C++ programý yazýnýz.
	// Program kullanýcýnýn negatif bir sayý girene kadar sayý almaya devam etmeli (do-while)
	// ve girilen tüm pozitif sayýlarýn ortalamasýný hesaplamalýdýr.

	int sayi;
	int top = 0;
	int sayac = 0;

	cout << "--- Sayi Girisi ---\n";
	do
	{
		cout << "Sayi girin: ";
		cin >> sayi;

		if (sayi >= 0)
		{
			top += sayi;
			sayac++;
		}
	
	} while (sayi >= 0);
	if (sayac > 0)
	{
		double ort = double(top) / double(sayac);
		cout << "Sayilarin ortalamasi: " << ort << "\n";
	}
	else
	{
		cout << "Pozitif Sayi  Girin !!";
	}
	return 0;
}

