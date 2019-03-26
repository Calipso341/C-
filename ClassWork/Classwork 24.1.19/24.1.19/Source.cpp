#include <iostream>
#include <ctime>
using namespace std;
int Size = 10;
void FillArr(int arr[], const int Size);
void PrintArr(int arr[], const int Size);
int FoundLeft(int arr[], const int Size);
void Revers(int arr[], const int Size, int a, int b);
int FoundRight(int arr[], const int Size);
int main()
{
	srand(unsigned(time(NULL)));
	const int Size = 10;
    int arr[Size];
	FillArr(arr,Size);
	PrintArr(arr, Size);
	system("pause");
	return 0;
}
void PrintArr(int arr[], const int Size) {
	for (int i = 0; i < Size; i++) {
		cout << arr[i] << "  ";
	}
}
void FillArr(int arr[], const int Size) {
	for (int i = 0; i < Size; i++) {
		arr[i] = 20 - rand() % 40;
	}
}
int FoundLeft(int arr[], const int Size) {
	for (int i = 0; i < Size; i++) if (arr[i] < 0) return i;
}
int FoundRight(int arr[], const int Size) {
	for (int i = Size -1; i > 0; i--) if (arr[i] < 0) return i;
}
void Revers(int arr[], const int Size, int a, int b) {
	int buffer = arr[a];
	arr[a] = arr[b];
	arr[b] = arr[a];
	arr[b] = buffer;
}