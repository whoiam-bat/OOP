#include "Name.h"

Name::Name(string name) {
	this->name = name;
}

string Name::getNameAt() {
	return this->name;
}

bool operator<(const Name& name1, const Name& name2) {
	return name1.name < name2.name;
}

ostream& operator<<(ostream& out, Name name) {
	out << name.name;
	return out;
}
