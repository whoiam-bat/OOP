#include "TemplateArray.h"

template TemplateArray <int>;
template TemplateArray <float>;

//Constructors and Destructors
template<class T>
TemplateArray<T>::TemplateArray() {
	this->maxLength = 100;
	this->ar = new T[this->maxLength];
	this->index = 0;
	this->sum = 0;
	this->indermediate = 0.f;
}
template<class T>
TemplateArray<T>::~TemplateArray() {
	delete[] ar;
}



//Functions
template<class T>
void TemplateArray<T>::setIndex(int index) {
	this->index = index;
}

template<class T>
void TemplateArray<T>::initArrToIndex(int index) {
	cin>> this->ar[index];
}

template<class T>
void TemplateArray<T>::printArrayToIndex(int index) {
	for (int i = 0; i < index; i++) {
		cout << this->ar[i] << " ";
	}
	cout << "\n";
}

template<class T>
void TemplateArray<T>::findOutIntermediate() {
	this->indermediate = static_cast<float>(this->sum) / this->index;
}

template<class T>
float TemplateArray<T>::getIntermediate() {
	return this->indermediate;
}

template<class T>
T TemplateArray<T>::getSumOfArray() {
	return this->sum;
}

template<class T>
void TemplateArray<T>::findOutSum() {
	for (int i = 0; i < this->index; i++) {
		this->sum += this->ar[i];
	}
}

//Overloading function
template<class T>
T& TemplateArray<T>::operator[](int index) {
	T max = this->ar[0];
	for (int i = 0; i <= index - 1; i++) {
		if (this->ar[i] > max) {
			max = this->ar[i];
		}
	}
	return max;
}

template<class T>
void TemplateArray<T>::searchMaxValue() {
	int ind;
	try
	{
		string errMessage = "ERROR::IndexOutOfBounds\n";
		cout << "Enter index for searhing max element: ";
		cin >> ind;
		if (ind > this->index) {
			throw errMessage;
		}
	}
	catch (string& errMassage) {
		cerr << errMassage;
	}
	cout << "MAX value from 0 to " << ind << " " << operator[](ind);
}

//Main function

void menu() {
	cout << "1. to int\n";
	cout << "2. to float\n";
}
void menuForLogic() {
	cout << "1. to fill array;\n";
	cout << "2. to count summ array;\n";
	cout << "3. to find out average;\n";
	cout << "4. to print array to index;\n";
	cout << "5. to find out max element to index;\n";
	cout << "6. to change index;\n";
	cout << "7. to clear console;\n";
	cout << "8. to change type.\n";
}