#include "Details.h"

int ListDetails::count = 0;

void ListDetails::getHeader() {
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
	cout << "|Type";
	for (int i = 0; i < 9; i++) {
		cout << " ";
	}
	cout << "|Quantity";
	for (int i = 0; i < 12; i++) {
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
void ListDetails::getFooter() {
	cout << "\n|Note: the following encoding types are accepted: O - original, P - purchased, B - borrowed";
	for (int i = 0; i < 8; i++) {
		cout << " ";
	}
	cout << "|\n";
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << "\n";
}
void ListDetails::menu() {
	cout << "1. to create list of details;\n";
	cout << "2. to compare two objects in the List of Details;\n";
	cout << "3. to assign operator;\n";
	cout << "4. to initialize varibles of ListDetails class;\n";
	cout << "5. write object in file;\n";
	cout << "6. write full list if file;\n";
	cout << "7. read full list from file;\n";
	cout << "8. read object from file;\n";
	cout << "9. exit from loop.\n";
}
ListDetails::ListDetails() {
	this->name = details[rand() % 20];
	this->type = dType[rand() % 3];
	this->amount = rand() % ((30 - 1 + 1) + 1);
	this->weight = rand() % ((1000 - 1 + 1) + 1);
}

int ListDetails::getCountElementsInFile() {
	return count;
}
void ListDetails::setName(const string& name) {
	this->name = name;
}
void ListDetails::setType(const char& type) {
	this->type = type;
}
void ListDetails::setAmount(const int& amount) {
	this->amount = amount;
}
void ListDetails::setWeight(const int& weight) {
	this->weight = weight;
}
string ListDetails::getName() {
	return name;
}
char ListDetails::getType() {
	return type;
}
int ListDetails::getAmount() {
	return amount;
}
int ListDetails::getWeight() {
	return weight;
}


ListDetails ListDetails::operator()(const string& name, const char& type, const int& amount, const int& weight) {
	this->name = name;
	this->type = type;
	this->amount = amount;
	this->weight = weight;
	return *this;
}
ListDetails ListDetails::operator=(const ListDetails& detail) {
	this->name = detail.name;
	this->type = detail.type;
	this->amount = detail.amount;
	this->weight = detail.weight;
	return *this;
}
string operator==(const ListDetails& detail1, const ListDetails& detail2) {
	if (detail1.name != detail2.name || detail1.type != detail2.type || detail1.amount != detail2.amount || detail1.weight != detail2.weight) {
		return "false";
	}
	return "true";
}


void ListDetails::saveObjectInFile(const string& path,  ListDetails* detail, int index) {
	count++;
	ofstream fout;
	fout.open(path, ios::app);
	fout << left << setw(27) << detail[index - 1].name
		<< left << setw(13) << detail[index - 1].type
		<< left << setw(20) << detail[index - 1].amount
		<< left << setw(35) << detail[index - 1].weight << "\n";
	cout << "\nCheck your file\n";
	fout.close();
}
void ListDetails::saveListInFile(const string& path, ListDetails* detail, const int& size) {
	count += size;
	ofstream fout;
	fout.open(path, ios::app);

	for (int i = 0; i < size; i++){
		fout << left << setw(27) << detail[i].name
			<< left << setw(13) << detail[i].type
			<< left << setw(20) << detail[i].amount
			<< left << setw(35) << detail[i].weight << "\n";
	}
	cout << "\nCheck your file\n";
	fout.close();
}
void ListDetails::readListFromFile(const string& path, ListDetails*& detail, int& size) {
	ifstream fin;
	try {
		fin.open(path);
	}
	catch (const std::exception& ex) {
		cerr << "\nError of opening file!\n";
	}
	ListDetails* temp = new ListDetails[count];
	for (int i = 0; i < count; i++) {
		fin >> temp[i].name >> temp[i].type >> temp[i].amount >> temp[i].weight;
	}
	fin.close();
	if (count == 0) {
		cout << "File has not any objects\nWrite in file some objects!\n";
		return;
	}

	else {
		size = count;
		delete[] detail;
		detail = new ListDetails[size];
		for (int i = 0; i < size; i++) {
			detail[i] = temp[i];
		}

		delete[] temp;
	}
}
void ListDetails::readObjectFromFile(string& path) {
	int index;
	cout << "\nWhich object you want to read from file: ";
	cin >> index;
	ListDetails temp;
	ifstream iof;
	try {
		iof.open(path, ios::in);// | ios::binary);
	}
	catch (const std::exception& ex) {
		cerr << "Error of opening file!\n";
	}



	cout << sizeof(ListDetails) << "\n";
	iof.seekg((sizeof(temp) * (index - 1)), ios::beg);

	cout << iof.tellg() << "\n";

	iof >> temp.name >> temp.type >> temp.amount >> temp.weight;


	getHeader();
	printList(&temp);
	getFooter();
	iof.close();
}

void ListDetails::printList(ListDetails* detail, int size) {
	for (int i = 0; i < size; i++) {
		cout << left << "|" << setw(27) << detail[i].name
			<< left << "|" << setw(13) << detail[i].type
			<< left << "|" << setw(20) << detail[i].amount
			<< left << "|" << setw(35) << detail[i].weight << "|\n";
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
}
