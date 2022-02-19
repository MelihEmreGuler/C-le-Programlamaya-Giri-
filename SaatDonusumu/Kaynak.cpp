#include <iostream>
using namespace std;
// (hh:mm:ssAM) veya (hh:mm:ssPM) yi çevir
// 07:05:02PM -> 19:05:02 
// 07:02:00AM -> 07:02:00 

int main() {
	cout << "Lutfen 12 lik sistemde bir saat giriniz (hh:mm:ssPM/AM): ";
	char time[11];
	cin >> time;
	if (time[8] == 'P' || time[8] == 'p') {
		char x[3];
		x[0] = time[0];
		x[1] = time[1];
		x[2] = '\0';
		int saat = atoi(x);//karaker dizisini integere çeviriyor ascii to integer kýsaltmasý atoi

		//cout << (int)x[0] << endl; 0'ýn karþýýðý ASCII de 48 miþ.
		/*int saat = 0;
		saat += (x[0] - 48) * 10;
		saat += x[1] - 48;
		*/
		saat += 12;
		time[0] = (char)48 + saat / 10;
		time[1] = (char)48 + saat % 10;
		time[8] = '\0';
		cout << "Saatin donusmus hali: " << time << endl;
	}
	else {
		time[8] = '\0'; //end of string.
		cout << "Saatin donusmus hali: " << time << endl;
	}
}