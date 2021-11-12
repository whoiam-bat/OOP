#include "Vector.h"

Vector::Vector() {
	this->firstVar = 0;
	this->secondVar = 0;
	this->sum = 0;
}
Vector::Vector(int firstVar, int secondVar) {
	this->firstVar = firstVar;
	this->secondVar = secondVar;
	this->sum = this->firstVar + this->secondVar;
}

int Vector::getSum() {
	return this->sum;
}

void Vector::operator==(Vector vect) {
	if (this->sum == vect.sum) {
		cout << "Vectors is equal\n";
	}
	else if (this->sum > vect.sum) {
		cout << "Summ of first vector is larger than second vector\n";
	}
	else {
		cout << "Summ of first vector is less than second vector\n";
	}
}

void printVectorInfo(vector<Vector> vectors) {
	for (int i = 0; i < vectors.size(); i++) {
		cout << "Vector " << i + 1 << ": " << vectors[i].firstVar <<" " << vectors[i].secondVar << "\n";
		cout << "Summ of " << i + 1 << " vector: " << vectors[i].sum << "\n\n";
	}
}
