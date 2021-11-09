#pragma once
#include<iostream>
#include<typeinfo>

using namespace std;

template<class T>
class TemplateArray {
private:
	T* ar;
	T sum;

	int maxLength;
	int index;
	float indermediate;

public:
	//Constructors and Destructors
	TemplateArray();
	~TemplateArray();

	//Functions
	void setIndex(int index);
	void initArrToIndex(int index);
	void printArrayToIndex(int index);
	
	void findOutIntermediate();
	float getIntermediate();
	T getSumOfArray();
	void findOutSum();

	T& operator[](int index);
	void searchMaxValue();
};


void menu();
void menuForLogic();