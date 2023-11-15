#include <iostream>
#include <string>

#include "Uchenik.h"
#include "Date.h"
#include "Unik.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    Unik bsu("БГУ", "Улан-Удэ", "Россия");
    Date date(29, 11, 1998);
    Uchenik uchenik("Олег", "Выфыв", date, "Уфа", " Россия");
    uchenik.setGroup(22);
    uchenik.setUnik(bsu);

    uchenik.showInfo();
}