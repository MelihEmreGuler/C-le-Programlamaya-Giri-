#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
	//ofstream-> output file stream (yazmak i�in a��lan dosya)
	//ifstream-> input file stream (okumak i�in a��lan dosya)
	//okuma
	ofstream dosya;//dosya g�sterici;
	dosya.open("deneme.doc");
	if (dosya.is_open()) {
		dosya << "Melih Emre Guler\n";
		dosya.close();
	}
	else
		cout << "dosya acilamadi" << endl;
	//okuma
	string satir;
	ifstream dosya2("deneme.txt");
	if (dosya2.is_open()) {
		while (getline(dosya2, satir)) {
			cout << satir << '\n';
		}
		dosya2.close();
		
	}
}