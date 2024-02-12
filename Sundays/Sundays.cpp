/*

January 1900 was a Monday. The months April, June, September and
November have 30 days, whereas the rest have 31 days, except February
which has 29 or 28 depending on whether the year is leap or not. A leap year
occurs on any year evenly divisible by 4, but not on a century unless it is
divisible by 400. Write a program to find out how many Sundays fell on the
first of the month during the twentieth century (January 1901 to December
2000)?

Program that finds the number of Sundays that occurred on the first
of the month during the twentieth century (from January 1901 to December)

It is given that January 1st, 1900 was a Monday.

*/

#include <iostream>

using namespace std;

enum month {
	JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC 
	};

enum day {
		MON, TUE, WED, THU, FRI, SAT, SUN
	};	

int numSundaysFirst();
bool isLeapYear(int year);



int main() {

	int num;

	num = numSundaysFirst();
	cout << "Number of Sundays that fell on the first of the month during the twentieth century: " << num << endl;
	return 0;
}

int numSundaysFirst()
{
	int firstday, sundaycount, lastday;
	firstday = MON; // January 1st, 1900 is given to be a Monday
	// setting the last day of 1900, i.e. 31st December, 1900
	if (isLeapYear(1900))
		lastday = TUE;
	else
		lastday = MON;
	sundaycount = 0;
	for (int year = 1901; year <= 2000; year++)
	{
		for (int month = JAN; month <= DEC; month++)
		{
			firstday = (lastday + 1) % 7;
			if (firstday == SUN)
				sundaycount++;
			switch (month)
			{
			case JAN:
			case MAR:
			case MAY:
			case JUL:
			case AUG:
			case OCT:
			case DEC:
				lastday = (firstday + 2) % 7;
				break;
			case APR:
			case JUN:
			case SEP:
			case NOV:
				lastday = (firstday + 1) % 7;
				break;
			case FEB:
				if (isLeapYear(year))
					lastday = firstday;
				else
					lastday = (firstday + 6) % 7;
				break;
			}
		}
	}
	return sundaycount;
}

bool isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return true;
			else
				return false;
		}
		else
			return true;
	}
	else
		return false;
}

