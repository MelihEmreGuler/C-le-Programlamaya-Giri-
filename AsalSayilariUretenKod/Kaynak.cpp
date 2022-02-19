#include <iostream>
using namespace std;

bool asalmi(long long x) {
	
	for (long long i = 2; i < x; i++)
		if (x % i == 0) {
			return false;
		}

	return true;
}

int main() {

	cout << "Kac adet asal saynin hesaplanacagini giriniz: ";
	long long a;
	cin >> a;
	long long n = 0;
	for (long long i = 2; n<a; i++) {
	
		
		if (asalmi(i) == 1) {
			cout << i << endl;
			n++;
		}
		else;
		
//		if (n == a)
//			break;
	}
//	cout << endl << endl << n;

/*	cout << LLONG_MAX << endl;//9223372036854775807
	cout << INT_MIN << endl;
	long long x = 2147483648;
	cout << x;

*/
}