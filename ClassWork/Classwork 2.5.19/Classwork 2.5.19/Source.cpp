#include <iostream>
#include <ctime>

using namespace std;

const int SIZE = 10;

template < typename T1 >
void FillArr(T1 arr[], int const SIZE);

template < typename T1 >
void PrintArr(T1 arr[], int const SIZE);

template < typename T1 >
int ArithmeticMean(T1 arr[], int const SIZE);

template < typename T1>
int BiggestNumber(T1 arr[], int const SIZE);

template < typename T1>
int SmallestNumber(T1 arr[], int const SIZE);


int main()
{
	const int SIZE = 10;
	int arr[SIZE];
	FillArr(arr, SIZE);
	PrintArr(arr, SIZE);
	cout << "\n\tArithmetic mean: " << ArithmeticMean(arr, SIZE) << "; " << endl;
	cout << "\n\tBiggest mean: " << BiggestNumber(arr,SIZE) << "; " << endl;
	cout << "\n\tSmallest mean: " << SmallestNumber(arr, SIZE) << "; " << endl;
	system("pause");
	return 0;
}
template < typename T1 >

void FillArr(T1 arr[], int const SIZE)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10;
	}
}
template < typename T1 >
void PrintArr(T1 arr[SIZE], int const SIZE)
{
	for (int i = 0; i < SIZE; i++) {
		cout << "\tArr: " << arr[i];
		cout << endl;
	}
}
template < typename T1 >
int ArithmeticMean(T1 arr[], const int Size) {
	int sum = 0;
	for (int i = 0; i < Size; i++) {
		sum += arr[i];
	}
    return sum / Size;
}
template < typename T1 >
int BiggestNumber(T1 arr[], int const SIZE) {
	int biggest = 0;
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > biggest) biggest = arr[i];
	}
	return biggest;
}
template < typename T1>
int SmallestNumber(T1 arr[], int const SIZE) {
	int smallest = 1000;
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < smallest) smallest = arr[i];
	}
	return smallest;
}

//Шаблони фунцкій
//#include<iostream>
//
//using namespace std;
//
//template < typename T1, typename T2 >
//T1 Sum(T1 a, T2 b) {
//	return a + b;
//}
////template < typename T1, typename T2 >
////void Demo(T1 a, T2 b)
////{
////	cout << a << endl;
////	cout << b << endl;
////	
////}
//int main()
//{
//	cout << "\tExample: " << Sum(5, 10.2) << endl;
//	cout << "\tExample: " << Sum(10.2, 5) << endl;
//	/*cout << "\n\tExample: " << Sum(5.10, 8) << endl;*/
//	/*cout << "\n\t";
//	Demo(8.4,10.5);
//	Demo("Test", "World");
//	Demo(88, "Test");*/
//	system("pause");
//	return 0;
//}