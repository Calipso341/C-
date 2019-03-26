#include<iostream>
#include<ctime>
#include<Windows.h>

using namespace std;

void FillArr(int **arr, int cols, int rows) {

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}

void PrintArr(int **arr, int cols, int rows) {

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "\t" << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void AddNewRow(int **&arr, int cols, int rows) {

	int NewRow = 0;
	int choise = 0;

	cout << "\n\tDo you want to add new row?\n\n\tIf yes press 1, if no press any key. " << endl;
	cout << "\n\n\tMy choise: ";
	cin >> choise;
	cout << "\n\t" << endl;

	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading..." << endl;
	Sleep(1000);
	system("cls");

	if (choise == 1) {
		
		cout << "\n\tNew row in array has been added!\n" << endl;

		int S = 1;

		int **TmpArr = new int*[rows + 1];
		for (int i = 0; i < rows + 1; i++)
		{
			TmpArr[i] = new int[cols];
		}
		for (int i = 0; i < cols; i++)
		{
			TmpArr[0][i] = rand() % 10;
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				TmpArr[S][j] = arr[i][j];
			}
			S++;
		}
		for (int i = 0; i < rows; i++)
		{
			delete[]arr[i];
			delete[]arr;
			arr = TmpArr;
		}
	}

	else if (choise == 2)  cout << "\n\tThe array hasn`t changed!" << endl;

}


int main() {

	srand(unsigned(time(NULL)));

	int cols = 0;
	int rows = 0;

	cout << "\n\tEnter the number of rows: ";
	cin >> rows;
	cout << "\n\tEnter the number of colons: ";
	cin >> cols;
	cout << endl;

	int **arr = new int *[rows];

	FillArr(arr, cols, rows);
	PrintArr(arr, cols, rows);
	AddNewRow(arr, cols, rows);
	PrintArr(arr, cols, rows + 1);

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}

	delete[]arr;

	system("pause");
	return 0;
}

//====================Example====================
//# include <iostream>
//# include <ctime>
//
//using namespace std;
//
//int main() {
//	srand(unsigned(time(NULL)));
//
//	int cols = 0;
//	int rows = 0;
//
//	cout << "Enter Rows: " << endl;
//	cin >> rows;
//	cout << "Enter Cols: " << endl;
//	cin >> cols;
//
//
//	int **arr = new int *[rows];
//
//	for (int i = 0; i < rows; i++) {
//		arr[i] = new int[cols];
//	}
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			arr[i][j] = rand() % 10;
//		}
//	}
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//
//	for (int i = 0; i < rows; i++) {
//		delete[]arr[i];
//	}
//
//
//	delete[]arr;
//
//	system("pause");
//	return 0;
//}