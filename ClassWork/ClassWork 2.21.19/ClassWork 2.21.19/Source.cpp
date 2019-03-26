//========================== Task 3 ==========================

#include<iostream>
#include<ctime>

using namespace std;

void FillArray(int arr[], int Size) {

	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void FillArray(int arr[], const int Size) {

	for (int i = 0; i < Size; i++)
	{
		cout << "\n\tArray: " << arr[i];
	}
	cout << endl;
}

void TakaANumber(int arr, const int Size) {
	int choose = 0;

	cout << "\n\tChoose a number in array about which you want to get info: ";

	cin >> choose;



}


int main() {

	srand(unsigned(time(NULL)));

	const int Size = 5;
	int arr[Size];

	FillArray(arr, Size);
    FillArray(arr, Size);



	system("pause");
	return 0;
}

//========================== Task 2 ==========================

//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//int main() {
//	srand(unsigned(time(NULL)));
//
//	int *a = new int;
//    double *b = new double;
//	long *c = new long;
//
//	*a = rand() % 10;
//	*b = rand() % 10;
//	*c = rand() % 10;
//
//	cout << "\n\tA = " << *a << "\n\n\tB = " << *b << "\n\n\tC = " << *c << endl;
//
//	int sum = *a * *b * *c;
//
//	cout << "\n\tSum of these numbers is: " << sum << endl;
//
//	delete a, b, c;
//	
//
//	system("pause");
//	return 0;
//}



//========================== Task 1 ==========================

//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//
//template < typename T1 >
//void FillArray(T1 arr[], const int Size) {
//
//	for (int i = 0; i < Size; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//
//}
//
//template < typename T1 >
//void PrintArray(T1 arr3[], const int Size1) {
//
//	for (int i = 0; i < Size1; i++)
//	{
//		cout << "\n\tArray: " << arr3[i];
//	}
//	cout << endl;
//}
//
//template < typename T1 >
//void ConectArray(T1 newArr[], T1 arr[], T1 arr2[], const int Size) {
//	int tmp = 0;
//	for (int i = 0; i < Size*2; i++) {
//		if (i <=4 ) {
//			newArr[i] = arr[i];
//		}
//		else {
//			newArr[i] = arr2[tmp];
//			tmp++;
//		}
//		
//	}
//}	
//
//template < typename T1 >
//void PrintArray3(T1 newArr[], const int Size) {
//
//	for (int i = 0; i < Size*2; i++)
//	{
//		cout << "\n\tNew Array: " << newArr[i];
//	}
//	cout << endl;
//}
//
//int main() {
//
//	srand(unsigned(time(NULL)));
//	const int Size = 5;
//	int arr[Size];
//	int arr2[Size];
//	int newArr[Size*2];
//
//	FillArray(arr, Size);
//	PrintArray(arr, Size);
//
//	FillArray(arr2, Size);
//	PrintArray(arr2, Size);
//
//	cout << "\n\t===============================>" << endl;
//	ConectArray(newArr, arr, arr2, Size);
//	PrintArray3(newArr, Size);
//
//	system("pause");
//	return 0;
//}