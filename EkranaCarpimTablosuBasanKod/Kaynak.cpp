//Kullanicidan okunan bir deger boyutunda carpim tablosunu bastiran kodu yaziniz.
#include <iostream>
using namespace std;
int main() {
	cout << "Carpim Tabosunun Genisligini Giriniz: ";
	
	long genislik;
	cin >> genislik;
	for (long i = 1; i <= genislik; i++) {
		
		for (long j = 1; j <= genislik; j++) {
			cout << i*j << "\t";
		}
		cout << endl;
	}
}
