#include<iostream>
#include<Windows.h>
#include<fstream>
#include<string>

using namespace std;

struct Person 
{

	string name;
	string surname;
	unsigned int age;
	unsigned int birthday;

	void ShowInfo()
	{
		cout << "\n\tName: " << name << "\n\n\tSyrname: " << surname << "\n\n\tAge: " << age << "\n\n\tDate of birthd: " << birthday << endl;
	};

	string SaveToFile() {
		
		string txt;

		txt = "\n\n\tName: " + name  + "\n\n\tSurname: " + surname + "\n\n\tAge: " + to_string(age) + "\n\n\tBirthday: " + to_string(birthday);
	}
};

	void FillInfo() 
	{
	
		int choise1 = 0;

		int Size = 0;

		cout << "\n\tEnter the number of people you will fill information about: ";
	
		cin >> Size;

		Person *people = new Person[Size];

		for (int i = 0; i < Size; i++)
		{
			cout << "\n\n\tEnter name of person: ";
			cin >> people[i].name;
			cout << "\n\n\tEnter surname of person: ";
			cin >> people[i].surname;
			cout << "\n\n\tEnter age of person: ";
			cin >> people[i].age;
			cout << "\n\n\tEnter date of birthd for person: ";
			cin >> people[i].birthday;
		}

		string SaveFile(int Size, Person *people)
		{
			ofstream file;

			file.open("I.E.txt", ofstream::app);

			for (int i = 0; i < Size; i++)
			{

				file << people[i]; SaveFile(Size, people);
				file.close();
			}
		}
		cout << "\n\n\tTo move back to the menu press [1]" << endl;
		
		cin >> choise1;

		if (int choise1 = 1) {
		
			Sleep(1000);
			system("cls");
			//Menu();
		}
	}


	

	void Menu() {

		int choise = 0;

		cout << "\n\n\tTo fill information about person press [1]" << endl;
		cout << "\n\n\tTo check information about person press [2]" << endl;
		cout << "\n\n\tChoise: ";

		cin >> choise;

		if (int choise = 1) {
			Sleep(1000);
			system("cls");
			FillInfo();
		}
		else if (int choise = 2) {
			Sleep(1000);
			system("cls");
			Person ShowInfo();
		}
	}

	int main() 
	{
		Menu();

	system("pause");
	return 0;
	}