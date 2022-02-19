#include <iostream>
using namespace std;
int main() {
	cout << "Ard Arda Bes Sayi Giriniz: " << endl;
	int d[5];
	for (int i = 0; i < 5; i++) {
		cin >> d[i];
	}
	int en_buyuk = d[0];
	int en_kucuk = d[0];
	for (int i = 1; i < 5; i++) {
		
		if (d[i] > en_buyuk) {
			en_buyuk = d[i];
		}
		if (d[i] < en_kucuk) {
			en_kucuk = d[i];
		}
		
	}
	cout << "En buyuk sayi: " << en_buyuk << endl;
	cout << "En kucuk sayi: " << en_kucuk << endl;
	
	int toplam = 0;
	for (int i = 0; i < 5; i++) {
		toplam += d[i];
	}
	cout << "Ortalama: " << (float)toplam / 5 << endl;
}