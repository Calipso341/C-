#include <iostream>
#include <ctime>

using namespace std;

int const Size = 10;
int const Size1 = 10;

void FillArray(int arr[Size][Size1], const int Size);
void PrintArray(int arr[Size][Size1], const int Size);
void CheckArray(int arr[Size][Size1], const int Size, int Line);

int main() {
	int arr[Size][Size1];
	FillArray(arr, Size);
	PrintArray(arr, Size);
	cout << endl;
	system("pause");
	return 0;
}

void FillArray(int arr[Size][Size1], const int Size) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < Size; i++) {
		arr[i][i] = rand() % 30;
		for (int j = 0; j < Size; j++) {
			arr[i][j] = rand() % 30;
		}
	}
}

void PrintArray(int arr[Size][Size1], const int Size) {
	for (int i = 0; i < Size; i++) {
		cout << "\n\tArr: ";
		for (int j = 0; j < Size; j++) {
			cout << " " << arr[i][j];
		}
	}
}

void CheckArray(int arr[Size][Size1], const int Size, int Line) {
	if (int arr[Size][Size1], const int Size, int Line) {
		int MaxValue = 0;

	}
}
	