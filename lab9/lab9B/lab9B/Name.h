#pragma once
#include<iostream>
#include<string>
using namespace std;


class Name {
private:
	string name;
public:
	string names[20] = { "Oliver Adams","Jack Bailey", "Harry Baker", "Jacob Carter", "Charlie Collins",
						 "Thomas Davidson", "Oscar Davies", "William Fisher", "James Gibson", "George Ford",
						 "Amelia Graham", "Olivia Griffiths", "Emily Armstrong", "Ava Clarke", "Jessica Elliot",
						 "Isabella Johnson", "Sophie Lewis", "Mia Murphy", "Ruby Osborne", "Lily Ratliff" };
	Name();
	string getNameAt();
};

