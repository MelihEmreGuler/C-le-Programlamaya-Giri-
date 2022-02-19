#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int yol, hiz;
	cout << "mesafeyi giriniz: ";
	cin >> yol;
	cout << "hizi giriniz: ";
	cin >> hiz;

	int saat = yol / hiz;
	float dakikakismi = (float)yol / hiz - yol / hiz;
	int dakika = 60 * dakikakismi;
	cout << "tahmini varis sureniz " << saat << " saat, " << dakika << " dakikadir." << endl;



}