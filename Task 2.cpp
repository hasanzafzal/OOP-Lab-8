#include <iostream>
using namespace std;

class tollbooth {
private: 
	int cars;
	double toll;
public:
	tollbooth() : cars(0), toll(0.0) {}
	void payingcar() {
		cars++;
		toll += 0.5;
	}
	void nonpayingcar() {
		cars++;
	}
	void display() {
		cout << "Total Toll: $" << toll << endl;
		cout << "Total Cars: " << cars << endl;
	}
};

int main() {
	tollbooth tb;
	char choice;
	int i;
	for ( i = 0; i < 10; i++) {
		cout << "Press 'y' if you want to count paying/non-paying car or press any other key to escape: ";
		cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			cout << endl;
			cout << "Enter 'p' for paying car and 'n' for not paying car or press any other key to escape: ";
			cin >> choice;
			if (choice == 'p' || choice == 'P') {
				tb.payingcar();
				cout << "Paying car counted." << endl;
			}
			else if (choice == 'n' || choice == 'N') {
				tb.nonpayingcar();
				cout << "Non-paying car counted." << endl;
			}
			else {
				tb.display();
				i = 10;
			}
		}
		else {
			tb.display();
			i = 10;
		}
	}
	return 0;
}