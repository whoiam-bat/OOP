#include "Parent.h"

void Parent::initializeParentArr(Parent* parent, const int& sizeParentArray) {
	for (int i = 0; i < sizeParentArray; i++) {

		parent[i].setVarParent(rand() % 150);
	}
}
void Parent::printParentArr(Parent* parent, const int& sizeParentArray) {
	for (int i = 0; i < sizeParentArray; i++) {
		if (parent[i].getVarParent() % 7 == 3) {
			countChild1++;
		}
		else if (parent[i].getVarParent() % 5 == 2) {
			countChild2++;
		}
		cout << parent[i].getVarParent() << "  ";
	}
}

void Child1::initializeChild1Arr(Child1* child1, Parent* parent, const int& sizeParentArray) {
	for (int i = 0, j = 0; i < sizeParentArray; i++) {
		if (parent[i].getVarParent() % 7 == 3) {
			child1[j++].setVarChild1(parent[i].getVarParent());
		}
	}
}
void Child1::printChild1Arr(Child1* child1) {
	for (int i = 0; i < getCountChild1(); i++) {
		cout << child1[i].getVarChild1() << "  ";
	}
}

void Child2::initializeChild2Arr(Child2* child2, Parent* parent, const int& sizeParentArray) {
	for (int i = 0, j = 0; i < sizeParentArray; i++) {
		if (parent[i].getVarParent() % 5 == 2) {
			child2[j++].setVarChild2(parent[i].getVarParent());
		}
	}
}
void Child2::printChild2Arr(Child2* child2) {
	for (int i = 0; i < getCountChild2(); i++) {
		cout << child2[i].getVarChild2() << "  ";
	}
}
void Child2::printSameElements(Parent* parent, const int& sizeParentArray) {
	for (int i = 0; i < sizeParentArray; i++) {
		if (parent[i].getVarParent() % 7 == 3 && parent[i].getVarParent() % 5 == 2) {
			cout << parent[i].getVarParent() << " ";
		}
	}
}