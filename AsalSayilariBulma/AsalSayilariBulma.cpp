#include <iostream>
using namespace std;
int main() {
	
		int i, n = 2;
		while (n <= 100) {
			i = 2;
			while (i < n) {
				if (n % i == 0)
					break;
				i++;
			}
			if (i == n)
				cout << n << endl;
			n++;
		}
		return 0;


/*	int i; int n = 3;
	for (; n <= 100; n++) {
		i = 2;
		for (; i <= n; i++) {
			if (n % i == 0)
				break;
			if (i == n)
				cout << n << endl;
		}
	}
	return 0;
*/
/*	int i = 1; int n = 99;
	while (n > 0) {

		while (i <= 10) {
			if (i == 4)
				continue;
			cout << i << endl;
			i++;
		}
		cout << n << endl;
		n--;
	}
*/

}