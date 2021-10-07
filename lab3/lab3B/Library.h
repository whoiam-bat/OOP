#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

enum exist {
	FALSE, TRUE
};
inline void getHeader();
inline void menu();

class Book {
private:
	string bookName;
	string author;
	int amountPages;
public:
	Book(string bookName = "", string author = "", int amountPages = 0) :
		bookName(bookName), author(author),
		amountPages(amountPages) {};

	inline string getBookName() {
		return bookName;
	}
	inline string getAuthor() {
		return author;
	}
	inline int getAmountPages() {
		return amountPages;
	}

	void printBook();

};

class Library : public Book {
private:
	int catalogNumber;
	string isPresent;
public:

	Library(string bookName = "", string author = "",
		int amountPages = 0, int catalogNumber = 0,
		string isPresent = "") :
		Book(bookName, author, amountPages),
		catalogNumber(catalogNumber), isPresent(isPresent) {};
	int getCatalogNumber() {
		return catalogNumber;
	}
	string getIsPresent() {
		return isPresent;
	}
	void setIsPresent(string isPresent) {
		this->isPresent = isPresent;
	}
	void printLibrary();
	friend void createLibraryByKeyboard(Library* library, int sizeLibrary);
	friend void createRandomLibrary(Library* library, int sizeLibrary);
	friend void getLibrary(Library* library, int sizeLibrary);
	friend string checkIsExcist(Library* library, int sizeLibrary, string book);
	friend string isPresentInLibrary(Library* library, int sizeLibrary, string book);
	friend void situationInLibrary(Library* library, int sizeLibrary, string book);
};