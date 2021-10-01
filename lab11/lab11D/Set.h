#pragma once
#include<iostream>
#include<time.h>
using namespace std;

class Set {
private:
	int sizeSet;
	int leftBorder;
	int rightBorder;
	int* set;
public:
	void setSize(int sizeSet);
	void setLeftBorder(int leftBorder);
	void setRightBorder(int rightBorder);
	int getSize();
	int getLeftBorder();
	int getRightBorder();
	int returnSetCopy(Set setObj2, int maxVal);
	Set() {
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
	Set(int sizeSet, int leftBorder, int rightBorder) {
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
	Set(const Set& setObj2, int maxVal) {
		cout << "\n\nCopy constructor\n";
		this->sizeSet = returnSetCopy(setObj2, maxVal);
		this->leftBorder = setObj2.leftBorder;
		this->rightBorder = setObj2.rightBorder;

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
	}
	static int findMaxValue(Set setObj);
	static void Union(Set setObj1, Set setObj2);
	static void Intersection(Set setObj1, Set setObj2);
	static void Difference(Set setObj1, Set setObj2);
	static void SymmetricDifference(Set setObj1, Set setObj2);
};

void menu() {
	cout << "1 create default constructor;\n";
	cout << "2 create constructor with parameters;\n";
	cout << "3 create copy constructor;\n";
	cout << "4 find max value in the set;\n";
	cout << "5 operarion on sets;\n";
	cout << "6 clear console;\n";
	cout << "7 exit from the loop.\n";