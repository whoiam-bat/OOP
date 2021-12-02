#include "Test.h"

template Test <int>;
template Test <char>;
template Test <double>;

template<class T>
Test<T>::Test() {
	this->size = this->number.getLength();
	if (typeid(this->number.getType()).name() == typeid(1).name()) {
		this->testSumInteger = 73;
		this->testInteger = new int[size]{-13, -11, -9, 7, 15, 18, 33};
		this->testDouble = nullptr;
		this->testCharachter = nullptr;
	}
	else if (typeid(this->number.getType()).name() == typeid(1.3).name()) {
		this->testSumDouble = 74.37;
		this->testDouble = new double[size]{-13.40, -11.39, -9.38, 7.37, 15.41, 18.09, 33.50};
		this->testInteger = nullptr;
		this->testCharachter = nullptr;
	}
	else if (typeid(this->number.getType()).name() == typeid('c').name()) {
		this->testSumCharachter = 'E' +  'E' +  'G' + 'L' + 'R' + 'R' + 'W';
		this->testCharachter = new char[size]{'E', 'E', 'G',   'L',   'R', 'R', 'W'};
		this->testInteger = nullptr;
		this->testDouble = nullptr;
	}
}
template<class T>
Test<T>::~Test() {
	delete this->testInteger;
	delete this->testDouble;
	delete this->testCharachter;
}

template<class T>
void Test<T>::testMin() {
	this->number.ascendingSorting();
	T tempMin = this->number.findMin();

	cout << "\nTest min element: ";
	if (this->testInteger != nullptr) {
		assert( 
			tempMin == this->number.getElement(3) ||
			tempMin == this->number.getElement(0) ||
			tempMin == this->number.getElement(0)
		);
	}
	else if (this->testDouble != nullptr) {
		assert(
			tempMin == this->number.getElement(3) ||
			tempMin == this->number.getElement(0) ||
			tempMin == this->number.getElement(0)
		);
	}
	else if (this->testCharachter != nullptr) {
		assert(tempMin == this->number.getElement(4));
	}
	cout << "Test Completed\n";
}

template<class T>
void Test<T>::testSort() {
	this->number.ascendingSorting();
	cout << "\nTest sort: ";
	if (this->testInteger != nullptr) {
		for (register int i = 0; i < this->size; i++) {
			assert(this->testInteger[i] == this->number.getElement(i));
		}
	}
	else if (this->testDouble != nullptr) {
		for (register int i = 0; i < this->size; i++) {
			assert(this->testDouble[i] == this->number.getElement(i));
		}
	}
	else if (this->testCharachter != nullptr) {
		for (register int i = 0; i < this->size; i++) {
			assert(this->testCharachter[i] == this->number.getElement(i));
		}
	}
	cout << "Test Completed\n";
}

template<class T>
void Test<T>::testSum() {
	cout << "\nTest sum: ";
	T tempSum = this->number.sumPositive();

	if (typeid(this->number.getType()).name() == typeid(1).name()) {
		assert(this->testSumInteger == tempSum);
	}
	else if (typeid(this->number.getType()).name() == typeid(1.3).name()) {
		assert(this->testSumDouble == tempSum);
	}
	else if (typeid(this->number.getType()).name() == typeid('c').name()) {
		assert(this->testSumCharachter == tempSum);
	}
	cout << "Test Completed\n";
}

template<class T>
void Test<T>::testSortEmulatedSituation() {
	this->number.sortingEmulated();
	cout << "\nTest sort (ERROR result): ";
	if (this->testInteger != nullptr) {
		for (register int i = 0; i < this->size; i++) {
			assert(this->testInteger[i] == this->number.getElement(i));
		}
	}
	else if (this->testDouble != nullptr) {
		for (register int i = 0; i < this->size; i++) {
			assert(this->testDouble[i] == this->number.getElement(i));
		}
	}
	else if (this->testCharachter != nullptr) {
		for (register int i = 0; i < this->size; i++) {
			assert(this->testCharachter[i] == this->number.getElement(i));
		}
	}
	cout << "Test Completed\n";
}

template<class T>
void Test<T>::testMinEmulatedSituation() {
	this->number.ascendingSorting();
	T tempMin = this->number.findMinEmulated();

	cout << "\nTest min element: ";
	if (this->testInteger != nullptr) {
		assert(
			tempMin == this->number.getElement(3) ||
			tempMin == this->number.getElement(0) ||
			tempMin == this->number.getElement(0)
		);
	}
	else if (this->testDouble != nullptr) {
		assert(
			tempMin == this->number.getElement(3) ||
			tempMin == this->number.getElement(0) ||
			tempMin == this->number.getElement(0)
		);
	}
	else if (this->testCharachter != nullptr) {
		assert(tempMin == this->number.getElement(4));
	}
	cout << "Test Completed\n";
}

template<class T>
void Test<T>::testSumEmulatedSituation() {

	T tempSum = this->number.sumEmulated();
	cout << "\nTest sum (ERROR result): ";
	if (typeid(this->number.getType()).name() == typeid(1).name()) {
		assert(this->testSumInteger == tempSum);
	}
	else if (typeid(this->number.getType()).name() == typeid(1.3).name()) {
		assert(this->testSumDouble == tempSum);
	}
	else if (typeid(this->number.getType()).name() == typeid('c').name()) {
		assert(this->testSumCharachter == tempSum);
	}
	cout << "Test Completed\n";
}

template<class T>
void Test<T>::print() {
	if (this->testInteger != nullptr) {
		for (register int i = 0; i < this->size; i++) {
			cout << this->testInteger[i] << "   ";
		}
		cout << "\n\n";
	}
	else if (this->testDouble != nullptr) {
		for (register int i = 0; i < this->size; i++) {
			cout << this->testDouble[i] << "   ";
		}
		cout << "\n\n";
	}
	else if (this->testCharachter != nullptr) {
		for (register int i = 0; i < this->size; i++) {
			cout << this->testCharachter[i] << "   ";
		}
		cout << "\n\n";
	}
}
