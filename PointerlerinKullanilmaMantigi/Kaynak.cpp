#include <iostream>
using namespace std;

void degerDegistir(int* ptr) {
	*ptr = 20;//ptr nin g�sterdi�i adrese eri� ve o adresteki de�eri 20 yap.
	cout << "Fonksiyonun Icindeki Deger: " << *ptr << endl;
}

int main() {
	int a = 10;
	
	cout << "a Degiskeninin Degeri: " << a << endl;
	
	degerDegistir(&a);

	cout << "a Degiskeninin Yeni Degeri: " << a << endl;

	
	
}