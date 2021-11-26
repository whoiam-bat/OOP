#include "Staff.h"
#include "Person.h"

void menu() {
	cout << "1. Insert pair;\n";
	cout << "2. Print map;\n";
	cout << "3. Print field of map;\n";
	cout << "4. Erase pair;\n";
	cout << "5. Search pair;\n";
	cout << "6. Clear console;\n";
	cout << "7. Exit from the loop.\n";
}



int main() {
	Staff person;

	menu();
	cout << "\n\nMake your choose:\n";

	while (true) {
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			person.insertMap();
			break;
		}
		case 2: {
			person.printMap();
			break;
		}
		case 3: {
			person.printField();
			break;
		}
		case 4: {
			person.eraseByName();
			break;
		}
		case 5: {
			person.search();
			break;
		}
		case 6: {
			system("cls");
			menu();
			break;
		}
		case 7: {
			system("cls");
			cout << "Thanks for comming!\n\n";
			exit(0);
			break;
		}
		}
	}
	return 0;
}