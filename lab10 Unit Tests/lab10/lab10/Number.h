#pragma once
#include<iostream> 
#include<ctime>
#include <typeinfo>
#include<iomanip>
#include<cmath>
#include<cassert>

using namespace std;


template <class T>
class Number {
protected:
	T* numbers;
	int length;
public:
	Number(int length = 7);
	~Number();

	void print();

	T findMin();
	void ascendingSorting();
    T  sumPositive();
	int getLength();

	T sumEmulated();
	T findMinEmulated();
	void sortingEmulated();

	T getType();
	T getElement(int i);
};

