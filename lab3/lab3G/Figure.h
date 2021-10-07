#pragma once
#include<iostream>
#include<cmath>
using namespace std;

const int PI = acos(-1.0);

class Figure {
protected:
	int x;
	int y;
public:
	virtual void init(int x, int y = 1) = 0;
	virtual void show() = 0;
};

class Triangle : public Figure {
public:
	virtual void init(int x, int y) override;
	virtual void show() override;
};

class Rectangle : public Figure {
public:
	virtual void init(int x, int y) override;
	virtual void show() override;
};

class Circle : public Figure {
public:
	virtual void init(int x, int y = 1) override;
	virtual void show() override;
};

void AreaByChildrenObjects();
void AreaByParentPointer();

