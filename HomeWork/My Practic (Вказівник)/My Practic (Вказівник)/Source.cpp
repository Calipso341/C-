#include <iostream>

using namespace std;

void FillArr(int *arr[], int const Students, int math, int fiz, int engl) {

	for (int i = 0; i < Students; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cout << "\nEnter mark for " << i + 1 << " student for math: ";
			cin >> math;
			cout << "\nEnter mark for " << i + 1 << " student for fiz: ";
			cin >> fiz;
			cout << "\nEnter mark for " << i + 1 << " student for engl: ";
			cin >> engl;
		}
	}
}

void PrintArr(int *arr[], int const Students, int math, int fiz, int engl) {

	for (int i = 0; i < Students; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cout << "\nMarks for first student: \nmath = " << math << "\nfiz = " << fiz << "\nengl = " << engl << endl;
		}
	}

}

int main() {

	int arr;

	int math = 0;
	int fiz = 0;
	int engl = 0;

	int Students = 0;

	int *arr = new int[Students];

	FillArr(arr, Students, math, fiz, engl);


	/*int num = 0;
	int *ptrnum = &num;

	cout << "\n\tEnter number: ";
	cin >> num;
	cout << "\n\tYour number: " << *ptrnum;
	cout << "\n\tMemory of number: " << &num << endl;*/
	system("pause");
	return 0;
}