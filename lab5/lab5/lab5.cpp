#include "Character.h"

int main(void) {
	Character temp;
	Character::menu();
	while (true) {
		int choice;
		cin >> choice;
		cin.ignore();
		switch (choice) {
		case 1: {
			temp.printLowerCase();
			cout << "\n\n";
			break;
		}
		case 2: {
			temp.printLatters();
			cout << "\n\n";

			break;
		}
		case 3: {
			temp.printLattersDigits();
			cout << "\n\n";
			break;
		}
		case 4: {
			temp.printAllSystemCharacters();
			cout << "\n\n";
			break;
		}
		case 5: {
			system("cls");
			Character::menu();
			break;
		}
		case 6: {
			exit(0);
			break;
		}
		}
	}
}

