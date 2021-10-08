#include "Library.h"

inline void getHeader() {
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << "\n|Library";
	for (int i = 0; i < 91; i++) {
		cout << " ";
	}
	cout << "|\n";
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << "\n|Book name";
	for (int i = 0; i < 17; i++) {
		cout << " ";
	}
	cout << "|Author";
	for (int i = 0; i < 16; i++) {
		cout << " ";
	}
	cout << "|Amount pages";
	for (int i = 0; i < 4; i++) {
		cout << " ";
	}
	cout << "|Catalog number";
	for (int i = 0; i < 4; i++) {
		cout << " ";
	}
	cout << "|Presence";
	for (int i = 0; i < 4; i++) {
		cout << " ";
	}
	cout << "|\n";
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << "\n";
}
inline void menu() {
	cout << "1. Create library by keyboard;\n";
	cout << "2. Create random library;\n";
	cout << "3. Check is this book exist in library;\n";
	cout << "4. Check is book present or absent in library;\n";
	cout << "5. Situation with changing flag existing.\n";
	cout << "6. Print library;\n";
	cout << "7. Call menu;\n";
	cout << "8. Exit from loop.\n";
}
void Book::printBook() {
	cout << "|" << left << setw(26) << getBookName();
	cout << "|" << left << setw(22) << getAuthor();
	cout << "|" << left << setw(16) << getAmountPages();
}
void Library::printLibrary() {
	cout << "|" << left << setw(18) << getCatalogNumber();
	cout << "|" << left << setw(12) << getIsPresent() << "|";
}
void createLibraryByKeyboard(Library* library, int sizeLibrary) {
	for (int i = 0; i < sizeLibrary; i++) {
		string bookName;
		string author;
		int amountPages;
		int catalogNumber;
		string isPresent;

		cout << "Enter book name: ";
		getline(cin, bookName);

		cout << "Enter author: ";
		getline(cin, author);

		cout << "Enter amount pages: ";
		cin >> amountPages;
		cin.ignore();

		cout << "Enter catalog number: ";
		cin >> catalogNumber;
		cin.ignore();

		cout << "Enter wether present: ";
		getline(cin, isPresent);

		library[i] = Library(bookName, author, amountPages, catalogNumber, isPresent);
	}
}
void createRandomLibrary(Library* library, int sizeLibrary) {
	string bookName[20] = { "The Pilgrim’s Progress", "Robinson Crusoe" , "Gulliver’s Travels",
						   "Clarissa", "Tom Jones", "Emma" ,"Frankenstein",
						   "Nightmare Abbey", "Sybil" ,"Jane Eyre",
							 "Wuthering Heights", "Vanity Fair" ,"David Copperfield" ,
							"Moby-Dick", "Alice’s Adventures in Wonderland" ," The Moonstone" ,
							"Little Women", "Middlemarch" ,"The Adventures of Huckleberry Finn","Three Men in a Boat" };
	string author[20] = { "John Bunyan", "Daniel Defoe", "Jonathan Swift","Samuel Richardson", "Henry Fielding", "Laurence Sterne",
						"Jane Austen", "Mary Shelley", "Thomas Love Peacock", "Edgar Allan Poe", "William Thackeray", "Charles Dickens",
						"Herman Melville", "Lewis Carroll", "Wilkie Collins", "George Eliot", "Anthony Trollope", "Mark Twain","Arthur Conan Doyle",
						"Oscar Wilde" };
	string isPresent[2] = { "present" , "absent" };

	for (int i = 0; i < sizeLibrary; i++) {
		library[i] = Library(
			bookName[rand() % 20],
			author[rand() % 20],
			rand() % (800 - 100 + 1) + 100,
			rand() % (9999 - 1000 + 1) + 1000,
			isPresent[rand() % 2]);
	}
}
void getLibrary(Library* library, int sizeLibrary) {
	for (int i = 0; i < sizeLibrary; i++) {
		library[i].printBook();
		library[i].printLibrary();
		cout << "\n";
		for (int i = 0; i < 100; i++) {
			cout << "-";
		}
		cout << "\n";
	}
}
string checkIsExcist(Library* library, int sizeLibrary, string book) {

	string check[2] = { "false", "true" };

	exist flag = FALSE;
	for (int i = 0; i < sizeLibrary; i++) {
		if (library[i].getBookName() == book) {
			flag = TRUE;
			break;
		}
	}
	return check[flag];
}
string  isPresentInLibrary(Library* library, int sizeLibrary, string book) {
	for (int i = 0; i < sizeLibrary; i++) {
		if (library[i].getBookName() == book) {
			return library[i].getIsPresent();
		}
	}
}
void situationInLibrary(Library* library, int sizeLibrary, string book) {
	for (int i = 0; i < sizeLibrary; i++) {
		if (library[i].getBookName() == book) {
			(library[i].getIsPresent() == "absent") ? library[i].setIsPresent("present") : library[i].setIsPresent("absent");
		}
	}
}
