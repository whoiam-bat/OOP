#include "Set.h"

int main() {
	while (true) {
		int choice;
		menu();
		cin >> choice;
		switch (choice) {
		case 1: {
			Set setObj;
			break;
		}
		case 2: {
			int sizeSet;
			int leftBorder;
			int rightBorder;

			cout << "Enter size of set: ";
			cin >> sizeSet;
			cout << "Enter left border: ";
			cin >> leftBorder;
			cout << "Enter right border: ";
			cin >> rightBorder;
			Set setObj1(sizeSet, leftBorder, rightBorder);
			break;
		}
		case 3: {
			int maxVal;
			int sizeSet;
			int leftBorder;
			int rightBorder;

			cout << "Enter size of set: ";
			cin >> sizeSet;
			cout << "Enter left border: ";
			cin >> leftBorder;
			cout << "Enter right border: ";
			cin >> rightBorder;
			system("cls");
			Set setObj2(sizeSet, leftBorder, rightBorder);
			Set setObj3(setObj2);
			break;
		}
		case 4: {
			int sizeSet;
			int leftBorder;
			int rightBorder;

			cout << "Enter size of set: ";
			cin >> sizeSet;
			cout << "Enter left border: ";
			cin >> leftBorder;
			cout << "Enter right border: ";
			cin >> rightBorder;
			system("cls");
			Set setObj1(sizeSet, leftBorder, rightBorder);
			cout << "\nmax: " << Set::findMaxValue(setObj1) << "\n";
			break;
		}
		case 5: {
			int sizeSetF;
			int leftBorderF;
			int rightBorderF;

			cout << "Firs set\n";
			cout << "Enter size of set: ";
			cin >> sizeSetF;
			cout << "Enter left border: ";
			cin >> leftBorderF;
			cout << "Enter right border: ";
			cin >> rightBorderF;

			int sizeSetS;
			int leftBorderS;
			int rightBorderS;
			cout << "Second set\n";
			cout << "Enter size of set: ";
			cin >> sizeSetS;
			cout << "Enter left border: ";
			cin >> leftBorderS;
			cout << "Enter right border: ";
			cin >> rightBorderS;
			system("cls");

			Set setObj1(sizeSetF, leftBorderF, rightBorderF);
			Set setObj2(sizeSetS, leftBorderS, rightBorderS);

			Set::Union(setObj1, setObj2);
			Set::Intersection(setObj1, setObj2);
			Set::Difference(setObj1, setObj2);
			Set::SymmetricDifference(setObj1, setObj2);
			break;
		}
		case 6: {
			system("cls");
			menu();
			break;
		}
		case 7: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
	return 0;
}
