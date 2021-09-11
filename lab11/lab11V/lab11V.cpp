#include <iostream>
#include<math.h>
using namespace std;

class Complex {
private:
	int real;
	int imag;
public:
	Complex() : real(NULL), imag(NULL) {}
	void setReal(int real1);
	void setImag(int imag1);
	int getReal();
	int getImag();
	int getSumTwoComplex(int real);
};


int main()
{
	Complex firstComplex,secondComplex;
	int real1;
	cout << "Enter real value of first complex number: ";
	cin >> real1;
	firstComplex.setReal(real1);
	int imag1;
	cout << "Enter imaginary value of first complex number: ";
	cin >> imag1;
	firstComplex.setImag(imag1);
	cout << "z = ";
	char signEquation = (firstComplex.getImag()) < 0 ? '-' :  '+';
	cout << firstComplex.getReal()<<" "<< signEquation <<" "<< abs(firstComplex.getImag()) << "i;\n";



	return 0;
}

void Complex::setReal(int real){
	this->real = real;
}

void Complex::setImag(int imag){
	this->imag = imag;
}

int Complex::getReal(){
	return real;
}

int Complex::getImag(){
	return imag;
}
