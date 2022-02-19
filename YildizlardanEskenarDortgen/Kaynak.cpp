//    i=1     *    b2 y1 2b+1y=boyut  b=(boyut-y)/2  y=2i-1
//	  i=2    ***   b1 y3 2b+1y=boyut  b=(boyut-y)/2  y=2i-1
//    i=3   *****  b0 y5 2b+1y=boyut  b=(boyut-y)/2  y=2i-1
//    i=4    ***   b1 y3 2b+1y=boyut  b=(boyut-y)/2  y=2(boyut-i)+1
//    i=5     *    b2 y1 2b+1y=boyut  b=(boyut-y)/2  y=2(boyut-i)+1
#include <iostream>
using namespace std;
int main() {
	cout << "Eskenar Dortgenin Boyutunu Giriniz: ";
	
	int boyut;
	cin >> boyut;
	
	for (int i = 1; i <= boyut; i++) {
		
		int b, y;
		
		if (i<=boyut/2+1){
			 y = 2 * i - 1;
			 b = (boyut - y) / 2;
			
		}
		else {
			 y = 2 * (boyut - i) + 1;
			 b = (boyut - y) / 2;
		}
			
		for (int j = 1; j <= b; j++) {
			cout << " ";
		}
		
		for (int k = 1; k <= y; k++) {
			cout << "*";
		}

		cout << endl;
	}
	
}