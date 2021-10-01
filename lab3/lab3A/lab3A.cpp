#include "Dog.h"
#include "Spaniel.h"


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
