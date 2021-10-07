#include "Figure.h"

int main() {
	int choice;
	cout << "1. Work by Children's objects;\n";
	cout << "2. Work by pointer on Parent.\n";
	while (true) {
		cin >> choice;
		switch (choice) {
		case 1: {
			AreaByChildrenObjects();
			break;
		}
		case 2: {
			AreaByParentPointer();
			break;
		}
		}
	}

	


	return 0;
}

