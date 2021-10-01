#pragma once
#include <iostream>
#include<iomanip>
using namespace std;


class Dog {
private:
	int weight;
	int age;
public:
	void setWeight(const int& weight) {
		this->weight = weight;
	}
	void setAge(const int& age) {
		this->age = age;
	}
	int getWeight() {
		return weight;
	}
	int getAge() {
		return age;
	}
	void showDog() {
		cout << "Class Dog\n";
		cout << "Weight: " << weight << "\nAge: " << age << "\n";
	}
};