using namespace std;
#include <iostream>

int main()
{
	// 1'den 9'a kadar olan tek say�lar� (1,3,5,7,9) her biri i�in 1'Den 10'a kadar olan say�lar�n say�larla �arp�mlar�n� g�steren bir program yaz�n.

	for (int i = 1; i < 10; i += 2)
	{
		cout << i<< "\n";
		for (int j = 1; j < 11; j++)
		{
			cout << i << "x" << j << " = " << i * j << "\n";
		}
	}

}
