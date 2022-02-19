#include <iostream>
using namespace std;
int main() {
	
	int rg;
	
	srand(time(NULL));
	for(int i = 0; i < 5; i++){
		rg = rand() % 6 + 1; // 1 ile 6 arasýnda bir sayý döndürür.
		cout << rg << endl;
	}
	
	rg = rand() % 100;
	cout << rg;
}