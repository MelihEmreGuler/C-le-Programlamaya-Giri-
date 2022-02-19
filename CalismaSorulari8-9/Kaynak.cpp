#include <iostream>
using namespace std;
int a = 6, b = 10, c = 12;
void fun(int a, int& b, int c = 8) {
	b *= 2;
	a += 3;
	c += 5;
	cout << a << b << c << endl;
}
void fun(int& a) {
	a *= 2;
	c += ::a;
	cout << a << b << c << endl;
}
int main() {
	fun(b);
	fun(b, a);
	fun(b, c, a);
	return 0;
}