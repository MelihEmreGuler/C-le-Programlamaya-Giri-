#include <iostream>
using namespace std;

bool asalmi(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int ust(int x, int y) {
	if (y == 0)
		return 1;
	return ust(x, y - 1) * x;
}

int mersenne(int x) {
	return ust(2, x) - 1;
}


int main() {
	cout << "Kac adet asal mersenne sayisinin hesaplanacagini giriniz: ";
	int a;
	cin >> a;
	int n = 0;
	for (int i = 2; n < a; i++) {
		if (asalmi(mersenne(i)) == 1) {
			cout << mersenne(i) << endl;
			n++;
		}
	}
		
	return 0;
}
 
