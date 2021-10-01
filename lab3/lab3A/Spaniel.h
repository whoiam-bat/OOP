#pragma once
#include "Dog.h"
class Spaniel : public Dog {
private:
	string colour;
public:
	void setColour(const string& colour) {
		this->colour = colour;
	}
	void showSpaniel() {
		showDog();
		cout << "Class Spaniel\n";
		cout << "Colour: " << colour;
	}
	void createDog() {
		int weight, age;
		string colour;
		cout << "Enter weight: ";
		cin >> weight;
		setWeight(weight);
		cout << "Enter age: ";
		cin >> age;
		setAge(age);
		cout << "Enter colour: ";
		cin >> colour;
		setColour(colour);
	}
	void checkWeight() {
		if (getWeight() >= 10) {
			cout << "\nGAV\n\n";
		}
		else {
			cout << "\ngav\n\n";
		}
	}
};