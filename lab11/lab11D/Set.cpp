#include "Set.h"


void Set::setSize(int sizeSet) {
	this->sizeSet = sizeSet;
}
void Set::setLeftBorder(int leftBorder) {
	this->leftBorder = leftBorder;
}
void Set::setRightBorder(int rightBorder) {
	this->rightBorder = rightBorder;
}
int Set::getSize() {
	return sizeSet;
}
int Set::getLeftBorder() {
	return leftBorder;
}
int Set::getRightBorder() {
	return rightBorder;
}
int Set::returnSetCopy(Set setObj2, int maxVal) {
	int sizeSetCopy = 0;
	for (int i = 0; i < setObj2.sizeSet; i++)
	{
		if (setObj2.set[i] < maxVal) {
			sizeSetCopy++;
		}
	}
	return sizeSetCopy;
}
Set::Set() {
	
		this->sizeSet = 10;
		this->leftBorder = -20;
		this->rightBorder = 20;
		set = new int[sizeSet];
		for (int i = 0; i < sizeSet; ++i)
		{
			bool isUnique;
			do {
				set[i] = rand() % (20 + 20 + 1) - 20;
				isUnique = true;
				for (int j = 0; j < i; j++)
				{
					if (set[i] == set[j]) {
						isUnique = false;
						break;
					}
				}
			} while (!isUnique);
		}
		for (int i = 0; i < sizeSet; i++)
		{
			cout << set[i] << " ";
		}
}
Set::Set(int sizeSet, int leftBorder, int rightBorder) {
	
		cout << "Constructor with parameters\n";
		this->sizeSet = sizeSet;
		this->leftBorder = leftBorder;
		this->rightBorder = rightBorder;
		set = new int[sizeSet];
		for (int i = 0; i < sizeSet; ++i)
		{
			bool isUnique;
			do {
				set[i] = rand() % (rightBorder - leftBorder + 1) + leftBorder;
				isUnique = true;
				for (int j = 0; j < i; j++)
				{
					if (set[i] == set[j]) {
						isUnique = false;
						break;
					}
				}
			} while (!isUnique);
		}
		for (int i = 0; i < sizeSet; i++)
		{
			cout << set[i] << " ";
		}
		cout << "\n";
	
}
Set::Set(const Set& setObj2) {
	
		int maxVal;
		cout << "\n\nCopy constructor\n";
		this->sizeSet = returnSetCopy(setObj2, maxVal);
		this->leftBorder = setObj2.leftBorder;
		this->rightBorder = setObj2.rightBorder;
		cout << "\nEnter maximal value in your set: ";
		cin >> maxVal;
		set = new int[sizeSet];

		for (int i = 0; i < setObj2.sizeSet; i++)
		{
			if (setObj2.set[i] >= maxVal) {
				continue;
			}
			else {
				set[i] = setObj2.set[i];
			}
		}
		for (int i = 0; i < sizeSet; i++)
		{
			cout << set[i] << " ";
		}
		cout << "\n";
	
}
int Set::findMaxValue(Set setObj) {
	int max = INT_MIN;
	for (int i = 0; i < setObj.sizeSet; i++)
	{
		if (setObj.set[i] > max) {
			max = setObj.set[i];
		}
	}
	return max;
}
void Set::Union(Set setObj1, Set setObj2) {
	cout << "\nUnion\n";
	for (int i = 0; i < setObj1.sizeSet; i++)
	{
		cout << setObj1.set[i] << " ";
	}
	for (int i = 0; i < setObj2.sizeSet; i++)
	{
		cout << setObj2.set[i] << " ";
	}
	cout << "\n";
}
void Set::Intersection(Set setObj1, Set setObj2) {
	cout << "\nIntersection\n";
	bool flag = false;
	for (int i = 0; i < setObj1.sizeSet; i++) {
		for (int u = 0; u < setObj2.sizeSet; u++) {
			if (setObj1.set[i] == setObj2.set[u]) {
				flag = true;
				cout << setObj1.set[i] << " ";
			}
		}
	}
	if (!flag) {
		cout << "None\n\n";
	}
	cout << "\n";
}
void Set::Difference(Set setObj1, Set setObj2) {
	cout << "\nDifference\n";
	for (int i = 0; i < setObj2.sizeSet; i++) {
		for (int j = 0; j < setObj1.sizeSet; j++) {
			if (setObj2.set[i] != setObj1.set[j]) {
				cout << setObj1.set[j] << " ";
			}
		}
		break;
	}
	cout << "\n";
}

void Set::SymmetricDifference(Set setObj1, Set setObj2) {
	cout << "\nSymmetric Difference\n";
	for (int i = 0; i < setObj1.sizeSet; i++) {
		for (int j = 0; j < setObj2.sizeSet; j++) {
			if (setObj1.set[i] == setObj2.set[j]) goto l1;
		}
		cout << setObj1.set[i] << " ";

	l1:;
	};
	for (int i = 0; i < setObj2.sizeSet; i++) {
		for (int j = 0; j < setObj1.sizeSet; j++) {
			if (setObj2.set[i] == setObj1.set[j]) goto l2;
		}
		cout << setObj2.set[i] << " ";
	l2:;
	};

	cout << "\n\n";
}

void menu() {
	cout << "1 create default constructor;\n";
	cout << "2 create constructor with parameters;\n";
	cout << "3 create copy constructor;\n";
	cout << "4 find max value in the set;\n";
	cout << "5 operarion on sets;\n";
	cout << "6 clear console;\n";
	cout << "7 exit from the loop.\n";
}