/*
#include <iostream>
using namespace std;
int main() {
	int a = 10;
	
	int& ref = a;

	ref++;
	
	cout << "a'nin degeri:" << a;
}
*/

#include <iostream>
using namespace std;

void degerdegistir(int& ref) {
	ref = 20;
}
int main() {
	int a = 10;
	cout << "a'nin degeri:" << a <<endl;
	degerdegistir(a); // a mızın gerçek degeri degisecek
	cout << "a'nin yeni degeri:" << a << endl;

}