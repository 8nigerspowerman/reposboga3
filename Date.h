#pragma once
#include <string>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int d, int m, int y);
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);

	string getDate();
};

