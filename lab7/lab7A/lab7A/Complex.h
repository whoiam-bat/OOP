#pragma once
#include <iostream>
#include<iomanip>
#include<ctime>
#include<fstream>
#include<string>
#include<cmath>

using namespace std;


class Number {
private:
    int real;
    int imaginary;
public:
    Number(int real = 0, int imaginary = 0);

    friend ostream& operator << (ostream& out, Number& complex);
    friend istream& operator >> (istream& in, Number& complex);

    void setReal(int real);
    void setImag(int imaginary);
    int getReal();
    int getImag();
    static void createComplexNumbers(Number* copmlex, int size, string* comp);
    static void writeFile(string path, int size, Number* complex);
    static void readFile(string path, int size, Number* complex);
    static void printNumbers(int size, Number* complex);
    static void fillFileComplexNumbers(string* comp, Number* complex, int size);
    static int setSize();

};

void menu();


