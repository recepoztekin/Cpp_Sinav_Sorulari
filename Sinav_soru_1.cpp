#include <iostream>
using namespace std;


int main()
{
	// Kullan�c�n�n girdi�i say�lar�n ortalamas�n� hesaplayan bir C++ program� yaz�n�z.
	// Program kullan�c�n�n negatif bir say� girene kadar say� almaya devam etmeli (do-while)
	// ve girilen t�m pozitif say�lar�n ortalamas�n� hesaplamal�d�r.

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

