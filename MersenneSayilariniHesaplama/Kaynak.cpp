// Mersenne say�lar� 2n-1 form�l�nden ��kan say�lar serisidir.
// Buna g�re Mersenne say�lar� : 1 3 7 15 31 63 � �eklinde 
// devam edip giden say�lard�r.
#include <iostream>
using namespace std;

int ust(int x, int y) {
	int sonuc = 1;
	for (int i = 1; i <= y; i++) {
		sonuc = sonuc * x;
	}
	return sonuc;
}

int ustr(int x, int y) {
	
	if (y == 0)
		return 1;
	
	return x * ustr(x, y - 1);
}

int main() {
	cout << "Mersenne serisinin kac adiminin hesaplanacagini giriniz: ";
	int a;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		cout << ustr(2, i) - 1 << endl;
	}
}