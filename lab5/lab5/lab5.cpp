#include <iostream>
#include<iomanip>
using namespace std;

class Character {
public:
	void printLowerCase();
	void printLatters();
	void printLattersDigits();
	void printAllSystemCharacters();
	static void menu();
};

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

void Character::printLowerCase() {
	for (int i = 65; i <= 90; i++) {
		cout <<char(tolower(i))<<" ";
	}
}

void Character::printLatters() {
	for (int i = 65; i <= 90; i++) {
		cout << char(toupper(i)) << char(tolower(i)) << " ";
	}
}

void Character::printLattersDigits() {
	printLatters();
	cout << "\n";
	for (int i = 48; i <= 57; i++) {
		cout << char(i) << " ";
	}
}

void Character::printAllSystemCharacters() {
	for (int i = 0; i <= 255; i++) {
		cout << char(i) << " ";
	}
}

void Character::menu() {
	cout << "1. to get english letters in lower case;\n";
	cout << "2. to get all english letters;\n";
	cout << "3. to get letters and digits;\n";
	cout << "4. to get all charachters in this PC;\n";
	cout << "5. to clear console;\n";
	cout << "6. exit from the cycle.\n";
}
