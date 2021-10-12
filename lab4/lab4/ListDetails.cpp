#include"ListDetails.h"


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
	cout << "4. to concatinate two objects;\n";
	cout << "5. to find out length of name detail;\n";
	cout << "6. to initialize varibles of ListDetails class;\n";
	cout << "7. to add element;\n";
	cout << "8. to remove element;\n";
	cout << "9. to sort.\n";
	cout << "10. exit from loop.\n";
}
ListDetails::ListDetails() {
	this->name = details[rand() % 20];
	this->type = dType[rand() % 3];
	this->amount = rand() % ((30 - 1 + 1) + 1);
	this->weight = rand() % ((1000 - 1 + 1) + 1);
}
ListDetails::ListDetails(string name, char type, int amount, int weight) {
	this->name = name;
	this->type = type;
	this->amount = amount;
	this->weight = weight;
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

int ListDetails::operator[](int index) {
	return name.length();
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
string operator+(const ListDetails& detail1, const ListDetails& detail2) {
	string detailStr;
	detailStr = (detail1.name + detail2.name);
	detailStr += " ";
	detailStr += (detail1.type);
	detailStr += (detail2.type);
	detailStr += " ";
	detailStr += to_string(detail1.amount + detail2.amount);
	detailStr += " ";
	detailStr += to_string(detail1.weight + detail2.weight);
	return detailStr;
}
ostream& operator << (ostream& out, const ListDetails& detail) {
	out << left << "|" << setw(27) << detail.name
		<< left << "|" << setw(13) << detail.type
		<< left << "|" << setw(20) << detail.amount
		<< left << "|" << setw(35) << detail.weight << "|\n";
	return out;
}

void ListDetails::addElement(ListDetails*& detail, int& sizeList) {
	string name;
	char type;
	int amount, weight;
	sizeList += 1;

	cout << "Enter name detail: ";
	getline(cin, name);
	cout << "Enter type detail: ";
	cin >> type;

	cout << "Enter amount details: ";
	cin >> amount;
	cin.ignore();

	cout << "Enter weight one detail: ";
	cin >> weight;
	cin.ignore();

	ListDetails* newList = new ListDetails[sizeList];

	for (int i = 0; i < sizeList - 1; i++) {
		newList[i] = detail[i];
	}
	newList[sizeList - 1] = ListDetails(name, type, amount, weight);

	delete[] detail;

	detail = new ListDetails[sizeList];

	for (int i = 0; i < sizeList; i++) {
		detail[i] = newList[i];
	}

}

void ListDetails::eraseElement(ListDetails*& detail, int& sizeList) {
	sizeList -= 1;
	ListDetails* newList = new ListDetails[sizeList];
	for (int i = 0; i < sizeList; i++) {
		newList[i] = detail[i];
	}
	delete[] detail;

	detail = new ListDetails[sizeList];

	for (int i = 0; i < sizeList; i++) {
		detail[i] = newList[i];
	}
	delete[] newList;
}

void ListDetails::sorting(ListDetails* detail, const int& sizeList) {
	for (int i = sizeList - 1; i > 1; i--) {
		for (int j = 0; j < i; j++) {
			if (detail[j].name > detail[j + 1].name) {
				swap(detail[j], detail[j + 1]);
			}
		}
	}
}

void ListDetails::printList(ListDetails* detail,const int& size) {
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
}
