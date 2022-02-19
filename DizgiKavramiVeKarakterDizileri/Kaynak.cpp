#include <iostream>
using namespace std;
int main() {
	const char* s = "evren";
	cout << s << endl;
	cout << s[2] << endl;
	char c[6] = "evren";
	cout << c << endl;
	char a[6];
	a[0] = 'm'; a[1] = 'e'; a[2] = 'l'; a[3] = 'i'; a[4] = 'h'; a[5] = '\0';
	// \0 end of string anlamýna gelir. "" týrnaklarý kullanýlýrken kendiliðinden yazýlmýþ olur
	cout << a;
}