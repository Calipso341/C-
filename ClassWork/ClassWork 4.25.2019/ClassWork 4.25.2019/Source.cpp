#include<iostream>
#include<Windows.h>
#include<fstream>
#include<string>

using namespace std;

void Menu() 
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tMenu" << endl << endl;
}
void Login() 
{
	string login;
	string password;

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTo enter the program, please, enter information below." << endl;
	cout << "\n\t\t\t\t\t\tEnter your login: ";
	cin >> login;
	cout << "\n\t\t\t\t\t\tEnter your password: ";
	cin >> password;

	string Info = "Login.txt";

	ifstream Login;

	string buflog;
	string bufpasswd;

	Login.open(Info);

	if (Login.is_open()) 
	{
		getline(Login, buflog);
		getline(Login, bufpasswd);
	}

	if (password == bufpasswd, login == buflog)
	{
		Menu();
	}

}

int main() 
{
	Login();
	cout << endl << endl;

	system("pause");
	return(0);
}