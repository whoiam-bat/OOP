#pragma once
#include<iostream>
#include<map>
#include<iomanip>
#include<ctime>
#include<string>

using namespace std;

class Person {
private:
	string name;
	int age;

public:

	Person();
	Person(string name);
	Person(int age);

	void setName(string name);
	void setAge(int age);

	const string& getName();
	const int& getAge();

	bool operator()(const Person& man1, const Person& man2)const;
	friend bool operator < (const Person& man1, const Person& man2);

	friend ostream& operator <<(ostream& out, Person man);
};

