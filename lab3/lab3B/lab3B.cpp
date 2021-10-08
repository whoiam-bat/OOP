#include"Library.h"

int main() {
	int sizeLibrary;
	
	cout << "Enter size of library: ";
	cin >> sizeLibrary;
	Library* library = new Library[sizeLibrary];
	cin.ignore();
	system("cls");
	menu();
	while (true) {
		int choice;
		cin >> choice;
		cin.ignore();
		switch (choice) {
		case 1: {
			createLibraryByKeyboard(library, sizeLibrary);
			getHeader();
			getLibrary(library, sizeLibrary);
			break;
		}
		case 2: {
			createRandomLibrary(library, sizeLibrary);
			getHeader();
			getLibrary(library, sizeLibrary);
			break;
		}
		case 3: {
			string book;
			cout << "Book name you want to look for: ";
			getline(cin, book);
			cout<<"Result: "<<checkIsExcist(library, sizeLibrary, book)<<"\n";
			break;
		}
		case 4: {
			string book;
			cout << "Book name you want to look for: ";
			getline(cin, book);
			cout << "Book is: ";
			isPresentInLibrary(library, sizeLibrary, book);
			cout<< "\n";
			break;
		}
		case 5: {
			string book;
			cout << "Book name you want to look for: ";
			getline(cin, book);
			string temp = isPresentInLibrary(library, sizeLibrary, book);

			if (temp == "present") {
				cout << "This book now is present;\n";
				situationInLibrary(library, sizeLibrary, book);
				cout << "It seems that someone take your book;\n";
			}
			else {
				cout << "It seems that someone take your book;\n";
				situationInLibrary(library, sizeLibrary, book);
				cout << "Your book has just been returned\n";
			}
			break;
		}
		case 6: {
			getHeader();
			getLibrary(library, sizeLibrary);
			break;
		}
		case 7: {
			system("cls");
			menu();
			break;
		}
		case 8: {
			exit(0);
			break;
		}
		}
	}
	delete[] library;
	return 0;
}

