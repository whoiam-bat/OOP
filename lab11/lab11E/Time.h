#pragma once
#include <iostream>
#include<iomanip>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
    string partDay;
public:
    void printTime();
    void setHours(int& hours);
    void setMinutes(int& minutes);
    void setSeconds(int& seconds);
    void setPartDay(string& partDay);
    int getHours();
    int getMinutes();
    int getSeconds();
    string getPartDay();
    friend Time operator - (const Time& time1, const Time& time2);

};

void menu();