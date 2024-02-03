using namespace std;

#include <iostream>
#include <stdio.h>
#include <time.h>

#include <ctime>

#include "func.h";
#include "func.cpp"


string months[] = { "январь", "февраль", "март", "апрель",
"май", "июнь", "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь" };

int main(void)
{
	setlocale(LC_ALL, "Russian");

	userDate date;

	date.day = 3;
	date.month = 3;
	date.year = 2024;

	string userMonthWord = months[date.month - 1];

	cout << "До конца " << userMonthWord << " осталось - " << getDaysEndMonth(date) << " дней." << endl;

	cout << "До конца месяца осталось - " << getDaysEndMonth(3, 3, 2023) << " дней." << endl;

	cout << "До конца месяца осталось - " << getDaysEndMonth(3, 3) << " дней." << endl;
}
