#pragma once

class B2 {
private:
    int b;
public:
    B2(int b) : b(b) {};
    void showB2() {
        cout << "B2= " << b << ";\n";
    }
};