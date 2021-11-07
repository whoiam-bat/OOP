#include "Number.h"

template Number < int >;
template Number < double >;

template<class T>
Number<T> ::Number(T var) {
	this->var = var;
}

template<class T>
Number<T> Number<T>::operator+(Number<T> obj2) {
	Number<T> temp(0);
	temp.var = this->var + obj2.var;
	return temp;
}

template<class T>
Number<T> Number<T>::operator-(Number<T> obj2) {
	Number<T> temp(0);
	temp.var = this->var - obj2.var;
	return temp;
}

template<class T>
Number<T> Number<T>::operator*(Number<T> obj2) {
	Number<T> temp(0);
	temp.var = this->var * obj2.var;
	return temp;
}

template<class T>
Number<T> Number<T>::operator/(Number<T> obj2) {
	Number<T> temp(0);
	temp.var = this->var / obj2.var;
	return temp;
}

template<class T>
T Number<T>::render() {
	return this->var;
}
