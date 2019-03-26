#include<iostream>
#include <ctime>

using namespace std;

void DoubleNumber(int Num)
{
	if (Num >= 2)
	{
		DoubleNumber(Num / 2);
	}
	cout <<  Num % 2;
}

int main()
{
	int Num = 0;
	cout << "\n\tEnter number: ";
	cin >> Num;
	cout << "\n\tNumber in binary system: ";
	DoubleNumber(Num);
	cout << endl;
	system("pause");
	return 0;
}