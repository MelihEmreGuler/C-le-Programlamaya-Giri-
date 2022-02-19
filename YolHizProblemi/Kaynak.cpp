#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float a, b, c;
	cout << "dik ucgenin birinci kenarini giriniz: "; cin >> a;
	cout << "dik ucgenin ikinci kenarini giriniz: "; cin >> b;
	cout << "dik ucgenin ucuncu kenarini giriniz: "; cin >> c;

	float dik1, dik2;

	float hipotenus = a;
	dik1 = b;
	dik2 = c;

	if (b > hipotenus) {
		hipotenus = b;
		dik1 = a;
		dik2 = c;
	}
	if (c > hipotenus) {
		hipotenus = c;
		dik1 = a;
		dik2 = b;
	}

	if (dik1 * dik1 + dik2 * dik2 == hipotenus * hipotenus)
		cout << "Bu bir dik ucgendir.";
	else
		cout << "Bu bir dik ucgen degildir.";
}