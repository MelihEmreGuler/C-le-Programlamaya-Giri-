#include <iostream>
using namespace std;
int main() {
	int a[3] = { 3,7,2 };
	cout << a[1] << endl;
	cout << a[0] + a[2] << endl << endl;
	a[2] = 8;

	for (int i = 0; i < 3; i++) {
		cout << a[i] << endl;
	}

	int b[4];
	b[0] = 10;
	b[1] = 20;
	cin >> b[2];
	cin >> b[3];

//	for (int i = 0; i < 4; i++) {
//		cout << b[i] << endl;
//	}
	
	int c[5] = { 77,69,76,73,72 };
//	c[0] = 77; c[1] = 69; c[2] = 76; c[3] = 73; c[4] = 72;
	for (int i = 0; i < 5; i++) {
		cout << (char)c[i];
	}
}
