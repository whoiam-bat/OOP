#pragma once

#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class Matr {
private:
	int** mtr;
	int rowSize;
	int colSize;
public:
	Matr(int N, int M) {
		this->rowSize = N;
		this->colSize = M;
		mtr = new int* [rowSize];
		for (int i = 0; i < rowSize; i++)
		{
			mtr[i] = new int[colSize];
		}
		int count = 1;
		for (int i = 0; i < rowSize; i++)
		{
			for (int j = 0; j < colSize; j++)
			{
				mtr[i][j] = rand() % 77;
			}
		}
	}
	void const printMatr();
	void const searchMinIndex();
	void const getElem(int x, int y);
	int getRowSize();
	int getColSize();
	void pasteElem(int x, int y, int element);
	void getSubmatr(int x, int y, int N, int M);
	~Matr() {
		for (int i = 0; i < rowSize; i++)
		{
			delete[] mtr[i];
		}
		delete[] (mtr);
	}

};

void menu();