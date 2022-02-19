#include <iostream>
using namespace std;


int main() {
	/*
	int a = 5;
	
	int* ptr = &a;

	cout << "Degiskenin adresi: " << &a << endl;
	cout << "Degiskenin adresi: " << ptr << endl;

	cout << "Degiskenin degeri: " << *ptr << endl;

	*ptr = 6;

	cout << "Degiskenin yeni degeri: " << a << endl;
	*/
	int a = 10;
	
	int* p;
	p = &a; 

	cout << "&a :" << &a << endl;
	cout << "p  :" << p << endl; // p nin tuttuðu adres
	cout << "a  :" << a << endl;
	cout << "*p :" << *p << endl; //"*" gösterdiði yerdeki deðer demektir.
	cout << "&p :" << &p << endl; // pointer deðiþkeninin adresi






}