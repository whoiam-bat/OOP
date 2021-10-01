#include<iostream>
using namespace std;

class Book {
private:
	string bookName;
	string author;
	int amountPages;
public:
	void setBookName(string bookName) {
		this->bookName = bookName;
	}
	void setAuthor(string author) {
		this->author = author;
	}
	void steAmountPages(int amountPages) {
		this->amountPages = amountPages;
	}

	string getBookName() {
		return bookName;
	}
	string getAuthor() {
		return author;
	}
	int getAmountPages() {
		return amountPages;
	}

	Book(string bookName, string author, int amountPages) : bookName(bookName), author(author), amountPages(amountPages) {};

};