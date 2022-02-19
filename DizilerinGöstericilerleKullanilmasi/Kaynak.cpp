#include<iostream>
using namespace std;
int main() {
	int a[3] = { 1,2,3 };
	int* p = &a[0];
	// int* p;
	// p = &a[0];

	//int* p;
	//p = a; (bu da aynı anlama geliyor çünkü her bir dizi aslıda bir pointerdir.
	cout << p[2] << endl;
	p[2] = 8;
	cout << a[2] << endl;

}