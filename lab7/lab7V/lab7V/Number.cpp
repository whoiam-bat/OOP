#include "Number.h"

Number::Number() {
	this->number = rand() % (41 + 20);
}
void Number::fillBinaryFile(string path, Number* arNumbers, int size) {
	ofstream fout;
	fout.open(path, ios::binary);
	for (int i = 0; i < size; i++) {
		fout.write((char*)&arNumbers[i], sizeof(int));
	}
	cout << "File writen successfuly!\n";
	fout.close();
}
void Number::readFromBinaryFile(string path, Number* arNumbers, int size) {
	ifstream fin;
	try {
		fin.open(path, ios::binary);
	}
	catch (const std::exception&) {
		cerr << "Error of opening file!\n";
	}
	fin.read((char*)arNumbers, sizeof(arNumbers));
	for (int i = 0; i < size; i++) {
		cout << arNumbers[i].number << " ";
	}
	cout << "\n";
	fin.close();
}
void Number::editBinaryFile(string path, Number*& arNumbers, int size) {
	fstream iof;
	try {
		iof.open(path, ios::binary | ios::in | ios::out);
	}
	catch (const std::exception&) {
		cerr << "Error of opening file!\n";
	}

	int temp;
	const int numberTemp = 88;
	const int numberTemp2 = 77;

	iof.seekp(4 * sizeof(int), ios::beg);
	iof.read((char*)&temp, sizeof(temp));

	if (temp % 2 != 0) {
		for (int i = 5; i < size; i++) {
			arNumbers[i].number = numberTemp;
		}
		iof.write((char*)arNumbers, sizeof(arNumbers));
	}
	else {
		for (int i = 0; i < 4; i++) {
			arNumbers[i].number = numberTemp2;
		}
		iof.write((char*)arNumbers, sizeof(arNumbers));
	}
	cout << "\n";
	iof.close();
}

void menu() {
	cout << "1. create array;\n";
	cout << "2. fill binary file;\n";
	cout << "3. read binary file;\n";
	cout << "4. edit array;\n";
	cout << "5. clear console;\n";
	cout << "6. exit from loop.\n";
}
