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
	/*~Set() {
		delete[] set;
	}*/
};

void menu() {
	cout << "1 create default constructor;\n";
	cout << "2 create constructor with parameters;\n";
	cout << "3 create copy constructor;\n";
	cout << "4 find max value in the set;\n";
	cout << "5 operarion on sets;\n";
	cout << "6 clear console;\n";
	cout << "7 exit from the loop.\n";
}

int main() {
	while (true) {
		int choice;
		menu();
		cin >> choice;
		switch (choice) {
		case 1: {
			Set setObj;
			break;
		}
		case 2: {
			int sizeSet;
			int leftBorder;
			int rightBorder;

			cout << "Enter size of set: ";
			cin >> sizeSet;
			cout << "Enter left border: ";
			cin >> leftBorder;
			cout << "Enter right border: ";
			cin >> rightBorder;
			Set setObj1(sizeSet, leftBorder, rightBorder);
			break;
		}
		case 3: {
			int maxVal;
			int sizeSet;
			int leftBorder;
			int rightBorder;

			cout << "Enter size of set: ";
			cin >> sizeSet;
			cout << "Enter left border: ";
			cin >> leftBorder;
			cout << "Enter right border: ";
			cin >> rightBorder;
			cout << "Enter maximal value in your set: ";
			cin >> maxVal;
			system("cls");
			Set setObj2(sizeSet, leftBorder, rightBorder);
			Set setObj3(setObj2, maxVal);
			break;
		}
		case 4: {
			int sizeSet;
			int leftBorder;
			int rightBorder;

			cout << "Enter size of set: ";
			cin >> sizeSet;
			cout << "Enter left border: ";
			cin >> leftBorder;
			cout << "Enter right border: ";
			cin >> rightBorder;
			system("cls");
			Set setObj1(sizeSet, leftBorder, rightBorder);
			cout << "\nmax: " << Set::findMaxValue(setObj1) << "\n";
			break;
		}
		case 5: {
			int sizeSetF;
			int leftBorderF;
			int rightBorderF;

			cout << "Firs set\n";
			cout << "Enter size of set: ";
			cin >> sizeSetF;
			cout << "Enter left border: ";
			cin >> leftBorderF;
			cout << "Enter right border: ";
			cin >> rightBorderF;

			int sizeSetS;
			int leftBorderS;
			int rightBorderS;
			cout << "Second set\n";
			cout << "Enter size of set: ";
			cin >> sizeSetS;
			cout << "Enter left border: ";
			cin >> leftBorderS;
			cout << "Enter right border: ";
			cin >> rightBorderS;
			system("cls");

			Set setObj1(sizeSetF, leftBorderF, rightBorderF);
			Set setObj2(sizeSetS, leftBorderS, rightBorderS);

			Set::Union(setObj1, setObj2);
			Set::Intersection(setObj1, setObj2);
			Set::Difference(setObj1, setObj2);
			Set::SymmetricDifference(setObj1, setObj2);
			break;
		}
		case 6: {
			system("cls");
			menu();
			break;
		}
		case 7: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
	return 0;
}

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

