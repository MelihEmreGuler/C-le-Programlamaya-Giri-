#include <iostream>
#include <math.h>

using namespace std;
int main() {
	int a[5];
	cout << "Bes Adet Sayi Giriniz: " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	int carpim = 1;
	for (int i = 0; i < 5; i++) {
		carpim *= a[i];
	}
	cout << "Sayilarin Geometrik Ortalamasi : " << pow(carpim, (float)1 / 5);
}