#include"ListDetails.h"


void ListDetails::getHeader() {
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << "\n|Ведомость деталей";
	for (int i = 0; i < 81; i++) {
		cout << " ";
	}
	cout << "|\n";
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << "\n|Наименование";
	for (int i = 0; i < 15; i++) {
		cout << " ";
	}
	cout << "|Тип";
	for (int i = 0; i < 10; i++) {
		cout << " ";
	}
	cout << "|Количество";
	for (int i = 0; i < 10; i++) {
		cout << " ";
	}
	cout << "|Вес 1 детали (г)";
	for (int i = 0; i < 19; i++) {
		cout << " ";
	}
	cout << "|\n";
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << "\n";
}
void ListDetails::getFooter() {
	cout << "\n|Примечание: принято такое кодирование типов: О - оригинальная, П - покупная, З - заимствованная";
	for (int i = 0; i < 3; i++) {
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
	cout << "7. exit from loop.\n";
}
ListDetails::ListDetails() {
	this->name = details[rand() % 20];
	this->type = dType[rand() % 3];
	this->amount = rand() % ((30 - 1 + 1) + 1);
	this->weight = rand() % ((1000 - 1 + 1) + 1);
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


void ListDetails::printList(ListDetails* detail, const int& size) {
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
