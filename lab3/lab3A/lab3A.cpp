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

int main()
{
	Spaniel dog;
	while (true) {
		int choice;
		cout << "1.continue;\n2.exit\n";
		cin >> choice;
		switch (choice) {
		case 1: {
			dog.createDog();
			system("cls");
			dog.showSpaniel();
			dog.checkWeight();
			break;
		}
		case 2: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
	return 0;
}
