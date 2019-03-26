#include<iostream>
#include<ctime>

using namespace std;


int main() {

	int a = 0, b = 0, c = 0;;
	char str[255];
	cout << "\n\tEnter your digits: ";
	cin >> a;
	cout << "\n\tEnter your digits: ";
	cin >> b;
	cout << "\n\tEnter your digits: ";
	cin >> c;

	if (a >= 65 && a <= 90 || c >= 65 && c <= 90 || b >= 65 || b <= 90) {
		cout << "\n\t" << a << " in char is: " << (char)a << endl;
		cout << "\n\t" << b << " in char is: " << (char)b << endl;
		cout << "\n\t" << c << " in char is: " << (char)c << endl;
	}


	/*=============Task 2=============*/

	/*char str[255];
	cout << "Enter text" << endl;
	cin >> str;

	for (int i = 0; i < strlen(str); i++) {
		cout << int(str[i]) << "\t";
	}
	cout << endl;
	*/

	system("pause");
	return 0;
}