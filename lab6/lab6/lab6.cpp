#include "Product.h"


int main()
{
	srand(time(NULL));
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
			getHeader();
			print(detail, size);
			break;
		}
		case 2: {
			addElement(detail,size);
			break;
		}
		case 3: {
			sort(detail, size);
			break;
		}
		case 4: {
			exit(0);
			break;
		}
		}
	}
    return 0;
}
