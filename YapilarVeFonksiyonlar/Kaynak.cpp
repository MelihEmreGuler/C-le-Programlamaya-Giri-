#include <iostream>
using namespace std;

struct Employee{
	int id;
	string name;
	string departman;
};
void showEmployee(Employee employee) {
	cout << "Id:" << employee.id << endl;
	cout << "Name:" << employee.name << endl;
	cout << "Departman:" << employee.departman << endl;
}

int main() {
	Employee employee1;
	cout << "Id degerinizi giriniz:";
	cin >> employee1.id;
	cout << "Isminizi Giriniz:";
	cin >> employee1.name;
	cout << "departmaninizi griniz:";
	cin >> employee1.departman;

	cout << "bilgileriniz;" << endl;

	showEmployee(employee1);
}