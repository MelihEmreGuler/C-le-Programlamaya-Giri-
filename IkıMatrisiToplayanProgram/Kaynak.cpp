#include <iostream>
using namespace std;
int main() {
	int a[2][3] = { 0,1,2,9,8,7 };
	int b[2][3] = { 6,5,4,3,4,5 };

	int t[2][3];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			t[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << "toplam matrisi;" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << t[i][j] << " ";
		}
		cout << endl;
	}
}