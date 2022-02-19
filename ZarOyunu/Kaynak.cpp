#include <iostream>
using namespace std;
int main() {
	int n, rg1, rg2, skor1 = 0, skor2 = 0;
	
	cout << "kac adet zar atilacagini giriniz: ";
	cin >> n;
	
	int* d1 = (int*)malloc(sizeof(int) * n);
	int* d2 = (int*)malloc(sizeof(int) * n);
	
	srand(time(NULL));
	
	for (int i = 0; i < n; i++) {
		rg1 = rand() % 6 + 1;
		d1[i] = rg1;
		rg2 = rand() % 6 + 1;
		d2[i] = rg2;
		
		if (rg1 > rg2) {
			skor1++;
		}
		else if (rg2 > rg1) {
			skor2++;
		}
	}
	
	cout << endl << "birinci oyuncu:";
	for (int i = 0; i < n; i++) {
		cout << d1[i] << " ";
	}
	cout << endl << "ikinci oyuncu: ";
	for (int i = 0; i < n; i++) {
		cout << d2[i] << " ";
	}
	cout << endl << endl;
	
	cout << "birinci oyuncunun skoru: " << skor1 << endl << "ikinci oyuncunn skoru: " << skor2;
	
	cout << endl << endl;
	
	if (skor1 > skor2)
		cout << "birinci oyuncu kazandi.";
	else if (skor2 > skor1)
		cout << "ikinci oyuncu kazandi.";
	else
		cout << "sonuc berabere, iki oyuncu da kazanamadi." ;
	cout << endl;

	
}