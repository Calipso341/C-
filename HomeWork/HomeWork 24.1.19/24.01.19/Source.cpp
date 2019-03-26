#include <iostream>
using namespace std;
void Holliday(int a, int b) {
	if (a == 7 && b == 1) {
		cout << "\n\tChristmas" << endl;
	}
	else if (a == 9, b == 5) {
		cout << "\n\tVictory Day" << endl;
	}
	else if (a == 24, b == 8) {
		cout << "\n\tIndependence Day" << endl;
	}
	else if (a == 8, b == 3) {
		cout << "\n\tWomen's day" << endl;
	}
	else if (a == 28, b == 6) {
		cout << "\n\tDay of Ukrainian constitution" << endl;
	}
}
int main()
{
	int a, b;
	cout << "\n\tEnter your  number of day:" << endl;
	cout << "\n";
	cout << "\t";
	cin >> a;
	cout << "\n\tEnter your  number of Month:" << endl;
	cout << "\n";
	cout << "\t";
	cin >> b;
	Holliday(a, b);
	cout << endl;
	system("pause");
	return 0;
}
