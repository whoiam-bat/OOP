#include "Time.h"

void Time::printTime() {
    cout << setfill('0') << setw(2) << hours << ":"
        << setfill('0') << setw(2) << minutes << ":"
        << setfill('0') << setw(2) << seconds << "  "
        << partDay << "\n\n";
}
void Time::setHours(int& hours) {
    this->hours = hours;
}
void Time::setMinutes(int& minutes) {
    this->minutes = minutes;
}
void Time::setSeconds(int& seconds) {
    this->seconds = seconds;
}
void Time::setPartDay(string& partDay) {
    this->partDay = partDay;
}
int Time::getHours() {
    return hours;
}
int Time::getMinutes() {
    return minutes;
}
int Time::getSeconds() {
    return seconds;
}
string Time::getPartDay() {
    return partDay;
}

Time operator-(const Time& time1, const Time& time2) {
    Time tempTime;

    tempTime.hours = abs(time1.hours - time2.hours);
    tempTime.minutes = abs(time1.minutes - time2.minutes);
    tempTime.seconds = abs(time1.seconds - time2.seconds);

    return tempTime;
}
void menu() {
    cout << "1 to print time;\n";
    cout << "2 to calculate the time of difference;\n";
    cout << "3 to compare two objects;\n";
    cout << "4 to find the angle between the hands of the clock;\n";
    cout << "5 clear console;\n";
    cout << "6 exit from the cycle;\n";
    cout << "7 to call menu;\n";
}