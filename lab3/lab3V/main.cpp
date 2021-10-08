#include"Parent.h"

int Parent::countChild1 = 0;
int Parent::countChild2 = 0;
int main() {
	//srand(time(NULL));
	const int sizeParentArray = 10;
	Parent parent[sizeParentArray];
	Parent::initializeParentArr(parent, sizeParentArray);
	Parent::printParentArr(parent, sizeParentArray);


	cout << "\nCount of Elements which divide on 7 with balance 3: " << Parent::getCountChild1()<<"\n";
	int sizeChild1Arr = Parent::getCountChild1();
	Child1* child1 = new Child1[sizeChild1Arr];
	Child1::initializeChild1Arr(child1,parent,sizeParentArray);
	Child1::printChild1Arr(child1);

	cout << "\nCount of Elements which divide on 5 with balance 2: " << Parent::getCountChild2()<<"\n";
	int sizeChild2Arr = Parent::getCountChild2();
	Child2* child2 = new Child2[sizeChild2Arr];
	Child2::initializeChild2Arr(child2, parent, sizeParentArray);
	Child2::printChild2Arr(child2);

	cout << "\nElements ehich divide on 5 with balance 2 and 7 with 3 balance: " << "\n";
	Child2::printSameElements(parent, sizeParentArray);


	delete[] child1;
	delete[] child2;
	return 0;
}




