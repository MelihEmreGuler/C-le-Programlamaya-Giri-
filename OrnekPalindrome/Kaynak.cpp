//bir kelimenin okunu�u ile tersten okunu�u ayn�ysa bu kelimeye palindrom ismi verilir.
//verilen kelimenin palindrom olup olmad���n� bulan kodu yaz�n�z.
//�rnek
//aabcccdd
//��kt�:palindrom de�ildir 
//
//aabbaa
//��kt�:palindromdur
//
//abcba
//��kt�:palindromdur
#include<iostream>
using namespace std;
int main() {
	cout << "Lutfen bir mesaj giriniz (bosluk karakteri olmamasi gerekmektedir): " << endl;
	//const char* c = (char*)malloc(sizeof(char) * 200);
	char c[200];
	cin >> c;
	char* p;
	char* q;
	p = c;
	q = c;
	while (*q !='\0') {
		q++;
	}
	q--;
	//cout << *p << " " << *q << endl;
	bool palindrom = true;
	while (q>p) {
		if (*p != *q) {
			palindrom = false;
			break;
		}
		p++;
		q--;
	}
	if (palindrom)
		cout << "girilen dizgi palindromdur." << endl;
	else{
		cout << "girilen dizgi palindrom degildir." << endl;
	}
}