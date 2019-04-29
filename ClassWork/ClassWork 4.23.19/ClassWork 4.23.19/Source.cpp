#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>

using namespace std;

class Cash
{
public:
	string name, surname, currency;
	long long number;
	long limit;
	int age, money;

	void ShowInfo()
	{
		cout << "\n\n\tName: " << name << "\n\n\tSurname: " << surname << "\n\n\tAge: " << age << "\n\n\tCars number : " << number << "\n\n\tCard limit : " << limit << "\n\n\tCurrency: " << currency << "\n\n\tMoney: " << money;
	}
};

void GetDirectInfo(Cash person) 
{
	int number = 0;

	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
	Sleep(1000);
	system("cls");
	
	cout << "\n\n\tEnter number of card you wand to get money from: ";
	cin >> number;

	if (number == person.number) 
	{
		int amount = 0;

		cout << "\n\n\tEnter amount that you want to get from your card: ";
		cin >> amount;
		
		if (amount >= person.number) 
		{
			string file = "Info.txt";

			ofstream info;

			info.open(file);

			person.number - amount;

			info.close();
		} 
	}
}

void FillCash() 
{
	Cash person;
	person.name;
	person.surname;
	person.age;
	person.number;
	person.limit;
	person.currency;
	person.money;

	string file = "Info.txt";

	ofstream info;

	info.open(file, ofstream::app);

	cout << "\n\n\tEnter your name: ";
	cin >> person.name;
	cout << "\n\n\tEnter your surname: ";
	cin >> person.surname;
	cout << "\n\n\tEnter your age: ";
	cin >> person.age;
	cout << "\n\n\tEnter your number of card: ";
	cin >> person.number;
	cout << "\n\n\tEnter your limit for card: ";
	cin >> person.limit;
	cout << "\n\n\tEnter currency for card: ";
	cin >> person.currency;
	cout << "\n\n\tEnter your amount that you want to enter on card: ";
	cin >> person.money;
	info << "\n\n\t::::::::::::::::::::::::::::::::::::::\n\n\tName: " << person.name << "\n\n\tSurname: " << person.surname << "\n\n\tAge: " << person.age << "\n\n\tCars number : " << person.number << "\n\n\tCard limit : " << person.limit << "\n\n\tCurrency: " << person.currency << "\n\n\tMoney: " << person.money;
	info.close();	
}

void GetInfo()
{
	string file = "Info.txt";

	ifstream info;

	info.open(file);

	if (!info.is_open())
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tFile does not exit! Creat one before read it!";
		Sleep(3000);
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
		Sleep(1000);
		system("cls");
	}
	else
	{
		char ch;

		while (info.get(ch))
		{
			cout << ch;
		}
	}
}

void Menu() 
{
	int choise = 0;
	
	cout << "\n\t\t\t\t\t\tBank Alfa " << "\n\n\tTo create card, PRESS [1]." << "\n\n\tTo view info about cards, PRESS [2]." << "\n\n\tTo get money from your credit card, PRESS [3]." << "\n\n\tTo exit, PRESS [0]" << endl << endl;

	cout << "\n\n\tYour choise: ";

	cin >> choise;

	if (choise == 1) 
	{
		system("cls");
		FillCash();
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaving info in file...";
		Sleep(3000);
		system("cls");
		Menu();
	}
	else if (choise == 2) 
	{
		int Choise1 = 0;

		system("cls");
		GetInfo();
		cout << "\n\n\t::::::::::::::::::::::::::::::::::::::\n\n\tTo move back to menu, PRESS [1]" << "\n\n\tYour choise: ";
		cin >> Choise1;

		if (Choise1 == 1)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
			Sleep(1000);
			system("cls");
			Menu();
		}
	}
	else if (choise == 3) 
	{
		system("cls");
		GetDirectInfo(Cash);
	}
	else if (choise == 0)
	{
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tBye!";
	Sleep(1000);
	exit(0);
	}
	else 
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tOpen your eyes and PRESS correct buttons!";
		Sleep(3000);
		system("cls");
		Menu();
	}
}

int main()
{
	Menu();

	system("pause");
	return(0);
}