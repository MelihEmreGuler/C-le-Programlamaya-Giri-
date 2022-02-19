//Düazce Üniversitesi Harf Notu Kýstaslarýna Göre
#include <iostream>
using namespace std;
int main() {
	int a;
	cout << "100 uzerinden notunuzu giriniz: ";
	cin >> a;

	if (100 >= a >= 90) {
		cout << "Harf notunuz AA dir." << endl;
	}
	else if (a >= 85) {
		cout << "harf notunuz BA dir." << endl;
	}
	else if (a >= 80) {
		cout << "harf notunuz BB dir." << endl;
	}
	else if (a >= 70) {
		cout << "harf notunuz CB dir." << endl;
	}
	else if (a >= 60) {
		cout << "harf notunuz CC dir." << endl;
	}
	else if (a >= 55) {
		cout << "harf notunuz DC dir." << endl;
	}
	else if (a >= 50) {
		cout << "harf notunuz DD dir." << endl;
	}
	else if (a >= 40) {
		cout << "harf notunuz FD dir." << endl;
	}
	else if (39 >= a) {
		cout << "harf notunuz FF dir." << endl;
	}
	else {
		cout << "gecersiz bir not girdiniz." << endl;
	}
}