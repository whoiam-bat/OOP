#include "Details.h"

int main() {
	string path = "Object.txt";
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
		case 5: {
			int index;
			cout << "\nWhich object you want to save in file: ";
			cin >> index;
			cin.ignore();
			ListDetails::saveObjectInFile(path, detail, index);
			break;
		}
		case 6: {
			ListDetails::saveListInFile(path, detail, sizeList);
			break;
		}
		case 7: {
			ListDetails::readListFromFile(path, detail, sizeList);
			break;
		}
		case 8: {
			ListDetails::readObjectFromFile(path);
			break;
		}
		case 9: {
			system("cls");
			delete[] detail;
			ofstream fout;
			fout.open(path);
			fout.close();
			remove(path.c_str());
			exit(0);
			break;
		}
		}
	}
	delete[] detail;
	ofstream fout;
	fout.open(path);
	fout.close();
	remove(path.c_str());
	return 0;
}