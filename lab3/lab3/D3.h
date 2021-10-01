#pragma once
#include "D2.h"


class D3 : public D2 {
private:
    int e;
public:
    D3(int a, int b, int c, int d, int e) : D2(a, b, c, d), e(e) {};
    void showD3() {
        showD2();
        cout << "D3= " << e << ";\n";

    }
};
