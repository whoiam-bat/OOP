#pragma once
#include <iostream>
using namespace std;

void menu() {
    cout << "1.continue;\n";
    cout << "2.exit.\n";
}


class B1 {
private:
    int a;
public:
    B1(int a) : a(a) {};
    void showB1() {
        cout << "B1= " << a << ";\n";
    }
};