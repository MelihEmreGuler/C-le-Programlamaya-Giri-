#include <iostream>
using namespace std;
int main() {
	int x = 1;
	int y = 1;
	int z = 1;
	int i = 0;
	int n;

	cout << "Fibonacci serisinin kac elemani hesaplansin? ";
	cin >> n;

	if (n < 0)
		cout << "hatali bir sayi girdiniz.";

	else if (n == 0); // hicbir sey yapma anamına geliyor.

	else if (n == 1) {
		cout << 1;
		return 0;
	}
	else {
		cout << "1\n1\n";

		while (i < n - 2) {
			z = x + y;
			x = y;
			y = z;
			cout << z << endl;
			i++;
		}
	}
}
//1 1 2 3 5 8 13 21 34 