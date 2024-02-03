#include <time.h>
#include <ctime>
using namespace std;

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

struct userDate
{
	int day;
	int month;
	int year;
};

int getDaysEndMonth(struct userDate date) {
	return getDaysInMonth(date.month, date.year) - date.day;
}

int getDaysEndMonth(int day, int month, int year) {

	return getDaysInMonth(month, year) - day;
}

int getDaysEndMonth(int day, int month) {
	time_t now = time(0);
	tm* ltm = localtime(&now);

	return getDaysInMonth(month, 1970 + ltm->tm_year) - day;
}
