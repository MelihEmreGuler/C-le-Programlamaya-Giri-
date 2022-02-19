//kullanicidan bir sayi alip verilen sayi kadar sayiyi okuyunuz.
//Bu sayilarin içindeki pozitif negatif ve sifirlarin oranini dondurunuz.
#include <iostream>
using namespace std;
int main() {
	cout << "Lutfen kac sayi gireceginizi yaziniz: " << endl;
	int girilen_sayi;
	cin >> girilen_sayi;
	
	int i = 1;
	float pozitifler = 0;
	float negatifler = 0;
	float sifirlar = 0;


	int a;

	while (i <= girilen_sayi) {
		cout << "Bir sayi giriniz: ";
		cin >> a;
		if (a > 0)
			pozitifler++;

		else if (a == 0)
			sifirlar++;

		else
			negatifler++;

		i++;
	}
	cout << endl << "pozitifler: " << pozitifler / girilen_sayi << endl << "negatifler: " << negatifler / girilen_sayi << endl << "Sifirlar: " << sifirlar / girilen_sayi << endl;
}