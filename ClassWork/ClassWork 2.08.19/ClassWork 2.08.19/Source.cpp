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

	for (int i = 1; i < Size; i++)
	{
		TmpArr[i] = arr[i];
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

//Example
//# include <iostream>
//# include <ctime>
//
//using namespace std;
//
//void Fill(int *const arr, int const size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 10;
//	}
//}
//
//void Print(int *const arr, int const size) {
//	cout << " arr address " << arr << endl;
//	for (int i = 0; i < size; i++) {
//		cout << "Arr [" << i << "]= " << arr[i] << "\t" << " Address = " << arr + i << endl;
//	}
//}
//
//void Push(int *&arr, int size) {
//	int elem = 0;
//	cout << "Enter new element " << endl;
//	cin >> elem;
//	int *tmpArr = new int[size + 1];
//	cout << "rmpArr address = " << tmpArr << endl;
//	for (int i = 0; i < size; i++) {
//		tmpArr[i] = arr[i];
//	}
//	tmpArr[size] = elem;
//
//	delete[]arr;
//	arr = tmpArr;
//}
//
//int main() {
//	srand(unsigned(time(NULL)));
//	//===============Block1====================>
//	/*int size = 0;
//	cout << "Enter arr size: " << endl;
//	cin >> size;
//	int *arr = new int[size];
//	for (int i = 0; i < size; i++) {
//	arr[i] = rand() % 10;
//	cout << "Arr [" << i << "]= " << arr[i] << "\t" << " Address = " << arr + i << endl;
//	}
//	delete[] arr;*/
//	//===============Block1====================>
//	//===============Block2====================>
//	/*int size = 0;
//	cout << "Enter arr size: " << endl;
//	cin >> size;
//	int *arr = new int[size];
//	cout << " arr address " << arr << endl;
//	Fill(arr, size);
//	Print(arr, size);
//	delete[]arr;*/
//	//===============Block2====================>
//	//===============Block3====================>
//	/*int size = 5;
//	int *arr1 = new int[size];
//	int *arr2 = new int[size];
//
//	Fill(arr1, size);
//	Fill(arr2, size);
//	cout << "=========Arr1=============" << endl;
//	Print(arr1, size);
//	cout << "=========Arr2=============" << endl;
//	Print(arr2, size);
//
//	delete[] arr1;
//	arr1 = new int[size];
//
//	for (int i = 0; i < size; i++) {
//	arr1[i] = arr2[i];
//	}
//
//	cout << "=========Arr1====After=========" << endl;
//	Print(arr1, size);
//	cout << "=========Arr2====After=========" << endl;
//	Print(arr2, size);
//
//	delete[] arr1;
//	delete[] arr2;*/
//	//===============Block3====================>
//	//===============Block4====================>
//	int size = 0;
//	cout << "Enter arr size: " << endl;
//	cin >> size;
//	int *arr = new int[size];
//	Fill(arr, size);
//	Print(arr, size);
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