#include "B1.h"
#include "B2.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"


int main()
{
    while (true) {
        int choice;
        menu();
        cin >> choice;
        switch (choice) {
        case 1: {
            int a, b, c, d, e;
            cout << "Enter a value: ";
            cin >> a;
            cout << "Enter b value: ";
            cin >> b;
            cout << "Enter c value: ";
            cin >> c;
            cout << "Enter d value: ";
            cin >> d;
            cout << "Enter e value: ";
            cin >> e;
            system("cls");
            D3 ob(a, b, c, d, e);
            ob.showD3();
            cout << "\n";
            break;
        }
        case 2: {
            system("cls");
            exit(0);
            break;
        }
        }
    }
    return 0;
}

