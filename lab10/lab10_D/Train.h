#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <time.h>
#include <iomanip>
using namespace std;


class Train {
private:
	string destination;
	int trainNumber;
	int hours;
	int minutes;
public:
	string cities[7] = { "Boston", "New York" ,"Los Angeles","Kyiv","Kharkiv",
	"Gravity Fals", "New Orlean" };
	//----- default constructor -----//
	Train() {
		destination = trainNumber = hours = minutes = NULL;
	}
	void fillTrains(Train* arr, int N);
	//setting up values
	void setDestination();
	void setTrainNumber();
	void setTime();
	void const printTrains(Train* arr, int N);
	string const getDestination();
	string const getTime();
	int const getTrainNumber();
	void sort(Train* arr, int N);
	void search(Train* arr, int N, int searchNumber);
	void sortingByDestination(Train* arr, int N);
};
void menu();