#include "Matr.h"

int main()
{
	srand(time(NULL));
	int N, M;
	cout << "Enter count of rows: ";
	cin >> N;
	cout << "Enter count of columns: ";
	cin >> M;
	system("cls");
	Matr object(N, M);
	menu();
	while (true) {

		int choice;
		cin >> choice;
		
		switch (choice) {
		case 1: {
			object.printMatr();
			break;
		}
		case 2: {
			object.searchMinIndex();
			break;
		}
		case 3: {
		f1:
			int x, y;
			cout << "Enter x coordinate: ";
			cin >> x;
			cout << "\nEnter y coordinate: ";
			cin >> y;
			if (x > object.getColSize() || y > object.getRowSize()) {
				cout << "Error, x coordinate is larger than matrix size\nTry again\n";
				goto f1;
			}
			object.getElem(x, y);
			break;
		}
		case 4: {
			int element;
			cout << "Enter element you want to paste: ";
			cin >> element;
		f2:
			int x, y;
			cout << "Enter x coordinate: ";
			cin >> x;
			cout << "\nEnter y coordinate: ";
			cin >> y;
			if (x > object.getColSize() || y > object.getRowSize()) {
				cout << "Error, x coordinate is larger than matrix size\nTry again\n";
				goto f2;
			}
			object.pasteElem(x, y, element);
			break;
		}
		case 5: {

		f3:
			int x, y;
			cout << "Enter x coordinate: ";
			cin >> x;
			cout << "\nEnter y coordinate: ";
			cin >> y;
			if (x > object.getColSize() || y > object.getRowSize()) {
				cout << "Error, x coordinate is larger than matrix size\nTry again\n";
				goto f3;
			}
		f4:
			int N, M;
			cout << "Enter size of rows: ";
			cin >> N;
			cout << "Enter size of columns: ";
			cin >> M;
			if (N > object.getRowSize() || M > object.getColSize()) {
				cout << "Error, your size is larger than matrix size\n";
				goto f4;
			}

			object.getSubmatr(x, y, N, M);
			break;
		}
		case 6: {
			system("cls");
			menu();
			break;
		}
		case 7: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
	
	object.~Matr();
	return 0;
}
