using namespace std;

#include <time.h>
#include <ctime>

struct userDate
{
	int day;
	int month;
	int year;
};

int getDaysInMonth(int month, int year)
{
	if (year < 0) return -1;
	switch (month) {
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		return 31;
	case 4:case 6:case 9:case 11:
		return 30;
	case 2:
		return 28 + int(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
	default:
		return -1;
	}
}

int getDaysEndMonth(int day, int month, int year) {

	return getDaysInMonth(month, year) - day;
}

//int getDaysEndMonth(struct userDate date) {
//	return getDaysInMonth(date.month, date.year) - date.day;
//}
//
//
//int getDaysEndMonth(int day, int month) {
//	return getDaysInMonth(month, 2024) - day;
//}
