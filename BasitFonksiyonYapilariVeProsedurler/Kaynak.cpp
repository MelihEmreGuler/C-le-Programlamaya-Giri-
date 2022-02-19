#include <iostream>
using namespace std;

void g(int x) {
	cout << x + 5 << endl;
	//return kullanmaya gerek kaldan çalýþtý.
}

int f(int x) {
	cout << x << endl;
	return 5;
}

int main() {

	cout << f(6) << endl;
	cout << f(19) << endl;
	g(10);
}