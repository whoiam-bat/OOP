#include "Train.h"

void Train::fillTrains(Train* arr, int N) {
	for (int i = 0; i < N; i++) {
		arr[i].setDestination();
		arr[i].setTrainNumber();
		arr[i].setTime();
	}
	system("cls");
}
void const Train::printTrains(Train* arr, int N) {

	cout << "Your Trains List: \n";
	for (int i = 0; i < N; i++) {
		cout << setw(12) << arr[i].getDestination() << setw(7)
			<< arr[i].getTrainNumber() << setw(9)
			<< arr[i].getTime() << "\n";
	}
}
void Train::setDestination() {
	destination = cities[rand() % 7];
}
void Train::setTrainNumber() {
	trainNumber = rand() % ((9999 - 1000 + 1) + 1000);
}
void Train::setTime() {
	hours = rand() % ((24 - 1 + 1) + 1);
	minutes = rand() % ((60 - 1) + 1);
}
string const Train::getDestination() {
	return destination;
}
string const Train::getTime() {
	return to_string(hours) + ":" + to_string(minutes);
}
int const Train::getTrainNumber() {
	return trainNumber;
}
void Train::sort(Train* arr, int N) {
	cout << "\n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (arr[j].getTrainNumber() > arr[j + 1].getTrainNumber())
				swap(arr[j], arr[j + 1]);
		}
	}
	cout << "\n";
}
void Train::search(Train* arr, int N, int searchNumber) {
	int flag = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i].getTrainNumber() == searchNumber) {
			flag = 1;
			cout << arr[i].getDestination() << "\t"
				<< arr[i].getTrainNumber() << "\t"
				<< arr[i].getTime() << "\n";
		}
	}
	if (flag == 0) {
		cout << "There are any trains with " << searchNumber << " train number\n";
	}
}
void Train::sortingByDestination(Train* arr, int N) {
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N - 1; j++)
		{
			if (arr[i].getDestination() == arr[i + 1].getDestination()) {
				if (arr[i].getTime() > arr[i + 1].getTime()) {
					swap(arr[i], arr[i + 1]);
				}
			}
			else if (arr[i].getDestination() > arr[i + 1].getDestination()) {
				swap(arr[i], arr[i + 1]);
			}
		}
	}
}
void menu() {
	cout << "Press 1 for initializing TrainList;\n";
	cout << "Press 2 for searching by train number;\n";
	cout << "Press 3 for sorting by destination;\n";
	cout << "Press 4 for clearing the console;\n";
	cout << "Press 5 to exit from the loop;\n";
}