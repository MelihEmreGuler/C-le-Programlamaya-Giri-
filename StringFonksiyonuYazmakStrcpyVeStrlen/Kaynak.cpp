#include <iostream>
using namespace std;
//stringin boyutunu hesaplayan fonksiyon
int boyut(const char* s) {
	
	int b = 0;
	char c = s[0];
	
	while (c != '\0') {
		c = s[++b];
	}
	
	return b;
}

int main() {
	const char* c = "evren";
	cout << boyut(c) << endl;
	cout << strlen(c) << endl;//string length -> stringin boyutunu veriyor bizim yazdýðýmýz fonksiyonla ayný.
	//char x[6] = { 'a','b','c','d','e','\0' }; olmuyor
	//char* x = (char*)malloc(sizeof(char) * 6); olmasý lazýmdý
	strcpy(x, c);
	cout << x << endl;
	
}