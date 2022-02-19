//(Diyagonu) Kosegeni 1 olan ve diðer elemanlarý 0 olan bir kare matris.
#include <iostream>
using namespace std;
int main() {
/*	cout << "Matrisin Boyutunu giriniz: ";
	int b;
	cin >> b;
	for (int i=1; i <= b; i++) {
		for (int j = 1; j <= b - i ; j++) {
			cout << "0";
		}
		cout << "1";
		for (int k = 1; k < i; k++) {
			cout << "0";
		}
		cout << endl;
	}
*/

/*	cout << "Matrisin Boyutunu giriniz: ";
	int b;
	cin >> b;
	for (int i = 1; i <= b; i++) {

		for (int j = 1; j <= b; j++) {

			if (i + j == b + 1)
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	}
*/

// 00001 i=1 j=5 b=5 i+j = b+1
// 00010 i=2 j=4 b=5
// 00100 i=3 j=3 b=5
// 01000 i=4 j=2 b=5
// 10000 i=5 j=1 b=5

}