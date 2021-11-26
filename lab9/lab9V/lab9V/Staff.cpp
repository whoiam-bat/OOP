#include "Staff.h"

Staff::Staff() {
	string names[20] = { "Oliver","Jack", "Harry", "Jacob", "Charlie",
				 "Thomas", "Oscar", "William", "James", "George",
				 "Amelia", "Olivia", "Emily", "Ava", "Jessica",
				 "Isabella", "Sophie", "Mia", "Ruby", "Lily" };
	for (int i = 0; i < 5; i++) {
		auto name = Person(names[rand() % 20]);
		auto age = Person(rand() % (45 - 15 + 1) + 15);
		this->personByName.insert
		(pair<Person, Person>(name, age));
		this->personByAge.insert
		(pair<Person, Person> (age, name));
	}
}

void Staff::insertMap() {

	string name;
	cout << "\nEnter name:\n";
	cin >> name;

	int age;
	cout << "\nEnter age:\n";
	cin >> age;
	auto pr = pair<Person, Person>(Person(name), Person(age));
	this->personByName.insert(pr);
	this->personByAge.insert(pr);
}

void Staff::printMap() {
	cout << "\nFirst Map\n";
	for (const auto& it:personByName) {
		cout << it.first << "---" << it.second<<"\n";
	}
	cout << "\nSecond Map\n";
	for (const auto& it : personByAge) {
		cout << it.second << "---" << it.first << "\n";
	}
}

void Staff::printField() {
	int choice;
	cout << "\n\n1. to print name field;\n";
	cout << "2. to print number field.\n";

	cin >> choice;

	if (choice == 1) {
		for (const auto& it:personByName) {
			cout << it.first << "\n";
		}
	}
	else {
		for (const auto& it : personByName) {
			cout << it.second << "\n";
		}
	}

}

void Staff::eraseByName() {
	string eraseName;
	cout << "Enter name which you want to erase: ";
	cin >> eraseName;

	for (auto it = begin(personByName); it != end(personByName);) {
		if (eraseName == const_cast<Person&>(it->first).getName()) {
			it = personByName.erase(it);
		}
		else {
			it++;
		}
	}
}

void Staff::searchByName() {
	string searchName;
	cout << "Enter name which you want to find: ";
	cin >> searchName;

	for (auto it = begin(personByName); it != end(personByName); it++) {
		if (const_cast<Person&>(it->first).getName() == searchName) {
			cout << it->first<< "---" <<it->second<<"\n";
		}
	}

}

void Staff::searchByAge() {
	int searchAge;
	cout << "Enter age which you want to find: ";
	cin >> searchAge;

	for (auto it = begin(personByAge); it != end(personByAge); it++) {
		if (const_cast<Person&>(it->first).getAge() == searchAge) {
			cout << it->second << "---" << it->first << "\n";
		}
	}

}

void Staff::search() {
	int choice;
	cout << "1. to find by name;\n";
	cout << "2. to find by age.\n";

	cin >> choice;

	if (choice == 1) {
		searchByName();
	}
	else if(choice == 2){
		searchByAge();
	}
}

