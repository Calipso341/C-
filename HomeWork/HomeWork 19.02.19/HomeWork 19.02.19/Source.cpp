//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//const int Size = 5;
//
//void FillArray(int arr[], const int Size) {
//
//	for (int i = 0; i < Size; i++)
//	{
//		arr[i] = rand() % 50 + 1;
//	}
//}
//
//void PrintArray(int arr[], const int Size) {
//
//	for (int i = 0; i < Size; i++)
//	{
//		cout << "\n\tArray: " << arr[i];
//	}
//	cout << endl;
//}
//
//int main() {
//
//	srand(unsigned(time(NULL)));
//
//	int arr[Size];
//
//	FillArray(arr, Size);
//	PrintArray(arr, Size);
//
//	system("pause");
//	return 0;
//}
//=================================Task 2==========================
//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//const int Size = 5;
//
//void FillArray(int arr[], const int Size) {
//
//	for (int i = 0; i < Size; i++)
//	{
//		arr[i] = rand() % 50 + 1;
//	}
//}
//
//void PrintArray(int arr[], const int Size) {
//
//	for (int i = 0; i < Size; i++)
//	{
//		cout << "\n\tArray: " << arr[i];
//	}
//	cout << endl;
//}
//
//void FindMaxNumber(int arr[], const int Size) {
//
//	int max = 0;
//
//	for (int i = 0; i < Size; i++)
//	{
//		if (arr[i] >= max) {
//			max = arr[i];
//		}
//	}
//	cout << "\n\tThe max number is: " << max << endl;
//}
//
//void FindSmallestNumber(int arr[], const int Size) {
//
//	int smallest = arr[0];
//
//	for (int i = 0; i < Size; i++)
//	{
//		if (arr[i] < smallest)
//			smallest = arr[i];
//	}
//	cout << "\n\tThe smallest number is: " << smallest << endl;
//}
//
//int main() {
//
//	    srand(unsigned(time(NULL)));
//
//	    int arr[Size];
//	
//		FillArray(arr, Size);
//		PrintArray(arr, Size);
//		FindMaxNumber(arr, Size);
//		FindSmallestNumber(arr, Size);
//
//	system("pause");
//	return 0;
//}


//=================================Task 1==========================
#include<iostream>
#include<ctime>

using namespace std;

const int Size = 5;

void FillArray(int arr[], const int Size) {

	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 50 + 1;
	}
}

void PrintArray(int arr[], const int Size) {

	for (int i = 0; i < Size; i++)
	{
		cout << "\n\tArray: " << arr[i];
	}
	cout << endl;
}

void ReversArray(int arr[], const int Size, int a) {
	for (int i = Size; i >= 0; i++) {

		cout << arr[i];

	}
	cout << endl;
	
}

void SumOfArray(int arr[], const int Size) {

	int sum = 0;

	for (int i = 0; i < Size; i++)
	{
		sum = sum + arr[i];
	}
	cout << "\n\tSum of numbers in array: " << sum << endl;
}

int main() {

	int a = 0;
	int sum = 0;

	int arr[Size];

	FillArray(arr, Size);
	PrintArray(arr, Size);

	cout << "\n\tArray after revers!" << endl;

	ReversArray(arr, Size, a);
	PrintArray(arr, Size);
	SumOfArray(arr, Size);


	system("pause");
	return 0;
}