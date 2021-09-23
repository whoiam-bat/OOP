#include "Time.h"

int main()
{
    Time time1, time2;
    int choice;
    string partDay;
    int hours, minutes, seconds;


    do {
        cout << "Enter hours first object: ";
        cin >> hours;
        if (hours >= 1 && hours <= 12) {
            break;
        }
        else {
            system("cls");
            cout << "Error, incorrect input hours.\nHours (1 - 12)\n";
        }
    } while (true);
    time1.setHours(hours);
    do {
        cout << "Enter minutes first object: ";
        cin >> minutes;
        if (minutes >= 0 && minutes <= 60) {
            break;
        }
        else {
            system("cls");
            cout << "Error, incorrect input minutes.\nMinutes (0 - 60)\n";
        }
    } while (true);
    time1.setMinutes(minutes);
    do {
        cout << "Enter seconds first object: ";
        cin >> seconds;
        if (seconds >= 0 && seconds <= 60) {
            break;
        }
        else {
            system("cls");
            cout << "Error, incorrect input seconds.\nSeconds (0 - 60)\n";
        }
    } while (true);
    time1.setSeconds(seconds);
    do {
        cout << "Enter part day of first object: ";
        cin >> partDay;
        if (partDay == "pm" || partDay == "am") {
            break;
        }
        else {
            system("cls");
            cout << "Error, incorrect input part day.\n(pm - am)\n";
        }
    } while (true);
    time1.setPartDay(partDay);
    system("cls");

    do {
        cout << "Enter hours second object: ";
        cin >> hours;
        if (hours >= 1 && hours <= 12) {
            break;
        }
        else {
            system("cls");
            cout << "Error, incorrect input hours.\nHours (1 - 12)\n";
        }
    } while (true);
    time2.setHours(hours);
    do {
        cout << "Enter minutes second object: ";
        cin >> minutes;
        if (minutes >= 0 && minutes <= 60) {
            break;
        }
        else {
            system("cls");
            cout << "Error, incorrect input minutes.\nMinutes (0 - 60)\n";
        }
    } while (true);
    time2.setMinutes(minutes);
    do {
        cout << "Enter seconds second object: ";
        cin >> seconds;
        if (seconds >= 0 && seconds <= 60) {
            break;
        }
        else {
            system("cls");
            cout << "Error, incorrect input seconds.\nSeconds (0 - 60)\n";
        }
    } while (true);
    time2.setSeconds(seconds);
    do {
        cout << "Enter part day of second object: ";
        cin >> partDay;
        if (partDay == "pm" || partDay == "am") {
            break;
        }
        else {
            system("cls");
            cout << "Error, incorrect input part day.\n(pm - am)\n";
        }
    } while (true);
    time2.setPartDay(partDay);
    system("cls");

    while (true) {
        menu();
        cin >> choice;
        system("cls");
        switch (choice) {
        case 1: {
            cout << "First time object:\n";
            time1.printTime();
            cout << "Second time object:\n";
            time2.printTime();
            break;
        }
        case 2: {
            Time time3;
            time3 = time1 - time2;
            cout << "First time object:\n";
            time1.printTime();
            cout << "Second time object:\n";
            time2.printTime();
            cout << "Difference between:\n";
            time3.printTime();
            break;
        }
        case 3: {
            cout << "First time object:\n";
            time1.printTime();
            cout << "Second time object:\n";
            time2.printTime();
            cout << "\n";
            if (time1.getHours() == time2.getHours()) {
                if (time1.getMinutes() == time2.getMinutes()) {
                    if (time1.getSeconds() == time2.getSeconds()) {
                        cout << "temp1 == temp2\n\n";
                    }
                    else if (time1.getSeconds() > time2.getSeconds()) {
                        cout << "temp1 > temp2\n\n";
                    }
                    else {
                        cout << "temp1 < temp2\n\n";
                    }
                }
                else if (time1.getMinutes() > time2.getMinutes()) {
                    cout << "temp1 > temp2\n\n";
                }
                else {
                    cout << "temp1 < temp2\n\n";
                }
            }
            else if (time1.getHours() > time2.getHours()) {
                cout << "temp1 > temp2\n\n";
            }
            else {
                cout << "temp1 < temp2\n\n";
            }
            break;
        }
        case 4: {
            int angle;
            int hoursArrow = 360 / 12 * time1.getHours();
            int minutesArrow = 360 / 60 * time1.getMinutes();
            angle = abs(hoursArrow - minutesArrow);
            angle = (angle > (360 / 2) ? (360 - angle) : angle);
            cout << "Angle between arrows object time1 is: " << angle << " degree\n\n";
            break;
        }
        case 5: {
            system("cls");
            menu();
            break;
        }
        case 6: {
            system("cls");
            exit(0);
            break;
        }
        case 7: {
            system("cls");
            menu();
            break;
        }
        }
    }

    return 0;
}

