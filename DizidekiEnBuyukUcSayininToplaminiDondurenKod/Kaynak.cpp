#include <iostream>
using namespace std;
int main() {
	int a[7];
	cout << "Yedi Adet Sayi Giriniz: " << endl;
	for (int i = 0; i < 7; i++) {
		cin >> a[i];
	}
	int eb1 = -2147483648;
	int eb2 = -2147483648;
	int eb3 = -2147483648;
	for (int i = 0; i < 7; i++) {
		if (a[i] > eb1) {
			eb3 = eb2;
			eb2 = eb1;
			eb1 = a[i];
		}
		else if (a[i] > eb2) {
			eb3 = eb2;
			eb2 = a[i];
		}
		else if (a[i] > eb3) {
			eb3 = a[i];
		}
	}
	cout << "En Buyuk Uc Sayinin Toplami: " << eb1 + eb2 + eb3;
}