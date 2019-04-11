#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>

using namespace std;

struct Info {

	string name;
	string surname;
	short int number;

	void ShowInfo() {

		cout << "\n\n\tName: " << name << "\n\n\tSurname: " << surname << "\n\n\tPhone number: " << number << endl;
	};

	string SaveFile() {

		string txt;

		txt = "\n\tName: " + name + "\n\n\tSurname: " + surname + "\n\n\tPhone number: " + to_string(number);

		return txt;
	}
};

void FillInfo() {

	int Size = 0;

	cout << "\n\tEnter number of abonemnets: ";

	cin >> Size;

	Info *abonement = new Info[Size];

	for (int i = 0; i < Size; i++)
	{
		cout << "\n\tEnter name of abonement: ";
		cin >> abonement[i].name;
		cout << "\n\tEnter surname of abonement: ";
		cin >> abonement[i].surname;
		cout << "\n\tEnter phone number of abonement: ";
		cin >> abonement[i].number;
	}
	ofstream file;

	file.open("PhoneBook.txt", ofstream::app);

	for (int i = 0; i < Size; i++)
	{
		file << abonement[i].SaveFile();
		file.close();
	}

}

int main() {

	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPhone book";
	Sleep(1000);
	system("cls");

	FillInfo();
	
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
	Sleep(1000);
	system("cls");

	cout << "\n\n\tInformation is saved! Go to the txt file and check it!" << endl << endl;

	system("pause");
	return 0;
}
