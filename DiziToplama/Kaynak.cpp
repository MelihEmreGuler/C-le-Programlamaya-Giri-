#include <iostream>
using namespace std;
int main() {
	cout << "Dizinin Kac Elemanli olacagini giriniz: ";
	int n;
	cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);
	int	toplam = 0;
	cout << "Dizinin Elemanlarini giriniz: ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		toplam += a[i];
	}
	cout << "toplam: " << toplam;
}