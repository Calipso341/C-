#include<iostream>
#include<Windows.h>
#include<string>
#include<fstream>

using namespace std;

struct WorkerInfo 
{
	string name;
	string surname;
	string discription;
	string post;
	short int phone;
	short int age;
	short int workdays;
	short int weekends;
};


void FillInfo() 
{

	string name;
	string surname;
	string discription;
	string post;
	short int phone;
	short int age;
	short int workdays;
	short int weekends;

	int Size = 0;

	cout << "\n\n\tEneter number of workers: ";

	cin >> Size;

	WorkerInfo *worker = new WorkerInfo[Size];

	string file = "Info.txt";

	ofstream info;

	info.open(file,ofstream::app);

	for (int i = 0; i < Size; i++)
	{
		cout << "\n\n\tEnter the name: ";
		cin >> worker[i].name;
		cout << "\n\n\tEnter tne surname: ";
		cin >> worker[i].surname;
		cout << "\n\n\tEnter the discription: ";
		cin >> worker[i].discription;
		cout << "\n\n\tEnter the post: ";
		cin >> worker[i].post;
		cout << "\n\n\tEnter the phone number: ";
		cin >> worker[i].phone;
		cout << "\n\n\tEnter the age: ";
		cin >> worker[i].age;
		cout << "\n\n\tEnter the number of work daays: ";
		cin >> worker[i].workdays;
		cout << "\n\n\tEnter the number of weekends: ";
		cin >> worker[i].weekends;
		cout << "\n\n\t";
		info << "\n\n\tName: " << name << "\n\n\tSurname: " << surname << "\n\n\tDiskription: " << discription << "\n\n\tPost: " << post << "\n\n\tPhone: " << to_string(phone) << "\n\n\tAge: " << to_string(age) << "\n\n\tWork days: " << to_string(workdays) << "\n\n\tWeekends: " << to_string(weekends);
		info.close();
	}


}

void Menu()
{
	int MenuChoise = 0;

	cout << "\n\tTo fill information about employee, PRESS [1]. " << "\n\n\tTo add new employee, PRESS [2]. " << "\n\n\tTo delete an employee and info about him, PRESS [3]. " << "\n\n\tTo see information about all employees, PRESS [4]. " << "\n\n\tTo see information about direct employee, PRESS [5]. " << "\n\n\tTo exit, PRESS [0]. " << "\n\n\tYour choise: ";

	cin >> MenuChoise;

	if (int MenuChoise = 1) 
	{
		FillInfo();
	}
}

void Login(string log, string passwd, string log1, string passwd1)
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTo enter the program, please, enter info below." << endl;
	cout << "\n\t\t\t\t\t\tEnter your login: ";
	cin >> log1;
	cout << "\n\t\t\t\t\t\tEnter your password: ";
	cin >> passwd1;

	if (log1 == log && passwd1 == passwd) {

		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tAccess is alowed.";
		Sleep(1000);
		system("cls");
		Menu();
	}
	else
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tBad password or login. Access denied." << endl << endl;
	}
}

int main()
{
	string log = "1";
	string passwd = "1";

	string log1;
	string passwd1;

	Login(log, passwd, log1, passwd1);

	system("pause");
	return 0;
}