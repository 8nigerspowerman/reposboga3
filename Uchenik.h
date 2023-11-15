#pragma once
#include <string>
#include "Date.h"
#include "Unik.h"

using namespace std;

class Uchenik
{
private:
	string name;
	string surname;
	Date date;
	string phone;
	string city;
	string country;
	Unik unik;
	int group;
public:
	Uchenik(string nam, string sur, Date date, string city, string country);
	void setPhone(string newPhone);
	void setUnik(Unik newUnik);
	void setGroup(int newGroup);

	string getName();
	string getSurName();
	string getDate();
	string getPhone();
	string getCity();
	string getCountry();
	string getUnik();
	string getGroup();

	void showInfo();
};

