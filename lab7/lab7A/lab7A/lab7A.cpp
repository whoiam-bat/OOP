#include "Complex.h"


int main()
{
    srand(time(NULL));
    string path = "Numbers.txt";
    int size = Number::setSize();

    Number* complex = new Number[size];
    string* comp = new string[size / 2];

    menu();
    while (true) {
        
        int choice;
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1: {
            Number::writeFile(path, size, complex);
            break;
        }
        case 2: {
            Number::readFile(path, size, complex);
            break;
        }
        case 3: {
            system("cls");
            menu();
            Number::createComplexNumbers(complex, size, comp);
            break;
        }
        case 4: {
            system("cls");
            menu();
            Number::printNumbers(size, complex);
            break;
        }
        case 5: {
            Number::fillFileComplexNumbers(comp, complex, size);
            break;
        }
        case 6: {
            system("cls");
            menu();
            break;
        }
        case 7: {
            system("cls");
            break;
        }
        case 8: {
            system("cls");
            exit(0);
            break;
        }
        }
    }
    return 0;
}


