#include<iostream>
#include<string>

using namespace std;

struct Time {
	
	unsigned int hours : 6;
	unsigned int minutes: 7;
	unsigned int seconds: 7;
	unsigned int day: 6;
	unsigned int month: 5;
	unsigned int year: 8;

	void ShowInfo() {

		cout << "\n\tMonth: " << month << "\n\n\tDay: " << day << "\n\n\tYear: " << year << "\n\n\tHour:" << hours  << "\n\n\tMinutes: " << minutes << "\n\n\tSeconds: " << seconds << endl;
	}
};


int main() {

	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	int day = 0;
	int month = 0;
	int year = 0;

	cout << "\n\n\tEnter current hour: ";
	cin >> hours;
	cout << "\n\n\tEnter current minutes: ";
	cin >> minutes;
	cout << "\n\n\tEnter current seconds: ";
	cin >> seconds;
	cout << "\n\n\tEnter current day: ";
	cin >> day;
	cout << "\n\n\tEnter current month: ";
	cin >> month;
	cout << "\n\n\tEnter current year: ";
	cin >> year;

	Time date;

	date.hours = hours;
	date.minutes = minutes;
	date.seconds = seconds;
	date.day = day;
	date.month = month;
	date.year = year;

	date.ShowInfo();

	system("pause");
	return 0;
}