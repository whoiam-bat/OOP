#pragma once
#include<iostream>
#include<string>

using namespace std;

class Number {
private:
	string number;
public:
	string numbers[20] = { "442836451", "440595637", "441324326", "445674938", "448795465",
						"448796587", "447821032", "440123256", "448797452", "441023587",
						"447572637", "446532873", "446237436", "446523298", "447586263",
						"445768762", "447683472", "441625379", "440959853", "446756834"};
	Number();
	string getNumberAt();
};

