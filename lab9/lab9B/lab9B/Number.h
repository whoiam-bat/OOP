#pragma once
#include<iostream>
#include<string>

using namespace std;

class Number {
private:
	string number;
public:
	
	Number(string number = "");
	string getNumberAt();
	friend ostream& operator << (ostream& out, Number number);
};

