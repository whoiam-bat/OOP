#include "Number.h"

Number::Number(string number) {
	this->number = number;
}

string Number::getNumberAt() {
	return this->number;
}

ostream& operator<<(ostream& out, Number number) {
	out << number.number;
	return out;
}
