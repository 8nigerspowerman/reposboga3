#pragma once
#include <string>

using namespace std;

class Unik
{
private:
	string name;
	string city;
	string country;
public:
	Unik();
	Unik(string name, string c, string coun);
	string getInfo();
};

