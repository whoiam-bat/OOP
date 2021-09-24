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
	Set();
	Set(int sizeSet, int leftBorder, int rightBorder);
	Set(const Set& setObj2);
	static int findMaxValue(Set setObj);
	static void Union(Set setObj1, Set setObj2);
	static void Intersection(Set setObj1, Set setObj2);
	static void Difference(Set setObj1, Set setObj2);
	static void SymmetricDifference(Set setObj1, Set setObj2);
};