#include "Number.h"

Number::Number() {
	this->number = this->numbers[rand() % 20];
}

string Number::getNumberAt() {
	return this->number;
}
