#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string terss(string s) {
	char c = s[0];
	int i = 1;
	while (c != '\0'){
		cout <<  c;
		c = s[i++];
	}
	cout << endl;
	return s;
}

int main() {
	ifstream dosya("girdi2.txt");
	string s;
	while (getline(dosya, s)) {
		cout << s << endl;
		cout << " deneme : " << terss(s) << endl;;
	}
	dosya.close();

}