#include <iostream>
using namespace std;

int carpim(int a, int b) { //baslangýc , adým , bitis degerlerini giriyorýz (recursive fonksiyon yaparken)
	if (b == 0)
		return 0;
	
	if (b < 0)
		return carpim(0 - a, 0 - b);//f(-5,3)=f(5,-1) // f(-5,-3)=f(5,3)
	
	return a + carpim(a, b - 1);
}

int main() {
	cout << "hangi iki sayinin carpilacagini giriniz: " << endl;
	int x, y;
	cin >> x >> y;
	cout << carpim(x, y);
}