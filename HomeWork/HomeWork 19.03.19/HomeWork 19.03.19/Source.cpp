#include<iostream>
#include<string>
#include<ctime>

using namespace std;


void cript(char arr[255], char arrb[255], int arrint[255], int crpt = 0)
{
	for (int i = 0; i < strlen(arr); i++)
	{
		arrint[i] = arr[i];
		arrint[i] += crpt;
	}
	for (int i = 0; i < strlen(arr); i++)
	{
		arr[i] = (char)arrint[i];
	}
}
void decript(char arr[255], char arrb[255], int arrint[255], int crpt = 0)
{
	for (int i = 0; i < strlen(arr); i++)
	{
		arrint[i] -= crpt;
	}
	for (int i = 0; i < strlen(arr); i++)
	{
		arr[i] = (char)arrint[i];
	}
}
void print(int arrint[255], char arr[255])
{
	cout << arr;

}
int main()
{
	int crpt = 0;
	char arrb[255];
	char arr[255];
	int arrint[255];
	int dec = 0;
	char var;
	while (true)
	{
		system("cls");
		cout << "Enter string ::";
		cin >> arr;
		cout << "Enter crypt ::";
		cin >> crpt;
		cript(arr, arrb, arrint, crpt);
		cout << "CRYPT\nvvvvv\n\n";
		print(arrint, arr);
		cout << "\nDecript?(y/n)";
		cin >> var;
		if (var == 'y')
		{
			cout << "DECRYPT\nvvvvv\n\n";
			decript(arr, arrb, arrint, crpt);
			print(arrint, arr);
		}


		cout << endl;
		system("pause");
		cout << "EXIT?\nPress-0\n";
		cin >> dec;
		if (dec == 0)
		{
			break;
		}
	}
	return 0;
}
