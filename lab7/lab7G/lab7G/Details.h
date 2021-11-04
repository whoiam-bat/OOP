#pragma once
#include<iostream>
#include<time.h>
#include<fstream>
#include<iomanip>
#include <string>
#include<cstring>
#include <cstdio>
using namespace std;


class ListDetails {
private:
	string name;
	char type;
	int amount;
	int weight;
public:
	static int count;
	string details[20] = { "Bolt","Flange","Frame","Adapter","Nail","Nut","Dowel","Spool","Coupling","Knife",
							   "Screw","Bush","Seal","Nozzle","Hub","Puck","Grover","Pin","Pin","Clamp"
	};
	char dType[3] = { 'B','P','O' };
	ListDetails();
	int getCountElementsInFile();
	void setName(const string& name);
	void setType(const char& type);
	void setAmount(const int& amount);
	void setWeight(const int& weight);
	string getName();
	char getType();
	int getAmount();
	int getWeight();


	ListDetails operator ()(const string& name, const char& type, const int& amount, const int& weight);
	ListDetails operator =(const ListDetails& detail);
	friend string operator == (const ListDetails& detail1, const ListDetails& detail2);

	static void saveObjectInFile(const string& path, ListDetails* detail, const int index);
	static void saveListInFile(const string& path, ListDetails* detail, const int& size);
	static void readListFromFile(const string& path, ListDetails*& detail, int& size);
	static void readObjectFromFile(string& path);

	static void printList(ListDetails* detail, int size = 1);
	static void getHeader();
	static void getFooter();
	static void menu();
};
