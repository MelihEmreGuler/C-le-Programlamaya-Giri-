#include <iostream>
using namespace std;
struct Employee {
	int id;
	string name;
	string departman;

};
/*
int main() {
	Employee employee1 = { 123,"Melih Guler", "Bilgisayar Müh." };
	cout << employee1.name << endl;
	employee1.name = "Melih Emre";
	cout << employee1.name << endl;


}
*/
int main() {
	Employee employee1;
	employee1.id = 12345;
	cout << employee1.id << endl;

}