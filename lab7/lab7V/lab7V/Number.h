#pragma once
#include <iostream>
#include<fstream>
#include<ctime>
using namespace std;

class Number {
private:
	int number;
public:
	Number();
	static void fillBinaryFile(string path, Number* arNumbers, int size);
	static void editBinaryFile(string path, Number*& arNumbers, int size);
	static void readFromBinaryFile(string path, Number* arNumbers, int size);
};
void menu();