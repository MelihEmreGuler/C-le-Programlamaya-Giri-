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
		cin >> *(p + i); //pointer aritmati�i deniyor.
	//basit matematik i�lemleri ile yapmaya deniyor;
	//dizilerde ve pointerlerde ard���k elemanlar ram de ard���k adreslere yerle�tirilirler
	//bu �zellikten yararlanarak adresini birer birer art�rarak eri�ebiliriz.
	}
	for (int i = 0; i < 5; i++) {
		cout << *(p + i) << " ";
	}
	
}