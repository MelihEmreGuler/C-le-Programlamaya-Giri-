#include <iostream>
using namespace std;
int main() {
/*	int a1 = 77, a2 = 69, a3 = 76, a4 = 73, a5 = 72;
	cout << (char)a1 << (char)a2 << (char)a3 << (char)a4 << (char)a5;
	cout << endl;
*/

/*	cout << "Lutfen bir harf giriniz: ";
	char c;
	cin >> c;
	cout << "Harfin Decimal Karsiligi: " << (int)c << endl;
	return 0;
*/
	cout << "Lutfen A'dan Z'ye Kadar, Piramidin Buyuklugunu Belirleyecek Bir Buyuk Harf Giriniz: ";
	char c;
	cin >> c;
	
	for (char i = 'A'; i <= c; i++) {

		for (char j = 'A'; j <= i; j++) {
			cout << j;
		}

		for (char k = i - 1; k >= 'A'; k--) {
			cout << k;
		}

		cout << endl;
	}
/*
//Girilen Harfi Tepeye Koyup Z'ye Kadar Isleyen Piramit
	
	for (char i = c; i <= 'Z'; i++) {

		for (char j = c; j <= i; j++) {
			cout << j;
		}

		for (char k = i - 1; k >= c; k--) {
			cout << k;
		}
		
		cout << endl;
	}
*/
	
}