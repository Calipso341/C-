#include<iostream>
#include <ctime>

using namespace std;

const int Size = 5;
const int Size1 = 5;

template < typename T1>
void FillArray(T1 arr[Size][Size1], const int Size);

template < typename T1>
void PrintArray(T1 arr[Size][Size1], const int Size);

template < typename T1>
void  ArithmeticMean (T1 arr[Size][Size1], const int Size);

int main() {
	srand(unsigned(time(NULL)));
	int sum=0;
	int arr[Size][Size1];
	FillArray(arr, Size);
	PrintArray(arr, Size);
	for (int i = 0; i < Size; i++)
	{
		cout << "\n\n\tThe Arithmetic mean of " << i << " student is: " <<  ArithmeticMean(arr, Size) << endl;
	}
	system("pause");
	return 0;
}

template < typename T1>
void FillArray(T1 arr[Size][Size1], const int Size) {
	for (int i = 0; i < Size; i++) {
		arr[i][i] = rand() %  12;
		for (int j = 0; j < Size; j++) {
			arr[i][j] = rand() % 12;
		}
	}

}

template < typename T1>
void PrintArray(T1 arr[Size][Size1], const int Size) {
	for (int i = 0; i < Size; i++) {
		cout << "\n\tStudent "<< i + 1 <<": Math, Literutre, Computer Science, English, Spaninish: ";
		for (int j = 0; j < Size; j++) {
			cout << " " << arr[i][j];
		}
		cout << " . " << endl;
	}
}

template < typename T1>
void ArithmeticMean(T1 arr[Size][Size1], const int Size) {
	int sum = 0;
	for (int i = 0; i < Size; i++) {
		 sum += arr[i];
	}
	return  sum / Size;
}
