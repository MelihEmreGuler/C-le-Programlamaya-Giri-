#include <iostream>
using namespace std;
int main() {

	/*
	cout << "Lutfen bes adet sayi giriniz: " << endl;
	int* p;
	p = (int*)malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << p[i] << " ";
	}
	*/
	
	cout << "Lutfen bes adet sayi giriniz: " << endl;
	int* p;
	p = (int*)malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; i++) {
		cin >> *(p + i); //pointer aritmatiði deniyor.
	//basit matematik iþlemleri ile yapmaya deniyor;
	//dizilerde ve pointerlerde ardýþýk elemanlar ram de ardýþýk adreslere yerleþtirilirler
	//bu özellikten yararlanarak adresini birer birer artýrarak eriþebiliriz.
	}
	for (int i = 0; i < 5; i++) {
		cout << *(p + i) << " ";
	}
	
}