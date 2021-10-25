#include "String.h"

int main() {
	string path = "String.txt";
	String str;
	menu();
	while (true) {
		int choice;
		cin >> choice;
		cin.ignore();
		switch (choice) {
		case 1: {
			string s;
			cout << "Enter source string:\n";
			getline(cin, s);
			str = String(s);
			break;
		}
		case 2: {
			str.printSourceStringInFile(str, path);
			break;
		}
		case 3: {
			str.printFormattedStringInFile(str, path);
			break;
		}
		case (4, 5): {
			system("cls");
			menu();
			break;
		}
		case 6: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
	return 0;
}