#include"Name.h"
#include "Number.h"
#include<map>
#include<ctime>
#include<iomanip>

string names[20] = { "Oliver Adams","Jack Bailey", "Harry Baker", "Jacob Carter", "Charlie Collins",
						 "Thomas Davidson", "Oscar Davies", "William Fisher", "James Gibson", "George Ford",
						 "Amelia Graham", "Olivia Griffiths", "Emily Armstrong", "Ava Clarke", "Jessica Elliot",
						 "Isabella Johnson", "Sophie Lewis", "Mia Murphy", "Ruby Osborne", "Lily Ratliff" };

string numbers[20] = { "442836451", "440595637", "441324326", "445674938", "448795465",
						"448796587", "447821032", "440123256", "448797452", "441023587",
						"447572637", "446532873", "446237436", "446523298", "447586263",
						"445768762", "447683472", "441625379", "440959853", "446756834" };

int main() {
	srand(time(NULL));

	int length;
	cout << "Enter length map: ";
	cin >> length;
	cin.ignore();

	map<Name, Number> abonent;

	for (int  i = 0; i < length; i++) {
		abonent.insert(pair<Name, Number>(Name(names[rand() % 20]), Number(numbers[rand() % 20])));
	}

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
		if (key == const_cast<Name&>(p->first).getNameAt()) {
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
		if (symbol == const_cast<Name&>(p.first).getNameAt()[0]) {
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
		if (symbol == const_cast<Name&>(it->first).getNameAt()[0]) {
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