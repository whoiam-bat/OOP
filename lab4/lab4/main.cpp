#include "ListDetails.h"

int DataBase::sizeDB = 7;

int main() {
	srand(time(NULL));

	DataBase* temp = new DataBase();
	const int sizeList = temp->getSizeDB();
	DataBase* detail = new DataBase[sizeList];
	system("cls");
	temp->menu();

	for (;;) {
		int choice;
		cin >> choice;
		cin.ignore();
		switch (choice) {
		case 1: {
			temp->getHeader();
			temp->printList(*temp);
			temp->getFooter();
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
		case 6: {
			temp->addElement();
			cout << "Element has been added.\n";
			break;
		}
		case 7: {
			temp->eraseElement();
			cout << "Element has been erased.\n";
			break;
		}
		case 8: {
			temp->sorting(*temp);
			cout << "List has been sorted.\n";
			break;
		}
		case 9: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
	delete[] detail;
	return 0;
}
