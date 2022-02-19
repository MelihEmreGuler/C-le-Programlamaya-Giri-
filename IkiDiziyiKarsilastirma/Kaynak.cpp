//Ýki diziyi karþýlaþtýrýp, birinci dizinin, 
//ikinci dizinin bir parçasý olup olmadýðýný bulan kod yazýnýz.
#include <iostream>
using namespace std;
int main() {
/*
	int a[3] = { 1,2,3 };
	int b[7] = { 9,1,1,2,3,6,7 };
	int aboyut = 3;
	int bboyut = 7;
	
	for (int i = 0; i < bboyut; i++) {
		bool esit = true;
		for (int j = 0; j < aboyut; j++) {
			if (b[i + j] != a[j]) {
				esit = false;
				break;
			}
		}
		if (esit)
			cout << "alt elemani vardir ve " << i << "'den baslar." << endl;
	}
*/
	int a[4] = { 1,2,3,1 };
	int b[14] = { 9,5,1,1,2,3,1,2,3,1,2,3,1,7 };
	
	bool m2 = false;
	for (int i = 0; i < 14; i++) {
		bool m1 = false;
		
		for (int j = 0; j < 4; j++) {
			
			if (b[i + j] == a[j]) {
				m1 = true;
			}
			else {
				m1 = false;
				break;
			}
		}
		
		if (m1) {
			cout << "a dizisi b dizisinin alt kumesidir ve b[" << i << "] den baslar." << endl;
			m2 = true;
		}
	}
	if (m2==0)
		cout << "hicbir alt kume yoktur." << endl;
}
