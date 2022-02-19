#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int* p= &a;
	
	cout << "a :" << a << endl;
	cout << "*p:" << *p << endl; // gösteriğin yerdeki değeri bas
	cout << "&a:" << &a << endl;
	cout << "p :" << p << endl; // p = &a 
	cout << "&p:" << &p << endl;
	
		
	/*
	cout << p<<endl; // pointerler gösterdikleri değişkenin adresini kendilerinde tutarlar
	cout << *p<<endl; //"*" gösterdiği yerdeki değer demek;
	// bir pointerin içine herhangi bir adresi koyabiliyoruz
	cout << &p << endl;//pointerin tutulduğu adres.
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