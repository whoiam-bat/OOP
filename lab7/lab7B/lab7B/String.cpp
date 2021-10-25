#include "String.h"

string String::getString() {
	return str;
}
String::String(string str) {
	this->str = str;
}
int String::getSizeString() {
	return str.length();
}
void String::printSourceStringInFile(String str, string path) {
	ofstream fout;
	string tempStr = getString();
	try {
		fout.open(path);
		cout << "The source string was successfully written to the file!\n";
	}
	catch (const std::exception& ex) {
		cout << "Opening file error!\n";
	}
	fout << "Source string: ";
	fout << str;
	fout << "\n\n";
	fout.close();

}
void String::printFormattedStringInFile(String str, string path) {
	ofstream fout;
	string tempStr = getString();
	try {
		fout.open(path, ios::app);
		cout << "The formatted string was successfully written to the file!\n";
	}
	catch (const std::exception& ex) {
		cout << "Opening file error!\n";
	}
	const int size = getSizeString();

	fout << "Formated string: ";
	for (int i = 0; i < size; i++) {
		if (isupper(tempStr[i]) || isdigit(tempStr[i])) {
			continue;
		}
		else {
			fout << tempStr[i];
		}
	}
	fout << "\n";
	fout.close();
}
ostream& operator<<(ostream& out, String str) {
	out << str.str;
	return out;
}
void menu() {
	cout << "1. enter source string;\n";
	cout << "2. write source string in file;\n";
	cout << "3. write formatted string in file;\n";
	cout << "4. clear console;\n";
	cout << "5. call menu;\n";
	cout << "6. exit from loop.\n";
}
