#include "Number.h"

template Number <int>;
template Number <char>;
template Number <double>;

template<class T>
Number<T>::Number(int length) {
	this->length = length;
	this->numbers = new T[length];
	for (register int i = 0; i < this->length; i++) {
		if (typeid(this->numbers[i]).name() == typeid('c').name()) {
			this->numbers[i] = static_cast<char>(rand() % 24 + 65);
		}
		else {
			this->numbers[i] = (rand() % 81 - 30) * 0.67;
		}
	}
}

template<class T>
Number<T>::~Number() {
	delete this->numbers;
}

template<class T>
void Number<T>::print() {
	for (int i = 0; i < this->length; i++) {
		if (typeid(this->numbers[i]).name() == typeid(double).name()) {
			cout <<fixed<<setprecision(2)<< this->numbers[i] << "   ";
		} 
		else {
			cout << this->numbers[i] << "   ";
		}
	}
	cout << "\n\n";
}

template<class T>
T Number<T>::findMin() {
	int firstIndex;
	int secondIndex;
	if (typeid(this->numbers[0]).name() == typeid(char).name()) {
		 firstIndex = 1;
		 secondIndex = 4;
	}
	else {
		int choice;
		cout << "\n1 positive - positive\n";
		cout << "2 positive - neative\n";
		cout << "3 negative - neative\n";
		cin >> choice;
		 switch (choice) {
		 case 1: {
			 firstIndex = 3;
			 secondIndex = 5;
			 break;
		 }
		 case 2: {
			 firstIndex = 3;
			 secondIndex = 0;
			 break;
		 }
		 case 3: {
			 firstIndex = 0;
			 secondIndex = 1;
			 break;
		 }
		 }
	}
	return (this->numbers[firstIndex] >= this->numbers[secondIndex]) ? this->numbers[secondIndex] : this->numbers[firstIndex] ;
}

template<class T>
void Number<T>::ascendingSorting() {
	for (register int i = 0; i < this->length; i++) {
		for (register int j = 0; j < this->length; j++) {
			if (this->numbers[j] > this->numbers[i]) {
				swap(this->numbers[i], this->numbers[j]);
			}
		}
	}
}

template<class T>
T Number<T>::sumPositive() {
	T sum = 0;
	for (register int i = 0; i < this->length; i++) {
		if (this->numbers[i] > 0) {
			sum += this->numbers[i];
		}
	}
	return sum;
}

template<class T>
int Number<T>::getLength() {
	return this->length;
}

template<class T>
T Number<T>::sumEmulated() {
	T sum = 0;
	for (register int i = 0; i < this->length; i++) {
		sum += this->numbers[i];
	}
	return sum;
}

template<class T>
T Number<T>::findMinEmulated() {
	int firstIndex;
	int secondIndex;
	if (typeid(this->numbers[0]).name() == typeid(char).name()) {
		firstIndex = 1;
		secondIndex = 4;
	}
	else {
		int choice;
		cout << "\n1 positive - positive\n";
		cout << "2 positive - neative\n";
		cout << "3 negative - neative\n";
		cin >> choice;
		switch (choice) {
		case 1: {
			firstIndex = 3;
			secondIndex = 5;
			break;
		}
		case 2: {
			firstIndex = 3;
			secondIndex = 0;
			break;
		}
		case 3: {
			firstIndex = 0;
			secondIndex = 1;
			break;
		}
		}
	}
	return (this->numbers[firstIndex] < this->numbers[secondIndex]) ? this->numbers[secondIndex] : this->numbers[firstIndex];
}

template<class T>
void Number<T>::sortingEmulated() {
	for (register int i = 0; i < this->length; i++) {
		for (register int j = 0; j < this->length; j++) {
			if (this->numbers[j] < this->numbers[i]) {
				swap(this->numbers[i], this->numbers[j]);
			}
		}
	}
}

template<class T>
T Number<T>::getType() {

	return this->numbers[0];
}

template<class T>
T Number<T>::getElement(int i) {

	return this->numbers[i];
}


