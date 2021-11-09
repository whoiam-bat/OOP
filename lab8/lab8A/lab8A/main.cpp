#include "TemplateArray.h"

template<class T1>
void getLogic(TemplateArray<T1> test) {
	menuForLogic();
	int choice;
	int index;
	while (true) {
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "Enter an array:\n";
			for (int i = 0; i < index; i++) {
				test.initArrToIndex(i);
			}
			break;
		}
		case 2: {
			test.findOutSum();
			cout << "Sum: " << test.getSumOfArray() << "\n";
			break;
		}
		case 3: {
			test.findOutIntermediate();
			cout << "Itermediate: " << test.getIntermediate() << "\n";
			break;
		}
		case 4: {
			test.printArrayToIndex(index);
			break;
		}
		case 5: {
			test.searchMaxValue();
			break;
		}
		case 6: {
			cout << "Enter index: ";
			cin >> index;
			test.setIndex(index);
			break;
		}
		case 7: {
			system("cls");
			break;
		}
		case 8: {
			exit(0);
			break;
		}
		}
	}
}

int main() {
	srand(time(NULL));
	menu();
	int choice;
	cout << "Choce type of array:\n";

	cin >> choice;
	switch (choice) {
	case 1: {
		TemplateArray<int> test;
		getLogic(test);
		break;
	}
	case 2: {
		TemplateArray<float> test;
		getLogic(test);
		break;
	}
	}
	return 0;
}