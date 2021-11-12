#pragma once
#include <iostream>
using namespace std;

template <class T>
class Number {
	T var;
public:
	Number(T var);
	~Number();
	Number<T> operator + (Number<T> obj2);
	Number<T> operator - (Number<T> obj2);
	Number<T> operator * (Number<T> obj2);
	Number<T> operator / (Number<T> obj2);
	T render();
};

