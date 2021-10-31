#include "Number.h"

int main() {
	srand(time(NULL));
	string path = "Numbers.txt";
	Number* arNumbers;
	int size;
	menu();
	while (true) {
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "Enter size: ";
			cin >> size;
			arNumbers = new Number[size];
			break;
		}
		case 2: {
			Number::fillBinaryFile(path, arNumbers, size);
			break;
		}
		case 3: {
			Number::readFromBinaryFile(path, arNumbers, size);
			break;
		}
		case 4: {
			Number::editBinaryFile(path, arNumbers, size);
			break;
		}
		case 5: {
			system("cls");
			menu();
			break;
		}
		case 6: {
			exit(0);
			break;
		}
		}
	}
	return 0;
}

