//		*
//		**
//		***
//		****
//		*****
#include <iostream>
using namespace std;
int main() {
/*	cout << "Ucgenin Boyutunu Giriniz: ";
	int boyut;
	cin >> boyut;
	for (int i = 1; i <= boyut; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
*/
//yidizlarla ters dik ucgen
	cout << "Ters Dik Ucgenin Boyutunu Giriniz: ";
	int boyut;
	cin >> boyut;
	for (int i = 1; i <= boyut; i++) {
		
		for (int j = 1; j <= boyut - i; j++) {
			cout << " ";
		}
		
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
}