#include "Number.h"

int main() {
	srand(time(NULL));
	string path = "Numbers.txt";
	int size;
	cout << "Enter size: ";
	cin >> size;
	Number* arNumbers = new Number[size];
	int size;
	menu();
	while (true) {
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			Number::fillBinaryFile(path, arNumbers, size);
			break;
		}
		case 2: {
			Number::readFromBinaryFile(path, arNumbers, size);
			break;
		}
		case 3: {
			Number::editBinaryFile(path, arNumbers, size);
			break;
		}
		case 4: {
			system("cls");
			menu();
			break;
		}
		case 5: {
			exit(0);
			break;
		}
		}
	}
	ofstream fout(path);
	fout.close();
	return 0;
}

