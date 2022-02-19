/*
//referanslar degiskenler icin bir tane bekci degisken görevi görüyor

#include <iostream>
using namespace std;


int main() {
	
	int a = 10;
	
	int& ref = a; //'&' işareti kesinlikle ve kesinlike degiskeinin adresini simgelemiyor
// sadece "ref" degiskeninin bir referans degisken oldugunu söylüyor. 

	ref++;
	cout << "a nin yeni degeri: " << a << endl;

}

*/

/*
#include <iostream>
using namespace std;

void degerDegistir(int& ref) { //a ' ya bekçi görevi görecek bir referans tutmak istiyorum.
	ref = 20;
}

int main() {
	int a = 10;
	cout << "a'nin degeri: " << a << endl;

	degerDegistir(a); // tıpkı bir pointer gibi davranacak

	cout << "a'nin yeni degeri: " << a << endl;

}
*/

#include <iostream>
using namespace std;


int main() {
	int a = 10;
/*
	int& ref; // Hata : refi tanımlamışsın ancak 
//herhangi bir degiskenle baslatmamisin.
//ilk tanımlama isleminde degisken atamasi yapilmak zorunda.	
	ref = a;

*/
	//ancak pointerlerin boyle bir yanı yok 
	//istedigimiz zaman deger atamasi yapabiliriz.

	int* ptr;
	
	ptr = &a;

	*ptr = 20;

	cout << "a'nin yeni degeri: " << a  << endl;
}