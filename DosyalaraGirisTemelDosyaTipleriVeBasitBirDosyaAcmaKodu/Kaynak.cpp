#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
	//ofstream-> output file stream (yazmak için açýlan dosya)
	//ifstream-> input file stream (okumak için açýlan dosya)
	//okuma
	ofstream dosya;//dosya gösterici;
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