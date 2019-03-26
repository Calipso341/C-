#include<iostream>
#include<ctime>
using namespace std;

template < typename T1 >
int MyCard(T1 a, T1 b);

template < typename T1 >
int AiCard(T1 a, T1 b);

int MySum = 0;
int AiSum = 0;

int main()
{
	srand(unsigned(time(NULL)));
	int Choise = 1;
	int a = 0;
	int b = 0;
	cout << "\n\t\t\t\t\t\tGame 21\n" << "\n\tInstructions: to make move press \"1\" . That player who reach 21 points first win!\n\n\tYour opponent is AI.\n\n\tNow make your move! Press 1 : ";
	do {
		cin >> Choise;
		if (Choise == 1) {
			MySum += MyCard(a, b);
			cout << "\n\tMy sum of points: " << MySum << endl;
			AiSum += AiCard(a, b);
			cout << "\n\tAI sum of points: " << AiSum << endl;
			cout << "\n\tDo you want to continue? If yes, press 1! ";
			cin >> Choise;
			if (Choise == 1) {
				MySum += MyCard(a, b);
				cout << "\n\tMy sum of points: " << MySum << endl;
				AiSum += AiCard(a, b);
				cout << "\n\tAI sum of points: " << AiSum << endl;
				cout << "\n\tDo you want to continue? If yes, press 1! ";
				if (AiSum >= 21) {
					cout << "\n\n\tAI win! " << endl;
				}
				else cout << "\n\n\tYou win! Congratulations!" << endl;
				cin >> Choise;
				if (Choise == 1)
					MySum += MyCard(a, b);
				cout << "\n\tMy sum of points: " << MySum << endl;
				AiSum += AiCard(a, b);
				cout << "\n\tAI sum of points: " << AiSum << endl;
				cout << "\n\tDo you want to continue? If yes, press 1! ";
				cin >> Choise;
				if (AiSum >= 21) {
					cout << "\n\n\tAI win! " << endl;
				}
				else cout << "\n\n\tYou win! Congratulations!" << endl;
			}

		}
		else cout << "\n\tWrong button!" << endl;
	} while (AiSum >= 21 || MySum >= 21);
	system("pause");
	return 0;
}

template < typename T1 >
int MyCard(T1 a, T1 b) {
	int LocalMySum = 0;
	a = rand() % 10;
	b = rand() % 10;
	LocalMySum = a + b;
	cout << "\n\tNumber of my points: " << a << " and " <<  b << " . " << endl;
	return LocalMySum;
}

template < typename T1 >
int AiCard(T1 a, T1 b) {
	int LocalAISum = 0;
	a = rand() % 10;
	b = rand() % 10;
	LocalAISum = a + b;
	return LocalAISum;
}