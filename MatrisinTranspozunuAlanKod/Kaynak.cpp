#include <iostream>
using namespace std;
int main() {
	
	int a[3][3] = { 5,4,3,4,0,4,7,10,3 };
	int b[3][3];

	//transpose alma islemi

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b[j][i] = a[i][j];
		}
	}
	cout << "dizinin transpzu" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

}