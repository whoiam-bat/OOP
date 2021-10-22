#pragma once
#include <iostream>
#include<iomanip>
using namespace std;

class Character {
public:
	void printLowerCase();
	void printLatters();
	void printLattersDigits();
	void printAllSystemCharacters();
	void printPunctuationMarks();
	static void menu();
};