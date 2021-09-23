#pragma once
#include <iostream>
#include<math.h>
using namespace std;

class Complex {
private:
	int real;
	int imag;
public:
	Complex() : real(NULL), imag(NULL) {}
	void setFirsComplex();
	void getSumTwoComplex(int secondReal, int secondImage);
};

