﻿#include "Figure.h"

int main()
{
    int a, h;
    cout << "1 to find square of circle\n";
    cout << "2 to find square of triangle\n";
    while (true) {
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1: {
            cout << "\nEnter radius: ";
            cin >> a;
            Figure object1(a);
            cout << "\n";
            break;
        }
        case 2: {
            cout << "Enter side: ";
            cin >> a;
            cout << "\nEnter height: ";
            cin >> h;
            Figure object2(a, h);
            cout << "\n";
            break;
        }
        }
    }
    return 0;
}
