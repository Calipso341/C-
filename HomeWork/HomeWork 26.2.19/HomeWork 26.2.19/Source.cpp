//--------------------Task 3--------------------
//Написати функцію, яка отримує одновимірний масив і повертає ссилку на найменший елемент масиву.За допомогою цієї функції вивести на екран найменший елемент та подвоїти найменший елемент масиву.
#include<iostream>
#include<ctime>

using namespace std;

void FillArray(int arr[], const int Size) {
	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], const int Size) {
	for (int i = 0; i < Size; i++)
	{
		cout << "\n\tArray: " << arr[i];
	}
}

int SmallestNumber(int arr[], const int Size) {
	int small = arr[0];
	for (int i = 0; i < Size; i++)
	{
		if (arr[i] < small) small = arr[i];
	}
	return small;
}
int* FindTheSmallest(int arr[], const int Size) {
	int *minimall = new int;
	*minimall = 10;
	for (int i = 0; i < Size; i++)
	{
		if (arr[i] < *minimall) minimall = &arr[i];
	}
	return minimall;
}

int main() {
	srand(unsigned(time(NULL)));

	const int Size = 5;

	int arr[Size];

	FillArray(arr, Size);
	PrintArray(arr, Size);
	cout << endl;
	cout << "\n\n\tThe smallest number is: " << SmallestNumber(arr, Size) << "\n\n\tSmallest number * 2: " << SmallestNumber(arr, Size) * 2;
	cout << "\n\n\tThe address of the smallest elment: " << FindTheSmallest(arr, Size) << endl;
	




	system("pause");
	return 0;
}

//--------------------Task 2--------------------
//Написать функцію(або шаблон), яка приймає дві ссилки на змінні і виконує обмін значень.За допомогою написаної функції поміняти місцями у матриці перший та другий стовпці.

#include<iostream>

using namespace std;

void Swap(int &a, int &b) {
	int swap = a;
	a = b;
	b = swap;
}

int main() {
	int a = 0;
	int b = 0;

	cout << "\n\t=+=+=+=+=+=+=+=+Swap Machinet=+=+=+=+=+=+=+=+" << endl;
	cout << "\n\tEnter A value: ";
	cin >> a;
	cout << "\n\tEnter B value: ";
	cin >> b;
	cout << "\n\n\tThe A value: " << a << "\tThe B value: " << b << endl;
	Swap(a, b);
	cout << "\n\n\tThe A value: " << a << "\tThe B value: " << b << endl;

	system("pause");
	return 0;
}

//--------------------Task 1--------------------
//Написати функцію, яка замінює всі від’ємні елементи переданого масиву нулями.Примітка!Функція повинна повертати ссилку на відємний елемент.

#include<iostream>
#include<ctime>

using namespace std;

void FillArray(int arr[], const int Size) {
	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 10 + (-10);
	}
}


void PrintArray(int arr[], const int Size) {
	for (int i = 0; i < Size; i++)
	{
		cout << "\n\tArray: " << arr[i] << endl;
	}
}

int ChangeArray(int arr[], const int Size) {
	int ZeroElement = 0;

	for (int i = 0; i < Size; i++)
	{
		if (arr[i] < 0) {
			arr[i] = 0;
			ZeroElement++;
		}
	}
	return ZeroElement;
}

int main() {
	srand(unsigned(time(NULL)));

	const int Size = 5;

	int arr[Size];

	FillArray(arr, Size);
	PrintArray(arr, Size);

	cout << "\n\tArray after replacement!" << endl;

	FillArray(arr, Size);
	ChangeArray(arr, Size);
	PrintArray(arr, Size);

	system("pause");
	return 0;
}