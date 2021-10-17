#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

class Product {
private:
    string name;
    int id;
    string markSteel;
    int weight;
public:
    string products[15] = { "Roofing", "Beam", "Reinforcement", "Bracket",
    "Roller", "Pipe", "Machine", "Crane", "Drill", "Clip", "Scissors", "Radiator", "Cutlery", "Saucepans", "Stairways" };
    string stuff[15] = { "Carbon", "Alloy", "Tungsten", "Nickel", "Manganese", "Vanadium", "Chromium",
        "Silicon","Molybdenum","Cobalt","Aluminum","Tool","Stainless","Tungsten","Sulfur"};
    Product();
    void setName(string name);
    void setID(int id);
    void setMark(string markSteel);
    void setWeight(int weight);

    string getName();
    int getID();
    string getMark();
    int getWeight();
	friend ostream& operator <<(ostream& out, const Product& detail);

};


void addElement(Product*& detail, int& size);
void change(Product& detail, string name, int id, string markSteel, int weight,int& size);
void print(Product*& detail, const int& size);
void sort(Product*& detail, int& size);

void getHeader();
void getFooter();
void menu();





int main()
{
	int size;
	cout << "Enter size list: ";
	cin >> size;
	Product* detail = new Product[size];
	cin.ignore();
	menu();

	while (true) {
		int choice;
		cin >> choice;
		cin.ignore();
		switch (choice) {
		case 1: {
			print(detail, size);
			break;
		}
		case 2: {
			addElement(detail, size);
			break;
		}
		case 3: {
			sort(detail, size);
			break;
		}
		}
	}



    return 0;
}

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

ostream& operator<<(ostream& out, const Product& detail) {
	out << left << "|" << setw(27) << detail.name
		<< left << "|" << setw(13) << detail.id
		<< left << "|" << setw(20) << detail.markSteel
		<< left << "|" << setw(35) << detail.weight << "|\n";
	return out;
}
void change(Product& detail, string name, int id, string markSteel, int weight, int& size) {
	size++;
    detail.setName(name);
    detail.setID(id);
    detail.setMark(markSteel);
    detail.setWeight(weight);
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
}
void addElement(Product*& detail, int & size) {
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
	getline(cin,markSteel);

	cout << "Enter weight one detail: ";
	cin >> weight;
	cin.ignore();

	Product* newList = new Product[size];

	for (int i = 0; i < size - 1; i++) {
		newList[i] = detail[i];
	}
	change(newList[size - 1], name, id, markSteel, weight, size);

	delete[] detail;

	detail = new Product[size];

	for (int i = 0; i < size; i++) {
		detail[i] = newList[i];
	}

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
void getFooter() {
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
void menu() {
	cout << "1. to print list of details;\n";
	cout << "2. to add element;\n";
	cout << "3. to sort.\n";
	cout << "4. exit from loop.\n";
}