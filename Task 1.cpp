#include <iostream>
using namespace std;

struct employee {
	int empnumber;
	float compensation;
};

int main() {
	employee e1;
	employee e2;
	employee e3;
	cout << "Enter the employee number and compensation for employee #1" << endl;
	cout << "Employee number:";
	cin >> e1.empnumber;
	cout << "Compensation: $";
	cin >> e1.compensation;	
	cout << "Enter the employee number and compensation for employee #2" << endl;
	cout << "Employee number:";
	cin >> e2.empnumber;
	cout << "Compensation: $";
	cin	>> e2.compensation;
	cout << "Enter the employee number and compensation for employee #3" << endl;
	cout << "Employee number:";
	cin >> e3.empnumber;
	cout << "Compensation: $";
	cin >> e3.compensation;
	cout << "\nThe compensation of the employees are as follows:" << endl;
	cout << e1.empnumber << " = $" << e1.compensation << endl;
	cout << e2.empnumber << " = $" << e2.compensation << endl;
	cout << e3.empnumber << " = $" << e3.compensation << endl;
	return 0;
}