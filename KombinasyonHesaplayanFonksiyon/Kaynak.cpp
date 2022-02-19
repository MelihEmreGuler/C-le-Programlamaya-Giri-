#include <iostream>
using namespace std;

//iterative function
int faktoriyel(int x) {
	int carpim = 1;
	for (int i = 1; i <= x; i++) {
		carpim *= i;
	}
	return carpim;
}
int kombinasyon(int n, int r) {
	int sonuc;
	sonuc = faktoriyel(n) / (faktoriyel(r) * faktoriyel(n - r));
	return sonuc;
}
int main() {
	
	cout << "Kombinasyonunu hesaplayacaginiz sayi ciftini giriniz: " << endl;
	int x, y;
	cin >> x >> y;
	
	cout << "C(" << x << "," << y << ")=" << kombinasyon(x, y);



}