#include<iostream>
#include<conio.h>

using namespace std;

int main() 
{
	cout << "\n\nEnter [1] to see next \"cout\"" << endl;
	
	while (true) {
		int key = _getch();
		if (key == 49)
		{
			cout << "Hello!" << endl;
		}
		else if (key == 48) 
		{
			cout << "Bye!" << endl;
		}
	}
	system("pause");
	return(0);
}