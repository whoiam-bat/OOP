#pragma once

#include <iostream>
#include<math.h>
using namespace std;

class Figure {
private:
    int a;
    int h;
public:
    const double pi = atan(1.0) * 4;
    Figure(int a, int h = 1);
};
