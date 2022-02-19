#include <iostream>
using namespace std;
int main() {

	int a;
	cout << "1 ya da 2 giriniz: ";
	cin >> a;
	switch (a) { //a nýn deðerine göre çalýþacak switch blogu.

	case 1: cout << "1 sayisini girdiniz.";
		break; //break girmezsek case 2 ye geçer ve devam eder.(if yapisi gibi kendi kendine bitirmez.)

	case 2: cout << "2 sayisini girdiniz.";
		break;

	default: cout << "gecersiz bir sayi girdiniz.";
	}
}