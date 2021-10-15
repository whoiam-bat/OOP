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
	string details[20] = { "Bolt","Flange","Frame","Adapter","Nail","Nut","Dowel","Spool","Coupling","Knife",
						   "Screw","Bush","Seal","Nozzle","The Hub","Puck","Grover","Pin","Pin","Clamp"
	};
	char dType[3] = { 'B','P','O' };
	ListDetails();
	ListDetails(string name, char type, int amount, int weight);
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

	static void addElement(ListDetails*& detail, int& sizeList);
	static void eraseElement(ListDetails*& detail, int& sizeList);
	static void sorting(ListDetails* detail, const int& sizeList);

	static void printList(ListDetails* detail, const int& size);

	static void getHeader();
	static void getFooter();
	static void menu();
};
