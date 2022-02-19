#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float a, b, c;
	cout << "dik ucgenin birinci kenarini giriniz: "; cin >> a;
	cout << "dik ucgenin ikinci kenarini giriniz: "; cin >> b;
	cout << "dik ucgenin ucuncu kenarini giriniz: "; cin >> c;

	float dikkenar1, dikkenar2;

	float hipotenus = a;
	dikkenar1 = b;
	dikkenar2 = c;

	if (b > hipotenus) {
		hipotenus = b;
		dikkenar1 = a;
		dikkenar2 = c;
	}
	if (c > hipotenus) {
		hipotenus = c;
		dikkenar1 = a;
		dikkenar2 = b;
	}

	if (dikkenar1 * dikkenar1 + dikkenar2 * dikkenar2= hipotenus)
		cout << "Bu bir dik ucgendir.";
	else
		cout << "Bu bir dik ucgen degildir.";
}