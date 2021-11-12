#pragma once
#include<iostream>
#include<ctime>
#include<vector>

using namespace std;



class Vector {
private:
	int firstVar;
	int secondVar;
	int sum;
public:
	Vector();
	Vector(int firstVar, int secondVar);

	int getSum();

	friend void printVectorInfo(vector<Vector> vectors);
	void operator == (Vector vect);
};

