#include<iostream>
#include<string>

using namespace std;

void counter(char *str, int &counterLat, int &counterNum, int &counterSymbol) {

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
		{
			counterLat++;
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			counterNum++;
		}
		else if (str[i] >= 32 && str[i] <= 47) 
		{
			counterSymbol++;
		}
	}
}
int main() {

	int counterLat = 0;
	int counterNum = 0;
	int counterSymbol = 0;

	char str[] = "Hello123///";

	counter(str, counterLat, counterNum, counterSymbol);
	cout << "Latin symbols: " << counterLat << endl;
	cout << "Numbers: " << counterNum << endl;
	cout << "Symbols: " << counterSymbol << endl;
	
	/*srand(unsigned(time(NULL)));

	string str1 = "hello";

	string str2 = "world";

	string res = str1 + " " + str2 + " - my text";

	cout << res << endl << endl;

	strlen(res);*/

	/*char str1[255];
	char str2[255];

	cin >> str1 >> str2;*/

	/*cout << str1 << " " << str2 << endl;*/

	/*strcat_s(str1, str2);

	cout << str1 << endl;*/

	/*char str[255];

	cin >> str;

	cout << strlength(str) << endl;*/

	system("pause");
	return 0;
}