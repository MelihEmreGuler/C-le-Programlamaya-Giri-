//Bir oyuna göre verilen bir dizgideki ardýþýk eþlerin silinmesine izin verilmetedir.
//Buna göre baþlangýçta verilen bir dizginin alabileceði en kýsa hali bulan kodu yazýnýz.
//örenek
//aabcccdd->bc
//f(aabcccdd)-> bcccdd-> f(bcccdd)-> bcdd-> f(bcdd)-> bc
//bir ikili bulup onu silen kalan sonucu döndüren fonksiyon yazmak
#include <iostream>
using namespace std;

const char* f(char s[100]) {
	int i = 0;
	char c = s[i];
	if (c == '\0')
		return s;
	bool kontrol = false;
	while (c != '\0') {
		char c1 = s[i+1];
		if (c == c1 && i == 0 ) {
			s = &s[i+2];
			kontrol = true;
			
		}
		else if (c == c1) {
			
			while (s[i] != '\0') {
				s[i] = s[i + 2];
				i++;
			}
			s[i] = '\0';
			kontrol = true;
		}
		i++;
		c = s[i];
	}
	if (kontrol == false)
		return s;
	else
	return f(s);
}

int main() {
	
	cout << "lutfen bir dizgi giriniz" << endl;
	char c[100];
	cin >> c;
	cout << f(c) << endl;
}