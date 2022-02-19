//Kullanicidan bir sayi alarak o buyuklukte ekrana ters dik ucgen bastiriniz.
#include <iostream>
using namespace std;
int main() {
	cout << "ters dik ucgenin boyutunu giriniz: ";

	int boyut;
	cin >> boyut;

	for (int i = 1; i <= boyut; i++) {
		
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = boyut; k >= i ;k--) {
			cout << "*";
		}
		cout << endl;
	}
}