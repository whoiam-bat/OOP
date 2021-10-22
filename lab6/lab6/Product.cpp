#include "Product.h"


Product::Product() {
	this->name = products[rand() % 15];
	this->id = rand() % ((9999 - 1000 + 1) + 1000);
	this->markSteel = stuff[rand() % 15];
	this->weight = rand() % ((1000 - 10 + 1) + 10);
}
void Product::setName(string name) {
	this->name = name;
}
void Product::setID(int id) {
	this->id = id;
}
void Product::setMark(string markSteel) {
	this->markSteel = markSteel;
}
void Product::setWeight(int weight) {
	this->weight = weight;
}
string Product::getName() {
	return name;
}
int Product::getID() {
	return id;
}
string Product::getMark() {
	return markSteel;
}
int Product::getWeight() {
	return weight;
}

void Product::addElement(Product*& detail, int& size) {
	string name, markSteel;
	int id;
	int weight;
	size++;
	cout << "Enter name detail: ";
	getline(cin, name);

	cout << "Enter ID detail: ";
	cin >> id;
	cin.ignore();

	cout << "Enter mark steel details: ";
	getline(cin, markSteel);

	cout << "Enter weight one detail: ";
	cin >> weight;
	cin.ignore();

	Product* newList = new Product[size];

	for (int i = 0; i < size - 1; i++) {
		newList[i] = detail[i];
	}
	newList[size - 1].setName(name);
	newList[size - 1].setID(id);
	newList[size - 1].setMark(markSteel);
	newList[size - 1].setWeight(weight);

	delete[] detail;
	detail = new Product[size];
	for (int i = 0; i < size; i++) {
		detail[i] = newList[i];
	}
	delete[] newList;
}
void Product::changeElement(Product& detail, const int& size) {
	string name, markSteel;
	int id;
	int weight;
	cout << "Enter new name detail: ";
	getline(cin, name);

	cout << "Enter new ID detail: ";
	cin >> id;
	cin.ignore();

	cout << "Enter new mark steel details: ";
	getline(cin, markSteel);

	cout << "Enter new weight one detail: ";
	cin >> weight;
	cin.ignore();

	detail.setName(name);
	detail.setID(id);
	detail.setMark(markSteel);
	detail.setWeight(weight);
}
ostream& operator<<(ostream& out, const Product& detail) {
	out << left << "|" << setw(27) << detail.name
		<< left << "|" << setw(13) << detail.id
		<< left << "|" << setw(20) << detail.markSteel
		<< left << "|" << setw(35) << detail.weight << "|\n";
	return out;
}
void print(Product*& detail, const int& size) {
	for (int i = 0; i < size; i++) {
		cout << detail[i];
		for (int i = 0; i < 100; i++) {
			cout << "-";
		}
		if (i == size - 1) {
			break;
		}
		else {
			cout << "\n";
		}
	}
	cout << "\n";
}

void sort(Product*& detail, int& size) {
	for (int i = size - 1; i > 0; i--) {
		for (int i = 0; i < size - 1; i++) {
			if (detail[i].getName() > detail[i + 1].getName()) {
				swap(detail[i], detail[i + 1]);
			}
		}
	}
}
void getHeader() {
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << "\n|List of details";
	for (int i = 0; i < 83; i++) {
		cout << " ";
	}
	cout << "|\n";
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << "\n|Name";
	for (int i = 0; i < 23; i++) {
		cout << " ";
	}
	cout << "|ID";
	for (int i = 0; i < 11; i++) {
		cout << " ";
	}
	cout << "|Mark of steel";
	for (int i = 0; i < 7; i++) {
		cout << " ";
	}
	cout << "|Weight of 1 part (g)";
	for (int i = 0; i < 15; i++) {
		cout << " ";
	}
	cout << "|\n";
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << "\n";
}
void menu() {
	cout << "1. to print list of details;\n";
	cout << "2. to add element;\n";
	cout << "3. to change element;\n";
	cout << "4. to sort.\n";
	cout << "5. exit from loop.\n";
}