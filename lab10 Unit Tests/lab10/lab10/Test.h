#pragma once
#include "Number.h"

template <class T>
class Test {
protected:
	int* testInteger;
	double* testDouble;
	char* testCharachter;
	int size;

	int testMinInteger;
	double testMinDouble;
	char testMinCharachter;

	int testSumInteger;
	double testSumDouble;
	char testSumCharachter;

	Number<T> number;
public:

	Test();
	~Test();


	void testMin();
	void testSort();
	void testSum();

	void testSortEmulatedSituation();
	void testMinEmulatedSituation();
	void testSumEmulatedSituation();

	void print();
};

