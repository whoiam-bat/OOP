#include "Matr.h"

int Matr::getRowSize() {
	return rowSize;
}
int Matr::getColSize() {
	return colSize;
}
void const Matr::printMatr() {
	cout << "\n";
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cout << mtr[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
}
void const Matr::searchMinIndex() {
	int min = INT_MAX;
	cout << "\n";
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			if (mtr[i][j] < min) {
				min = mtr[i][j];
			}
		}
	}
	cout << "\nmin = " << min << "\n";
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			if (mtr[i][j] == min) {
				cout << "i :" << i << " j : " << j;
			}
		}
	}
	cout << "\n";
}
void const Matr::getElem(int x, int y) {
	cout << "\n";
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			if (x == i && y == j) {
				cout << mtr[i][i] << "\n";
			}
		}
	}
	cout << "\n";
}
void Matr::pasteElem(int x, int y, int element) {
	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++) {
			if (x == j && y == i) {
				mtr[i][j] = element;
			}
		}
	}
}
void Matr::getSubmatr(int x, int y, int N, int M) {
	cout << "\n";
	for (int i = y; i <= N; i++) {
		for (int j = x; j <= M; j++) {
			cout << mtr[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
}
void menu() {
	cout << "1 - print array\n";
	cout << "2 - search coordinate a minimal element\n";
	cout << "3 - get element\n";
	cout << "4 - paste element\n";
	cout << "5 - get submatrix\n";
	cout << "6 - clear console\n";
	cout << "7 - exit form the loop\n";
	cout << "Enter your choice\n\n";
}