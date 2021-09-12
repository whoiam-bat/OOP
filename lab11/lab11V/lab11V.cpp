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
	void getSumTwoComplex(int secondReal,int secondImage);
};


int main()
{
	Complex complex;
	int secondReal, secondImag;
    complex.setFirsComplex();
	cout << "Enter real part of Second complex number: ";
	cin >> secondReal;
	cout << "\nEnter imaginary part of Second complex number: ";
	cin >> secondImag;
	char signSecondEquation = (secondImag < 0 ? '-' :  '+');
	cout << "\nz2 = " << secondReal << " " << signSecondEquation << " " << abs(secondImag) << "i\n";
	complex.getSumTwoComplex(secondReal, secondImag);

	return 0;
}


void Complex::setFirsComplex() {
	cout << "Enter real part of First complex number: ";
	cin >> real;
	cout << "\nEnter imaginary part of First complex number: ";
	cin >> imag;
	char signFirstEquation = (imag) < 0 ? '-' : '+';
	cout << "z1 = " << real <<" "<< signFirstEquation<<" "<< abs(imag) << "i\n";
}

void Complex::getSumTwoComplex(int secondReal, int secondImage) {
	int Real;
	int Imaginary;
	Real = real + secondReal;
	Imaginary = imag + secondImage;
	char signComplex = (Imaginary < 0 ? '-' : '+');
	if(abs(Imaginary) == 1) {
		cout << "\nz = " << Real << " " << signComplex << " "<< "i\n";
	}
	else {
		cout << "\nz = " << Real << " " << signComplex << " " <<abs(Imaginary)<< "i\n";
	}
	

}
