#include <iostream>
using namespace std;

void refDeneme(int a, int&b) {
	a = 5;
	b = 6;
	cout << "Fonksiyonun Icindeki a Degeri: " << a << endl;
	cout << "Fonksiyonun Icindeki b Degeri: " << b << endl;
}

int main() {
	int i, j;
	i = 10;
	j = 20;
	
	cout << "i nin degeri: " << i << endl;
	cout << "j nin degeri: " << j << endl;

	refDeneme(i, j);

	cout << "i nin fonksiyondan sonraki degeri: " << i << endl;
	cout << "j nin fonksiyondan sonraki degeri: " << j << endl;
	
}


//Varsayilan Parametrelerin Kulanilmasi
void fon(int x = 1, int y = 20) {
	cout << x << " " << y << endl;
}

/*
void Fon(int x = 5, int y); //hata
//varsayilan bagimsiz degisken parametre listesinin sonunda degil. 

*/

//Dgrusu;
void fon_(int y, int x = 5) {
	cout << y << " " << x << endl;
}

int main() {
	fon(5, 6); //2 gerçek parametre ile fonksiyon çagirilmasi
	fon(5);    //1 gerçek parametre ile fonksiyon çagirilmasi
	fon();     // gerçek parametresiz fonksiyon çagirilmasi

	fon_(100, 200); //2 gerçek parametre ile fonksiyon çagirilmasi
	fon_(100);      //1 gerçek parametre ile fonksiyon çagirilmasi
//	fon_(); //hata
}