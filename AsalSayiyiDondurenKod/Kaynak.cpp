//f(4)=7
//f(5)=11 cýktisini veren kod.

#include <iostream>
using namespace std;

bool asalmi(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}
int f(int a) {
	cin >> a;
	
	int n = 0;
	int i = 2;
	for (; n < a; i++) {
		if (asalmi(i) == 1) {
			n++;
		}
	}
	return i - 1;

}



int main() {
	cout << "Kacinci asal sayinin hesaplanacagini giriniz: ";
	int r = 0;
	cout << f(r);

}