#include <iostream>
using namespace std;

int fark(int* a,int boyut) {
	int enbuyuk = -2147483647;
	int enkucuk = 2147483647;
	for (int i = 0; i < boyut; i++) {
		if (a[i] < enkucuk)
			enkucuk = a[i];
		if (a[i] > enbuyuk)
			enbuyuk = a[i];
	}
	return enbuyuk - enkucuk;
}

int main() {
	cout << "Gireceginiz dizinin kac elemanli olacagini seciniz: ";
	int n;
	cin >> n;
	cout << "Dizinin elemanlarini giriniz: ";
	int* d = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		cin >> *(d + i);
	}
	cout << "Dizideki en buyuk ve en kucuk sayi arasindaki fark: ";
	cout << fark(d, n) << endl;
}