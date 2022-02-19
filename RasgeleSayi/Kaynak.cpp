#include<iostream>
#include<cstdlib>
#include <math.h>
using namespace std;
//gizli sayýyý bulma 
int main()
{
	int gizli;
	int tahmin;
	int yanit{};
	gizli = rand() %100; 52
	cout << "tahmininizi girin = ";
	cin >> tahmin;

	if (tahmin == gizli) {
		cout << "Tebrikler lan dogru bildin :D \n";
		cout << "Gizli sayi = " << gizli << "\n";
		return 0;
	}


	else { cout << "Gizli sayiyi bulamadin sj :( \n "; }
	if (tahmin > gizli) {
		cout << "Tahmininiz gizli sayidan büyüktür \n ";
	}

	else {
		cout << "Tahminin gizli sayidan kucuktur \n ";
		cout << "Gizli sayiyi ogrenmek istiyor musun ? " << "\n";
		cout << "Evet icin- 1 Hayir icin- 2  \n";
		cin >> yanit;
	}

	if (yanit == 1) {
		cout << "Gizli sayi =" << gizli << "\n";
	}
	if (yanit == 2) {
		cout << "Program Kapaniyor... \n ";
	}
	return 0;

}