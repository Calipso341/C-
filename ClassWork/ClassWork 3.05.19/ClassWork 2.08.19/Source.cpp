//=====================Task 1=====================
#include<iostream>
#include<ctime>

using namespace std;

void FillArray(int *const arr, int const Size) {
	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray(int *const arr, int const Size) {
	for (int i = 0; i < Size; i++)
	{
		cout << "\n\tArray number " << i << " = " << arr[i] << endl;
	}
}

void PushElement(int *&arr, int Size) {
	
	int Element = 0;

	cout << "\n\tEnter the new element: ";

	cin >> Element;
	
	int *TmpArr = new int[Size + 1];

	for (int i = 0; i < Size; i++)
	{
		TmpArr[i] = arr[i];
	}
	TmpArr[Size] = Element;

	delete[]arr;

	arr = TmpArr;

	PrintArray(arr, Size + 1);
}

void PushOnFirstPlace(int *&arr, int Size) {
	 
	int FirstElement = 0;

	cout << "\n\tEnter the new element for the first place: ";

	cin >> FirstElement;

	int *TmpArr = new int[Size + 1];

	for (int i = 0; i < Size; i++)
	{
		TmpArr[i + 1] = arr[i];
	}
	TmpArr[0] = FirstElement;

	delete[]arr;

	arr = TmpArr;

	PrintArray(arr, Size + 1);
}

int main() {

	srand(unsigned(time(NULL)));

    int Size = 0;

	cout << "\n\tEnter the array size: ";

	cin >> Size;

	int *arr = new int[Size];

	FillArray(arr, Size);
	PrintArray(arr, Size);
	PushElement(arr, Size);
	PushOnFirstPlace(arr, Size);

	system("pause");
	return 0;
}

//=====================Example=====================

//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//int main() {
//	srand(unsigned(time(NULL)));
//
//	int Size = 0;
//
//	cout << "\n\tEnter arr size: ";
//
//	cin >> Size;
//
//	int *arr = new int[Size];
//
//	for (int i = 0; i < Size; i++)
//	{
//		arr[i] = rand() % 10;
//
//		cout << "\n\tArray: [ " << i << " ] = " << arr[i] << "\t " << "Address: " << arr + i << endl;
//	}
//
//	delete[] arr;
//
//	system("pause");
//	return 0;
//}