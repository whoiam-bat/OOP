#pragma once
#include<iostream>
#include<time.h>
#include<iomanip>
#include <string>
#include<cstring>
using namespace std;


class ListDetails {
private:
	string name;
	char type;
	int amount;
	int weight;
public:
	string details[20] = { "Болт","Фланец","Станина","Переходник","Гвоздь","Гайка","Дюбель","Золотник","Муфта","Нож",
						   "Винт","Втулка","Сальник","Сопло","Ступица","Шайба","Гровер","Штифт","Шпилька","Хомут",
	};
	char dType[3] = { 'З','П','О' };
	ListDetails();

	void setName(const string& name);
	void setType(const char& type);
	void setAmount(const int& amount);
	void setWeight(const int& weight);
	string getName();
	char getType();
	int getAmount();
	int getWeight();

	int operator [](int index);
	ListDetails operator ()(const string& name, const char& type, const int& amount, const int& weight);
	ListDetails operator =(const ListDetails& detail);
	friend string operator == (const ListDetails& detail1, const ListDetails& detail2);
	friend string operator +(const ListDetails& detail1, const ListDetails& detail2);
	friend ostream& operator << (ostream& out, const ListDetails& detail);

	static void printList(ListDetails* detail, const int& size);
	static void getHeader();
	static void getFooter();
	static void menu();
};
