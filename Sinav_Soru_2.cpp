#include <string>
#include <iostream>
using namespace std;
int main()
{
	/* Kullanýcýdan kýsa bir mesaj(string) alýn ve mesajýn uzunluðunu bulun.
	 While döngüsü kullanarak mesajýn her karakterinin ASCII deðerini ekrana yazdýrýn.*/

	string mesaj;
	cout << "Mesajinizi giriniz: ";
	cin >> mesaj;
	cout << "Mesajin uzunlugu: " << mesaj.length() << endl;
	int i = 0;
	while (i < mesaj.length())
	{
		cout << "'" << mesaj[i] << "' ASCII degeri : " << int(mesaj[i]) << endl;
		i++;
	}




}
