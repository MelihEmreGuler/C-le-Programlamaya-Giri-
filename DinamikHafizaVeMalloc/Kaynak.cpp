#include <iostream>
using namespace std;

int f(int* p) {
	*p = 10;
	return 0;
}

int main() {
	int a[3];
	int* p = (int*)malloc(sizeof(int) * 3);//3 tane integerin s���ca�� kadar haf�zada yer ay�r.
	//malloc : memory allocation (haf�zada yer ay�rmak)
	//sizeof(int) : bir integerin haf�zada kaplad��� yer. 
	p[2] = 6;
	cout << p[2] << endl;
	int* q = (int*)malloc(sizeof(int));
	*q = 50;
	f(q);
	cout << *q << endl;
}