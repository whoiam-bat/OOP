#pragma once

#include<iostream> 
#include<cstring>
#include<string>
#include<fstream>

using namespace std;

class String {
private:
	string str;
public:
	string getString();
	String(string str = " ");
	int getSizeString();
	friend ostream& operator << (ostream& out, String str);
	void printSourceStringInFile(String str, string path);
	void printFormattedStringInFile(String str, string path);
};

void menu();