#pragma once
#include<iostream>
#include<ctime>
using namespace std;

class Parent {
private:
	int varParent;
	static int countChild1;
	static int countChild2;
public:
	void setVarParent(const int& varParent) {
		this->varParent = varParent;
	}
	int getVarParent() {
		return varParent;
	}
	static void initializeParentArr(Parent* parent, const int& sizeParentArray);
	static void printParentArr(Parent* parent, const int& sizeParentArray);
	static int getCountChild1() {
		return countChild1;
	}
	static int getCountChild2() {
		return countChild2;
	}
};

class Child1 : public Parent {
private:
	int varChild1;
public:
	static void initializeChild1Arr(Child1* child1, Parent* parent, const int& sizeParentArray);
	static void printChild1Arr(Child1* child1);
	void setVarChild1(const int& varChild1) {
		this->varChild1 = varChild1;
	}
	int getVarChild1() {
		return varChild1;
	}
};

class Child2 : public Child1 {
private:
	int varChild2;
public:
	static void initializeChild2Arr(Child2* child2, Parent* parent, const int& sizeParentArray);
	static void printChild2Arr(Child2* child2);
	static void printSameElements(Parent* parent, const int& sizeParentArray);

	void setVarChild2(const int& varChild2) {
		this->varChild2 = varChild2;
	}
	int getVarChild2() {
		return varChild2;
	}


};

