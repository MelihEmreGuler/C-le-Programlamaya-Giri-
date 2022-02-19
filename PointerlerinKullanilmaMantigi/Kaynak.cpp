#include <iostream>
using namespace std;

void degerDegistir(int* ptr) {
	*ptr = 20;//ptr nin gösterdiði adrese eriþ ve o adresteki deðeri 20 yap.
	cout << "Fonksiyonun Icindeki Deger: " << *ptr << endl;
}

int main() {
	int a = 10;
	
	cout << "a Degiskeninin Degeri: " << a << endl;
	
	degerDegistir(&a);

	cout << "a Degiskeninin Yeni Degeri: " << a << endl;

	
	
}