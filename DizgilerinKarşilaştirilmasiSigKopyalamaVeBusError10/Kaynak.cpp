#include <iostream>
using namespace std;
int main() {
	
	const char* s = "evren"; // strings are immutable, stringler de�i�trilemez
	char c[6] = "evren"; // karekter dizisi bir dizi oldu�u i�in elemanlar�n� de�i�tirebiliyoruz
	// c = s; shallow copy , s�� kopyalama
	// strcmp -> string compare (stringleri kar��l�at�rma komutu)
	// s�zl�k kar��la�t�rmas� yapar == ise 0 d�dn�r�r.
	// ilk string k���kse -1
	// ilk string b�y�kse 1 d�nd�r�r.
	if (strcmp(c,s)==0) //s==c gibi. ama s==c ifadesi s ve c pointerlerinin adreslerini kar��la�t�rd��� i�in yanl�� bir sorgulamad�r (s�� kopyalama yap�lmad��� m�ddet�e e�it de�iller ��kt�s�n� verir.
		cout << "esitler" << endl;
	else
		cout << "esit degiller" << endl;
	// s[2] = 'x'; "Buss error: 10"��kt�s� veriyor.
	c[2] = 'x';
	cout << c << endl << s; // karekter dizisini de�i�tirebiliriz

}