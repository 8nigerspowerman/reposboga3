#pragma once
#include "Uchenik.h"
#include "Date.h"
#include "Unik.h"
#include <string>
#include <iostream>

using namespace std;

Uchenik::Uchenik(string nam, string sur, Date date, string city, string country) {
	name = nam;
	surname = sur;
	this->date = date;
	city = city;
	country = country;
}

void Uchenik::setPhone(string newPhone) {
	phone = newPhone;
}
void Uchenik::setUnik(Unik newUnik) {
	unik = newUnik;
}
void Uchenik::setGroup(int newGroup) {
	group = newGroup;
}

string Uchenik::getName() { return name; }
string Uchenik::getSurName() { return surname; }
string Uchenik::getDate() { return date.getDate(); }
string Uchenik::getPhone() { return phone; }
string Uchenik::getCity() { return city; }
string Uchenik::getCountry() { return country; }
string Uchenik::getUnik() { return unik.getInfo(); }
string Uchenik::getGroup() { return to_string(group); }

void Uchenik::showInfo() {
	cout << "ФИО" + name + " " + surname + '\n';
	cout << "Дата рождения " + date.getDate() + '\n';
	cout << "Город: страна" + country + "г." + city + '\n';
	cout << unik.getInfo() + " группа:" + to_string(group) << '\n';
}