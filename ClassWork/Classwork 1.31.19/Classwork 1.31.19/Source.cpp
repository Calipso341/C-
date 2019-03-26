#include<iostream>
using namespace std;
#include<ctime>

int  const Size = 10;
int  const Size1 = 10;


void FillArr(int arr[Size][Size1], const int Size);
void PrintArr(int arr[Size][Size1], const int Size);

int main()
{

	int arr[Size][Size1];
	FillArr(arr, Size);
	PrintArr(arr, Size);
	cout << endl;
	system("pause");
	return 0;
}

void FillArr(int arr[Size][Size1], const int Size) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < Size; i++) {
		arr[i][i] = rand() % 30;
		for (int j = 0; j < Size; j++) {
			arr[i][j] = rand() % 30;
		}
	}
	
}
void PrintArr(int arr[Size][Size1], const int Size) {
	for (int i = 0; i < Size; i++) {
		cout << "\n\tArr:";
		for (int j = 0; j < Size; j++) {
			cout << " " << arr[i][j] ;
		}
	}
}

//_____________Task 2________________
//#include<iostream>
//using namespace std;
//#include<ctime>
//
//void FillArr(int arr[], const int Size);
//void PrintArr(int arr[], const int Size);
//int ArithmeticMean(int arr[], const int Size);
//int BiggesrNumber(int arr[], const int Size);
//int main()
//{
//	int  const Size = 10;
//	int arr[Size];
//	FillArr(arr, Size);
//    PrintArr(arr, Size);
//	cout << "\n\tArithmetic mean: " << ArithmeticMean(arr, Size) << "; " << endl;
//	cout << "\n\tBiggest mean: " << BiggesrNumber(arr, Size) << "; " << endl;
//	system("pause");
//	return 0;
//}
//int BiggesrNumber(int arr[], const int Size) {
//    int big = 0;
//	for (int i = 0; i < Size; i++) {
//		if (arr[i] < big) big = arr[i];
//	}
//	return big;
//}
//int ArithmeticMean(int arr[], const int Size) {
//	int sum = 0;
//	for (int i = 0; i < Size; i++) {
//		sum += arr[i];
//	}
//	return sum / Size;
//}
//void FillArr(int arr[], const int Size) {
//	srand(unsigned(time(NULL)));
//	for (int i = 0; i < Size; i++) {
//		arr[i] = 12 - rand() % 32;
//	}
//}
//void PrintArr(int arr[], const int Size) {
//	for (int i = 0; i < Size; i++) {
//		cout << "\n\tArr: "<< arr[i] <<  "; " << endl;
//	}
//}


//_____________Task 1________________
//#include <iostream>
//using namespace std;
//
//int Plus(int a, int b, int c);
//int main()
//{
//	int a;
//	int b;
//	int c;
//	cout << "\tEnter your first digital: ";
//	cin >> a;
//	cout << "\tEnter your second digital: ";
//	cin >> b;
//	cout << "\tEnter your third digital: ";
//	cin >> c;
//	cout << Plus(a, b, c);
//	system("pause");
//	return 0;
//}
//int Plus(int a, int b, int c)
//{
//	return a + b + c;
//}