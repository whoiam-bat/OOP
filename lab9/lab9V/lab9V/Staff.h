#pragma once
#include "Person.h"

class Staff {
private:
	map<Person, Person> personByName;
	map<Person, Person, Person> personByAge;

	//Private functions
	void searchByName();
	void searchByAge();

public:
	Staff();

	void insertMap();
	void printMap();
	void printField();
	void eraseByName();
	void search();
};
