#include "Person.h"

Person::Person() {
	this->name = "";
	this->age = 0;
}

Person::Person(string name) {
	this->name = name;
	this->age = NULL;
}
Person::Person(int age) {
	this->name = "";
	this->age = age;
}

void Person::setName(string name) {
	this->name = name;
}
void Person::setAge(int age) {
	this->age = age;
}

const string& Person::getName() {
	return this->name;
}
const int& Person::getAge() {
	return this->age;
}

bool Person:: operator()(const Person& man1, const Person& man2) const {
	return man1.age < man2.age;
}
bool operator<(const Person& man1, const Person& man2) {
	return man1.name < man2.name;
}
ostream& operator<<(ostream& out, Person man) {
	if (man.getAge() == 0) {
		out << man.getName();
	}
	if(man.getName() == "") {
		out << man.getAge();
	}
	return out;
}