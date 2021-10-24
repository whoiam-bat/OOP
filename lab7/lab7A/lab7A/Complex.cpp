#include "Complex.h"

Number::Number(int real, int imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

int Number::setSize() {
    int size;
    cout << "Enter any even number: ";
f: cin >> size;
    if ((size % 2 != 0) || size <= 0) {
        cout << "Enter exactly even number.\n";
        goto f;
    }
    cin.ignore();
    return size;
}
void Number::setReal(int real) {
    this->real = real;
}
void Number::setImag(int imaginary) {
    this->imaginary = imaginary;
}
int Number::getReal() {
    return real;
}
int Number::getImag() {
    return imaginary;
}

void Number::createComplexNumbers(Number* complex, int size, string* comp) {
    cout << "\nComplex equanations:\n";
    for (int i = 0; i < size / 2; i++) {
        char sign = (complex[i].imaginary > 0) ? '+' : '-';
        comp[i] = "Z(" + to_string(i + 1) + ")= " + to_string(complex[i].real) + " " + sign + " " +
            to_string(abs(complex[i].imaginary)) + "i";

        cout << "Z(" + to_string(i + 1) + ")= " + to_string(complex[i].real) + " " + sign + " " +
            to_string(abs(complex[i].imaginary)) + "i" << "\n";
    }
}
void Number::writeFile(string path, int size, Number* complex) {
    ofstream fout(path);
    int tempReal = 0;
    int tempImag = 0;
    for (int i = 0; i < size / 2; i++) {
    f:
        tempReal = rand() % 41 - 20;
        tempImag = rand() % 41 - 20;

        if (tempReal == 0 || tempImag == 0) {
            goto f;
        }

        complex[i].setReal(tempReal);
        complex[i].setImag(tempImag);
        fout << complex[i];
        tempReal = 0;
        tempImag = 0;
    }
    cout << "Check your file with numbers.\n";
    fout.close();
}
void Number::readFile(string path, int size, Number* complex) {
    ifstream fin;
    try {
        fin.open(path);
        cout << "File successfuly opened!\n";
    }
    catch (const std::exception& ex) {
        cout << "Opening file error!\n";
    }
    for (int i = 0; !fin.eof(); i++) {
        fin >> complex[i];
    }
    fin.close();
}
void Number::printNumbers(int size, Number* complex) {
    for (int i = 0; i < size / 2; i++) {
        cout << complex[i];
    }
}
void Number::fillFileComplexNumbers(string* comp, Number* complex, int size) {
    ofstream fout("Complex.txt");

    for (int i = 0; i < size / 2; i++) {
        fout << comp[i] << "\n";
    }
    cout << "Check your file with complex numbers.\n";
    fout.close();
}

ostream& operator<<(ostream& out, Number& complex) {
    out << complex.real << "\t" << complex.imaginary << "\n";
    return out;
}
istream& operator>>(istream& in, Number& complex) {
    in >> complex.real >> complex.imaginary;
    return in;
}

void menu() {
    cout << "1. to write numbers in file;\n";
    cout << "2. to read numbers from file;\n";
    cout << "3. to create complex numbers;\n";
    cout << "4. print numbers;\n";
    cout << "5. fill file complex numbers;\n";
    cout << "6. call menu;\n";
    cout << "7. clear console;\n";
    cout << "8. exit from the loop.\n";
}
