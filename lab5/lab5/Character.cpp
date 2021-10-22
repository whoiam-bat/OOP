#include "Character.h"

void Character::printLowerCase() {
	for (int i = 65; i <= 90; i++) {
		cout << char(tolower(i)) << " ";
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

void Character::printPunctuationMarks() {
	for (int i = 0; i <= 255; i++) {
		if (ispunct(static_cast<char>(i))) {
			cout << static_cast<char> (i) << " ";
		}
		else {
			continue;
		}
	}
}

void Character::menu() {
	cout << "1. to get english letters in lower case;\n";
	cout << "2. to get all english letters;\n";
	cout << "3. to get letters and digits;\n";
	cout << "4. to get all charachters in this PC;\n";
	cout << "5. to get punctuation signs;\n";
	cout << "6. to clear console;\n";
	cout << "7. exit from the cycle.\n";
}
