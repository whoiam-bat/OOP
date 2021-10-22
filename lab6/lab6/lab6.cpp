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
			Product::addElement(detail,size);
			break;
		}
		case 3: {
			int index;
			cout << "Enter index of element which you want to change: ";
			cin >> index;
			cin.ignore();

			Product::changeElement(detail[index - 1], size);
			break;
		}
		case 4: {
			sort(detail, size);
			break;
		}
		case 5: {
			exit(0);
			break;
		}
		}
	}
    return 0;
}
