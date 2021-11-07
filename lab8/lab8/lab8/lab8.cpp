#include "Number.h"

int main() {
	int choice;
	char operation;
	cout << "1. To work with integer;\n2. To work with double.\n";
	while (true) {
		cin >> choice;
		switch (choice) {
		case 1: {
			int firstVar, secondVar;
			cout << "Start entering numeric expression (+,-,*,/)\n";
			cin >> firstVar;
			cin >> operation;
			cin >> secondVar;
			Number<int> obj1(firstVar);
			Number<int> obj2(secondVar);

			switch (operation) {
			case '+': {
				Number<int> result(obj1 + obj2);
				cout << obj1.render() << " " << operation << " " << obj2.render() << " = " << result.render() << "\n";
				break;
			}
			case '-': {
				Number<int> result = obj1 - obj2;
				cout << obj1.render() << " " << operation << " " << obj2.render() << " = " << result.render() << "\n";
				break;
			}
			case '*': {
				Number<int> result = obj1 * obj2;
				cout << obj1.render() << " " << operation << " " << obj2.render() << " = " << result.render() << "\n";
				break;
			}
			case '/': {
				string ex;
				try {
					Number<int> result(obj1 / obj2);
					if (obj2.render() == 0) {
						ex = "Division by zero!\n";
						throw ex;
					}
					cout << obj1.render() << " " << operation << " " << obj2.render() << " = " << result.render() << "\n";
				}
				catch (string& ex) {
					cerr << ex;
				}
				break;
			}
			}
			break;
		}
		case 2: {
			double firstVar, secondVar;
			cout << "Start entering numeric expression (+,-,*,/)\n";
			cin >> firstVar;
			cin >> operation;
			cin >> secondVar;
			Number<double> obj1(firstVar);
			Number<double> obj2(secondVar);
			switch (operation) {
			case '+': {
				Number<double> result = obj1 + obj2;
				cout << obj1.render() << " " << operation << " " << obj2.render() << " = " << result.render() << "\n";
				break;
			}
			case '-': {
				Number<double> result = obj1 - obj2;
				cout << obj1.render() << " " << operation << " " << obj2.render() << " = " << result.render() << "\n";
				break;
			}
			case '*': {
				Number<double> result = obj1 * obj2;
				cout << obj1.render() << " " << operation << " " << obj2.render() << " = " << result.render() << "\n";
				break;
			}
			case '/': {
				string ex;
				try {
					Number<double> result(obj1 / obj2);
					if (obj2.render() == 0) {
						ex = "Division by zero!\n";
						throw ex;
					}
					cout << obj1.render() << " " << operation << " " << obj2.render() << " = " << result.render() << "\n";
				}
				catch (string& ex) {
					cerr << ex;
				}
				break;
			}
			}
			break;
		}
		case 3: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
	return 0;
}

