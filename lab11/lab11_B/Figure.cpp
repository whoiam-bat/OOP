#include "Figure.h"

Figure::Figure(int a, int h) {

    if (h == 1) {

        cout << "Square of circle: " << (double)(pi * a * a * h) << "\n";
    }
    else {

        cout << "Square of triangle: " << (a * h) / 2 << "\n";
    }
}