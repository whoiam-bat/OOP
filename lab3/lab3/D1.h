#pragma once
#include "B1.h"
#include "B2.h"


class D1 : public B1, private B2 {
private:
    int c;
public:
    D1(int a, int b, int c) : B1(a), B2(b), c(c) {};
    void showD1() {
        showB1();
        showB2();
        cout << "D1= " << c << ";\n";

    }
};
