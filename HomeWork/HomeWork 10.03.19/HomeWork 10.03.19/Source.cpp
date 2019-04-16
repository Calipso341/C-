#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<Windows.h>

using namespace std;

void FillArr(int arr[], int const Size) {
	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void PrintArr(int arr[], int const Size) {
	for (int i = 0; i < Size; i++)
	{
		cout << "\n\n\tArr: (" << arr[i] << "). " << endl;
	}
}

void NewArr(int *arr, int  Size) {

	arr = (int *)realloc(arr, (Size + 1) * sizeof(int));

	int value = 0;

	cout << "\n\tEnter new value: ";

	cin >> value;

	arr[Size - 1] = value;

	for (int i = 0; i < Size; i++)
	{
		cout << "\n\tArr: (" << arr[i] << "). " << endl;
	}

}

void DeleteArr(int *arr, int Size) {

	int *arr2 = (int *)calloc((Size), sizeof(int));

	Size -= 1;

	int n;

	cout << "\n\tEnter number of element to delete: ";

	cin >> n;

	int tmp = 0;

	for (int i = 0; i < Size + 1; i++)
	{
		if (i == n) {
			tmp--;
		}
		else arr2[tmp] = arr[i];
		tmp++;
	}
}

int main() {

	srand(unsigned(time(NULL)));

	int Size = 0;

	cout << "\n\t\t\t\t\t\tTask 1" << endl;
	Sleep(1000);
	system("cls");

	cout << "\n\tEnte size of arr: ";

	cin >> Size;

	int *arr = (int *)calloc(Size, sizeof(int));

	system("cls");
	FillArr(arr, Size);
	PrintArr(arr, Size);
	NewArr(arr, Size + 1);
	DeleteArr(arr, Size);
	PrintArr(arr, Size);
	free(arr);

	system("pause");
	return 0;
}