#include"Name.h"
#include "Number.h"
#include<map>
#include<ctime>
#include<iomanip>

int main() {
	srand(time(NULL));

	int length;
	cout << "Enter length map: ";
	cin >> length;
	cin.ignore();

	Name* name = new Name[length];
	Number* number = new Number[length];

	map<string, string> abonent;

	//Create map
	for (int i = 0; i < length; i++) {
		abonent.insert(pair<string, string> (name[i].getNameAt(), number[i].getNumberAt()));
	}

	//Print map
	int i = 1;
	for (const auto& it : abonent) {
		cout <<i++<<" " << left << setw(20) << it.first
			<<left<< setw(15) <<it.second<< "\n";
	}

	//Search abonent by full name
	string key;
	cout << "\n\nEnter name to find abonent:\n";
	getline(cin, key);
	for (auto p = abonent.begin(); p != abonent.end(); p++) {
		if (key == p->first) {
			cout << left << setw(20) << p->first
				<< left << setw(15) << p->second << "\n";
			break;
		}
	}

	//Search abonent by first letter
	char symbol;
	cout << "Enter symbol to find all abonents with this starting letter:\n";
	cin >> symbol;
	for (const auto& p : abonent) {
		if (symbol == p.first[0]) {
			cout << left << setw(20) << p.first
				<< left << setw(15) << p.second << "\n";
		}
	}


	//Erase abonent
	cout << "Enter symbol to erase all abonents with this starting letter:\n";
	cin >> symbol;
	for (auto p = abonent.begin(); p != abonent.end();) {
		auto it = p;
		p++;
		if (symbol == it->first[0]) {
			abonent.erase(it);
		}
	}	

	i = 1;
	for (const auto& it : abonent) {
		cout << i++ << " " << left << setw(20) << it.first
			<< left << setw(15) << it.second << "\n";
	}

	return 0;
}