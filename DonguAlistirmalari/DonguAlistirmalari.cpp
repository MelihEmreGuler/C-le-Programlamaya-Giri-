#include <iostream>
using namespace std;
int main() {
/*
//1 den 100 e kadar tek sayilari basan kod. 
	int a=1;
	while (a <= 100) {
		cout << a << ", ";
		a+=2;
	}
*/
/*
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 1)
			cout << i << ", ";
	}
*/
/*
//50 ile 70 arasýndaki çift sayilar
	int i = 50;
	while (i <= 70) {
		if (i % 2 == 0)
			cout << i << ", ";
		i++;
	}
*/
/*
//100 den 70e kadar 7 ye bolunen sayilar.
	for (int x = 100; x >= 70; x--)
		if (x % 7 == 0)
			cout << x << ", ";
*/
/*
// 1 ile 100 arasinda 3 e ve 7 ye bölünebilen sayilar.
	int i = 1;
	while (i <= 100) {
		if (i % 3 == 0 && i % 7 == 0)
			cout << i << ", ";
		i++;
	}
*/
/*
//1 ile 100 arasinda 3 e veya 7 ye bölünebilen sayilar.
	for(int i = 1; i <= 100; i++) {
		if (i % 3 == 0 || i % 7 == 0)
			cout << i << " ";
	}
*/
/*
//5 sayinin ortalasini bulan kod
	int i = 1;
	int okunan;
	int toplam = 0;
	cout << "5 tane sayi giriniz:"<<endl;
	while (i <= 5) {
		cin >> okunan;
		toplam = toplam + okunan; // toplam += okunan
		i++;
	}
	cout << "sayilarin ortalamasi: " << toplam / 5;
*/
/*
//Kullanici -1 girene kadar butun sayilari okuyup ortalamarini ekrana bastiriniz.
	float okunan=0;
	float toplam=0;
	float sayi = 0;
	//for (int i = 0; okunan != -1; i++) {
	while (okunan != -1){
		cout << "bir sayi giriniz:";
		cin >> okunan;
		toplam += okunan;
		sayi++;
	}
	sayi--;
	toplam += 1;
	cout << "sayilarin oralamasi: " << toplam / sayi;
*/
/*
	int okunan = 0;
	int toplam = 0;
	int sayi = 0;
	//for (;;) {
	while (true){
		cout << "Bir sayi giriniz:";
		cin >> okunan;
		if (okunan == -1)
			break;
		toplam += okunan;
		sayi++;
	}
	cout << "sayilarin ortalamasi: " <<(float) toplam / sayi;
*/


}
