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
#include <iomanip> // for date and time formatting

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
	cout << endl << "Number of Sundays that fell on the first of the month during the twentieth century: " << num << endl;
	return 0;
}

int numSundaysFirst()
{
	int firstday, sundaycount, lastday;
	firstday = MON; // January 1st, 1900 is given to be a Monday

	// Define an array of month names
	const char* months[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
						   "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

	// setting the last day of 1900, i.e. 31st December, 1900
	if (isLeapYear(1900))
		lastday = TUE;
	else
		lastday = MON;
	sundaycount = 0;
	for (int year = 1901; year <= 2000; year++) // loop through the years
	{
		for (int month = JAN; month <= DEC; month++) // loop through the months
		{
			firstday = (lastday + 1) % 7; // setting the first day of the month
			if (firstday == SUN) {
				// Print the date formatted as MMM YYYY
				cout  << months[month] << " " << setw(2) << year << endl << "Current number of 1st of Month Sundays = " << sundaycount+1 << endl;
				sundaycount++;
			}

			switch (month)
			{
			case JAN:
			case MAR:
			case MAY:
			case JUL:
			case AUG:
			case OCT:
			case DEC:
				lastday = (firstday + 2) % 7; // setting the last day of the month
				break;
			case APR:
			case JUN:
			case SEP:
			case NOV:
				lastday = (firstday + 1) % 7; // setting the last day of the month
				break;
			case FEB:
				if (isLeapYear(year)) //check if the year is a leap year from function isLeapYear
					lastday = firstday;
				else
					lastday = (firstday + 6) % 7; // setting the last day of the month
				break;
			}
		}
	}
	return sundaycount;
}

// Function to check if the year is a leap year
bool isLeapYear(int year)
{
	if (year % 4 == 0) // check if the year is divisible by 4 must be true
	{
		if (year % 100 == 0) // check if the year is divisible by 100 must be true
		{
			if (year % 400 == 0) // check if the year is divisible by 400 must be true
				return true;
			else
				return false;
		}
		else
			return true; // return true if the year is divisible by 4 and not by 100 it is a leap year
	}
	else
		return false;
}

