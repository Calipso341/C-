#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

struct Player {

	string name;
	string surname;
	unsigned short age;
	string position;
	int price;

	void ShowPerson() {
	 
		cout << "\n\n\tName: " << name << "\n\n\tSurname: " << surname << "\n\n\tAge: " << age << "\n\n\tPosition: " << position << "\n\n\tPrice: " << price << endl;
	}

};
struct Team {
	string country;
	string city;
	string name;
	string coach;
	unsigned short wins;
	unsigned short draws;
	unsigned int losses;
	unsigned  short teamSize;

	void ShowInfo() {
		cout << "\n\n\tCoutnry: " << country << "\n\n\tCity: " << city << "\n\n\tName: " << name << "\n\n\tCoach: " << coach << "\n\n\tWins: " << wins << "\n\n\tDraws: " << draws << "\n\n\tLosses: " << losses << "\n\n\tTeamSize: " << teamSize << endl;
	}
	Player *player = new Player[teamSize];
};

void FillPlayer(Player *player, const int teamSize) {

	for (int i = 0; i < teamSize; i++)
	{
		cout << "\n\tEnter player name: ";
		cin >> player[i].name;
		cout << "\n\tEnter player surename: ";
		cin >> player[i].surname;
		cout << "\n\tEnter player age: ";
		cin >> player[i].age;
		cout << "\n\tEnter player position: ";
		cin >> player[i].position;
		cout << "\n\tEnter player price ";
		cin >> player[i].price;

			player[i].ShowPerson();
	}
}

void ShowPlayer(Player *player, const int teamSize) {
	for (int i = 0; i < teamSize; i++)
	{
		player[i].ShowPerson();
		cout << "\n\t============================================" << endl;
	}
}
int main() {

	int teamSize = 0;

	cout << "\n\tEnter team size: ";
	cin >> teamSize;
	system("cls");

	Team Karpaty;

	Karpaty.country = "Ukraine";
	Karpaty.city = "Lviv";
	Karpaty.coach = "Bill";
	Karpaty.name = "Karpaty";
	Karpaty.wins = 4;
	Karpaty.losses = 4;
	Karpaty.draws = 4;
	Karpaty.teamSize = teamSize;
	Karpaty.ShowInfo();

	FillPlayer(Karpaty.player, Karpaty.teamSize);
	system("cls");
	ShowPlayer(Karpaty.player, Karpaty.teamSize);

	/*Karpaty.player[0].name = "Robert";
	Karpaty.player[0].surname = "Robertson";
	Karpaty.player[0].position = "Halfback";
	Karpaty.player[0].age = 25;
	Karpaty.player[0].price = 25;
	Karpaty.player[0].ShowPerson();

	Karpaty.player[1].name = "Karl";
	Karpaty.player[1].surname = "Karlson";
	Karpaty.player[1].position = "Halfback";
	Karpaty.player[1].age = 32;
	Karpaty.player[1].price = 45555;
	Karpaty.player[1].ShowPerson();


	Karpaty.player[0].ShowPerson();
	Karpaty.player[1].ShowPerson();*/

	/*int teamSize;
	cout << "\n\tEnter team size: ";
	cin >> teamSize;

	cout << "\n\t============================================" << endl;
	
	Player *player = new Player[teamSize];

	FillPlayer(player, teamSize);

	system("cls");

	ShowPlayer(player, teamSize);
 
	delete [] player;*/
	system("pause");
	return 0;
}