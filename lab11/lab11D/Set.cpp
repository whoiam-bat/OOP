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