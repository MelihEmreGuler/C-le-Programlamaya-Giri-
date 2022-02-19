//Kullanicadan 5 Sayi Alýn. 
//Bu Sayilardan 4 Tanesi Ile Uretilebilecek En Buyuk Ve En Kucuk 
//Degerleri Ekrana Bastiriniz.
#include<iostream>
using namespace std;
int main() {
	cout << "5 adet sayi giriniz: ";
	int a[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	int eb = a[0]; //-2147483648
	int ek = a[0]; //2147483647
	int toplam = a[0];
	for (int i = 1; i < 5; i++) {
		toplam += a[i];
		if (a[i] > eb)
			eb = a[i];
		if (a[i] < ek)
			ek = a[i];
	}
	cout << "Maks: " << toplam - ek << endl;
	cout << "Min: " << toplam - eb << endl;
}