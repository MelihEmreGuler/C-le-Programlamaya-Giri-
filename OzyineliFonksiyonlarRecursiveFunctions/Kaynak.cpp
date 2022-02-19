//Recursive Functions

//butun iterative fonksiyonlar recursive fonksiyonlara dönüþtürülebilir ve 
//butun recursive fonksiyonlar da iterative fonksiyonlara dönüþtürülebilir.

#include <iostream>
using namespace std;

int faktoriyelr(int); //veya int faktoriyelr(intx); // function prototype

int main() {
	cout << faktoriyelr(6);
}

int faktoriyelr(int n) {

	if (n == 1)
		return 1;

	return n * faktoriyelr(n - 1);
}