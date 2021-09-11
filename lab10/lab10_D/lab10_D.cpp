#include "Train.h"

int main()
{
	srand(time(NULL));
	Train obj;
	int N;
	cout << "Enter size of Trains List: ";
	cin >> N;
	Train* arr = new Train[N];
    int choice;
	menu();
	while (true) {
		cin >> choice;
		switch (choice) {
		case 1: {
			obj.fillTrains(arr, N);
			cout << "Trains List before streamlining: \n";
			obj.printTrains(arr, N);
			obj.sort(arr, N);
			cout << "Trains List after streamlining: \n";
			obj.printTrains(arr, N);
			menu();
			break;
		}
		case 2: {
			int searchNumber;
			cout << "Enter train's number you want to search: ";
			cin >> searchNumber;
			obj.search(arr, N, searchNumber);
			menu();
			break;
		}
		case 3: {
			obj.sortingByDestination(arr, N);
			obj.printTrains(arr, N);
			menu();
			break;
		}
		case 4: {
			system("cls");
			menu();
			break;
		}
		case 5: {
			exit(0);
			break;
		}
		}
	}

	delete[] arr;
	return 0;
}
