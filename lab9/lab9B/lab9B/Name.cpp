#include "Name.h"

Name::Name() {
	this->name = names[rand() % 20];
}

string Name::getNameAt() {
	return this->name;
}
