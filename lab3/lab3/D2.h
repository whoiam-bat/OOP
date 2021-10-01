#pragma once
#include "D1.h"



class D2 : private D1 {
private:
    int d;
public:
    D2(int a, int b, int c, int d) : D1(a, b, c), d(d) {};
    void showD2() {
        showD1();
        cout << "D2= " << d << ";\n";

    }
};