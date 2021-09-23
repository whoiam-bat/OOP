#include "Complex.h"
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

