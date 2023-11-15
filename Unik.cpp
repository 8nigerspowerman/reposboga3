#include "Unik.h"
#include <string>

using namespace std;

Unik::Unik() {};

Unik::Unik(string name, string c, string coun) {
	name = name;
	city = c;
	country = coun;
}

string Unik::getInfo() {
	return "Университет " + name + " в городе " + city + ". " + country;
}