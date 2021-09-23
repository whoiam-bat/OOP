#include "Complex.h"
void Complex::setFirsComplex() {
	cout << "Enter real part of First complex number: ";
	cin >> real;
	cout << "\nEnter imaginary part of First complex number: ";
	cin >> imag;
	char signFirstEquation = (imag) < 0 ? '-' : '+';
	cout << "z1 = " << real << " " << signFirstEquation << " " << abs(imag) << "i\n";
}

void Complex::getSumTwoComplex(int secondReal, int secondImage) {
	int Real;
	int Imaginary;
	Real = real + secondReal;
	Imaginary = imag + secondImage;
	char signComplex = (Imaginary < 0 ? '-' : '+');
	if (abs(Imaginary) == 1) {
		cout << "\nz = " << Real << " " << signComplex << " " << "i\n";
	}
	else {
		cout << "\nz = " << Real << " " << signComplex << " " << abs(Imaginary) << "i\n";
	}
}
