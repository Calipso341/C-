#include<iostream>
#include<ctime>

using namespace std;

const int Size = 5;

template <typename T1 >
void FillArray(T1 arr[Size][Size], const int Size) {
	for (int i = 0; i < Size; i++) {
		arr[i][i] = rand() % 5;
		for (int j = 0; j < Size; j++) {
			arr[i][j] = rand() % 5;
		}
	}
}

template <typename T1>
void PrintArray(T1 arr, const int Size) {
	for (int i = 0; i < Size; i++) {
		cout << "\n\tArray: ";
		for (int j = 0; j < Size; i++) {
			cout << " " << arr[i][j];
		}
	}
}

int main() {
	int arr[Size][Size];

	FillArray(arr, Size);
	PrintArray(arr, Size);

	system("pause");
	return 0;
}
//______________________Task 2______________________

//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//void FillArray(int arr[], const int Size) {
//	for (int i = 0; i < Size; i++)
//	{
//		arr[i] = rand() % 17;
//	}
//}
//
//void PrintArray(int arr[], const int Size) {
//	for (int i = 0; i < Size; i++)
//	{
//		cout << "\n\tNumber: " << arr[i];
//	}
//}
//
//void ProccesingInArray(int arr[], const int Size, int &Sum, int &Dobutok) {
//	for (int i = 0; i < Size; i++)
//	{
//		Sum += arr[i];
//		Dobutok += arr[i] * Size;
//	}
//}
//
//
//int main() {
//
//	int const Size = 10;
//	int Sum = 0;
//	int Dobutok = 0;
//	int arr[Size];
//
//	FillArray(arr, Size);
//	PrintArray(arr, Size);
//	cout << "\n\n\t<---------------------------------->" << endl;
//	ProccesingInArray(arr, Size, Sum, Dobutok);
//	cout << "\n\tSum of array is: " << Sum << " . " << endl;
//	cout << "\n\tDobutok of array is: " << Dobutok << " . " << endl;
//
//	system("pause");
//	return 0;
//}

//______________________Task 1______________________

//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//
//void FillArray(int arr[], const int Size) {
//	for (int i = 0; i < Size; i++)
//	{
//		arr[i] = rand() % 10 + 1;
//	}
//}
//
//
//void PrintArray(int arr[], const int Size) {
//	for (int i = 0; i < Size; i++)
//	{
//		cout << "\n\tArray: ";
//		cout << arr[i];
//	}
//}
//
//
//void PairElements(int *arr, int *thirdNumber, const int Size) {
//	for (int i = 1; i < Size; i += 2)
//	{
//		cout << "\n\tElements on pair places of array: ";
//		cout << " " <<  *(thirdNumber - 2 + i) << " ";
//	}
//	cout << endl << endl;
//}
//
//int main() {
//
//	srand(unsigned(time(NULL)));
//
//	const int Size = 10;
//	int arr[Size];
//
//	FillArray(arr, Size);
//	PrintArray(arr, Size);
//
//	cout << "\n\n\t<========================================>" << endl;
//
//	PairElements(arr, arr + 2, Size);
//	
//	system("pause");
//	return 0;
//}