#include <iostream>
using namespace std;
/*

int g(int x) { //call by value 
	x = 30;
} //scope of a veriable, degiskenin gecerlilik alani

int f(int* x, int* y, int* z) { // call by reference 
	*x = 40;
	*y = 90;
	*z = 100;
}
int main() {
	int a = 10;
	int b = 10, c = 10;
	int* p,*q,*r;
	p = &a;
	q = &b;
	r = &c;
	g(a);
	cout << a;
	f(p,q,r);
	cout << *p << " " << *q << " " << *r << endl;

}
*/
int g(int x) {// call by value
	x = 15;
	return 0;
}
//scope of variable, degiskenin gecerlilik alani.

int f(int* x, int* y, int* z) { //call by referance (atýf ile çaðýrma)
	*x = 30;
	*y = 60;
	*z = 90;
	return 0;
}

int main() {
	int a = 10, b = 10, c = 10;
	int* p, * q, * r;
	p = &a;
	q = &b;
	r = &c;
	g(a);
	cout << a << endl;
	f(p, q, r);
	cout << a << endl;
	cout << *p << " " << *q << " " << *r << endl;
}