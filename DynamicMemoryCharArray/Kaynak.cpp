#include<iostream>
using namespace std;
int i;
int main() {
	cout << "Kac karekterlik bir ascii kodu gireceksiniz:";
	cin >> i;
	int* ascııArray = new int();
	ascııArray = new int[i];
	char* charArray = new char();
	charArray = new char[i];

	cout << "Karekterlerin ascii karsiligini giriniz:";
	for (int i = 0; i < ::i; i++)
		cin >> ascııArray[i];
	
	for (int i = 0; i < ::i; i++)
		charArray[i] = ascııArray[i];

	cout << "Ascii Array -> Char Array" << endl << "Olusan karakter dizisi;" << endl << endl;
	for (int i = 0; i < ::i; i++) {
		cout << charArray[i];
	}
}