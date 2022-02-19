#include <iostream>
using namespace std;
int main() {
	int a[7];
	cout << "Yedi Adet Sayi Giriniz: " << endl;
	for (int i = 0; i < 7; i++) {
		cin >> a[i];
	}
	int toplam = 0;
	for (int i = 0; i < 7; i++) {
		toplam += a[i];
	}
	cout << "Sayilarin Aritmetik Ortalamasi: " << (float)toplam / 7;
}