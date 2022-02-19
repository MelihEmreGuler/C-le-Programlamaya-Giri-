#include <iostream>
using namespace std;
int main() {
	
	const char* s = "evren"; // strings are immutable, stringler deðiþtrilemez
	char c[6] = "evren"; // karekter dizisi bir dizi olduðu için elemanlarýný deðiþtirebiliyoruz
	// c = s; shallow copy , sýð kopyalama
	// strcmp -> string compare (stringleri karþýlþatýrma komutu)
	// sözlük karþýlaþtýrmasý yapar == ise 0 dödnürür.
	// ilk string küçükse -1
	// ilk string büyükse 1 döndürür.
	if (strcmp(c,s)==0) //s==c gibi. ama s==c ifadesi s ve c pointerlerinin adreslerini karþýlaþtýrdýðý için yanlýþ bir sorgulamadýr (sýð kopyalama yapýlmadýðý müddetçe eþit deðiller çýktýsýný verir.
		cout << "esitler" << endl;
	else
		cout << "esit degiller" << endl;
	// s[2] = 'x'; "Buss error: 10"çýktýsý veriyor.
	c[2] = 'x';
	cout << c << endl << s; // karekter dizisini deðiþtirebiliriz

}