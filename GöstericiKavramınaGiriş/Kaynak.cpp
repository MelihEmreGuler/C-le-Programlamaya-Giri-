#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int* p= &a;
	
	cout << "a :" << a << endl;
	cout << "*p:" << *p << endl; // g�steri�in yerdeki de�eri bas
	cout << "&a:" << &a << endl;
	cout << "p :" << p << endl; // p = &a 
	cout << "&p:" << &p << endl;
	
		
	/*
	cout << p<<endl; // pointerler g�sterdikleri de�i�kenin adresini kendilerinde tutarlar
	cout << *p<<endl; //"*" g�sterdi�i yerdeki de�er demek;
	// bir pointerin i�ine herhangi bir adresi koyabiliyoruz
	cout << &p << endl;//pointerin tutuldu�u adres.
	cout << &a << endl;
	*/

	int x[3] = { 1,2,3 };
	int* q;
	//q = & x[0];
	q = x;
	cout << q[2] << endl;
	q[2] = 8;
	cout << q[2] << endl;
	cout << x[2] << endl;
	
	int* qq = x;
	// qq = x = q
}