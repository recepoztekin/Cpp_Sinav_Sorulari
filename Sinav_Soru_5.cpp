using namespace std;
#include <iostream>

int main()
{
	// 5*5 boyutunda önceden tanýmlanmýþ deðerler buulunan bir iki boyutlu dizi oluþturun.
	// Daha sonraa bu dizi içinde kaç adet 1 olduðunu hesaplayýp ekrana yazdýrýn for döngüsü

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
