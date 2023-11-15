#pragma once
#include "Date.h"
#include <string>

using namespace std;

Date::Date() {};

Date::Date(int d, int m, int y){
	if (y > 0) year = y;
	else year = 1999;
	if (m > 0 and m <= 12) month = m;
	else month = 1;
	if (d > 0) {
		if (m == 2 && d <= 28) day = d;
		else if (d <= 30) day = d;
		else d = 1;
	}
	else d = 1;
}

void Date::setYear(int y) {
	if (y > 0) year = y;
	else year = 1999;
}

void Date::setMonth(int m) {
	if (m > 0 and m <= 12) month = m;
	else month = 1;
}

void Date::setDay(int d) {
	if (d > 0) {
		if (month == 2 && d <= 28) day = d;
		else if (d <= 30) day = d;
		else d = 1;
	}
	else d = 1;
}

string Date::getDate() {
	return to_string(day) + "." + to_string(month) + "." + to_string(year);
}