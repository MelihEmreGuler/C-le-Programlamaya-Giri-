/*
//referanslar degiskenler icin bir tane bekci degisken g�revi g�r�yor

#include <iostream>
using namespace std;


int main() {
	
	int a = 10;
	
	int& ref = a; //'&' i�areti kesinlikle ve kesinlike degiskeinin adresini simgelemiyor
// sadece "ref" degiskeninin bir referans degisken oldugunu s�yl�yor. 

	ref++;
	cout << "a nin yeni degeri: " << a << endl;

}

*/

/*
#include <iostream>
using namespace std;

void degerDegistir(int& ref) { //a ' ya bek�i g�revi g�recek bir referans tutmak istiyorum.
	ref = 20;
}

int main() {
	int a = 10;
	cout << "a'nin degeri: " << a << endl;

	degerDegistir(a); // t�pk� bir pointer gibi davranacak

	cout << "a'nin yeni degeri: " << a << endl;

}
*/

#include <iostream>
using namespace std;


int main() {
	int a = 10;
/*
	int& ref; // Hata : refi tan�mlam��s�n ancak 
//herhangi bir degiskenle baslatmamisin.
//ilk tan�mlama isleminde degisken atamasi yapilmak zorunda.	
	ref = a;

*/
	//ancak pointerlerin boyle bir yan� yok 
	//istedigimiz zaman deger atamasi yapabiliriz.

	int* ptr;
	
	ptr = &a;

	*ptr = 20;

	cout << "a'nin yeni degeri: " << a  << endl;
}