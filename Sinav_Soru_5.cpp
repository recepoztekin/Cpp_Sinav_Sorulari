using namespace std;
#include <iostream>

int main()
{
	// 5*5 boyutunda �nceden tan�mlanm�� de�erler buulunan bir iki boyutlu dizi olu�turun.
	// Daha sonraa bu dizi i�inde ka� adet 1 oldu�unu hesaplay�p ekrana yazd�r�n for d�ng�s�

	int dizi[5][5] = {
		{1,0,3,4,2},
		{0,1,0,1,0},
		{1,2,1,1,1},
		{1,0,3,4,2},
		{1,0,3,4,2}
	};

	int sayac = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (dizi[i][j] == 1)
			{
				sayac++;
			}
		}
	}

	cout << "Toplam 1 degeri " << sayac << " tane var.";
}
