#include <string>
#include <iostream>
using namespace std;
int main()
{
	/* Kullan�c�dan k�sa bir mesaj(string) al�n ve mesaj�n uzunlu�unu bulun.
	 While d�ng�s� kullanarak mesaj�n her karakterinin ASCII de�erini ekrana yazd�r�n.*/

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
