#include "ListDetails.h"

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int sizeList;
	cout << "Enter size of list details: ";
	cin >> sizeList;
	ListDetails* detail = new ListDetails[sizeList];
	system("cls");
	ListDetails::menu();
	for (;;) {
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			ListDetails::getHeader();
			ListDetails::printList(detail, sizeList);
			ListDetails::getFooter();
			break;
		}
		case 2: {
			int indexFirstDetail;
			int indexSecondDetail;
		f1:
			cout << "Enter index of first detail: ";
			cin >> indexFirstDetail;
			if (indexFirstDetail - 1 > sizeList - 1) {
				cout << "Incorrect index is out of border array length " << sizeList << "\n";
				goto f1;
			}

		f2:
			cout << "Enter index of second detail: ";
			cin >> indexSecondDetail;
			if (indexFirstDetail - 1 > sizeList - 1) {
				cout << "Incorrect index is out of border array length " << sizeList << "\n";
				goto f2;
			}
			string result = detail[indexFirstDetail - 1] == detail[indexSecondDetail - 1];
			cout << "Result: " << result << "\n";
			break;
		}
		case 3: {
			int indexFirstDetail;
			int indexSecondDetail;
		f3:
			cout << "Enter index of first detail: ";
			cin >> indexFirstDetail;
			if (indexFirstDetail - 1 > sizeList - 1) {
				cout << "Incorrect index is out of border array length " << sizeList << "\n";
				goto f3;
			}
		f4:
			cout << "Enter index of second detail: ";
			cin >> indexSecondDetail;
			if (indexSecondDetail - 1 > sizeList - 1) {
				cout << "Incorrect index is out of border array length " << sizeList << "\n";
				goto f4;
			}
			detail[indexFirstDetail - 1] = detail[indexSecondDetail - 1];
			break;
		}
		case 4: {

			int indexFirstDetail;
			int indexSecondDetail;
		f5:
			cout << "Enter index of first detail: ";
			cin >> indexFirstDetail;
			if (indexFirstDetail - 1 > sizeList - 1) {
				cout << "Incorrect index is out of border array length " << sizeList << "\n";
				goto f5;
			}

		f6:	cout << "Enter index of second detail: ";
			cin >> indexSecondDetail;
			if (indexSecondDetail - 1 > sizeList - 1) {
				cout << "Incorrect index is out of border array length " << sizeList << "\n";
				goto f6;
			}
			string tempDetail;
			tempDetail = detail[indexFirstDetail - 1] + detail[indexSecondDetail - 1];
			cout << tempDetail << "\n";
			break;
		}
		case 5: {
		f7:
			int indexFirstDetail;
			cout << "Enter index to find out length name of detail: ";
			cin >> indexFirstDetail;
			int sizeNameDetail;
			if (indexFirstDetail - 1 > sizeList - 1) {
				cout << "Value is out of the border List details;\nTry again\n";
				goto f7;
			}
			sizeNameDetail = detail[indexFirstDetail - 1][indexFirstDetail - 1]; //(detail[indexFirstDetail - 1]).operator[](indexFirstDetail - 1);
			cout << detail[indexFirstDetail - 1].getName() << " has size: " << sizeNameDetail << "\n";
			break;
		}
		case 6: {
			string name;
			char type;
			int amount;
			int weight;
			int indexFirstDetail;
		f8:
			cout << "Enter index of first detail: ";
			cin >> indexFirstDetail;
			if (indexFirstDetail - 1 > sizeList - 1) {
				cout << "Incorrect index is out of border array length " << sizeList << "\n";
				goto f8;
			}
			cout << "\nEnter new name: ";
			cin >> name;
			cout << "Enter new type: ";
			cin >> type;
			cout << "Enter new  amount: ";
			cin >> amount;
			cout << "Enter new weight: ";
			cin >> weight;
			detail[indexFirstDetail - 1](name, type, amount, weight);
			break;
		}
		case 7: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
	delete[] detail;
	return 0;
}
