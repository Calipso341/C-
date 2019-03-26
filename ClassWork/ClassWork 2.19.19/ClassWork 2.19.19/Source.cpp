//===================================Task 3=============================================
#include<iostream>
#include<ctime>

using namespace std;

const int Size = 10;

void FirstArray(int arr[], const int Size) {
	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], const int Size) {
	
	for (int i = 0; i < Size; i++)
	{
		cout << "\n\tArray: " << arr[i];
	}
	cout << endl;
}

void SortArray(int arr[], const int Size) {

	for (int i = 0; i < Size; i++) 
		for (int a = 0; a < Size - i - 1; a++) 
			if (arr[a] > arr[a + 1]) {
				int buffer = arr[a];
				arr[a] = arr[a + 1];
				arr[a + 1] = buffer;
			}
}

void ConectingArray(int arr[], int arr2[], int arr3[], const int Size) {
	for (int i = 0; i < Size; i++) arr[i] = arr2[i];
	for (int i = Size; i < Size + Size; i++) arr[i] = arr[i - Size];
}

int main() {

	const int Size = 10;
	int arr[Size];
	int arr2[Size];
	int arr3[Size];

	srand(unsigned(time(NULL)));

	FirstArray(arr, Size);
	PrintArray(arr, Size);

	FirstArray(arr2, Size);
	PrintArray(arr2, Size);

	cout << "\n\t<=============>" << endl;

	SortArray(arr, Size);
	PrintArray(arr, Size);

	cout << "\n\t<=============>" << endl;

	SortArray(arr2, Size);
	PrintArray(arr2, Size);

	cout << "\n\t<=============>" << endl;
	
	ConectingArray(arr, arr2, arr3, Size);
	PrintArray(arr, Size);
	system("pause");
	return 0;
}

//===================================Task 2=============================================

//#include<iostream>
//
//using namespace std;
//
//void MainFunction(int &a, int &b, int &c) {
//
//	cout << "\n\tEnter the first number: ";
//	cin >> a;
//	cout << "\n\tEnter the second number: ";
//	cin >> b;
//	cout << "\n\tEnter the third number: ";
//	cin >> c;
//
//	int *pointerA = &a;
//	int *pointerB = &b;
//	int *pointerC = &c;
//}
//
//void Additioning(int &a, int &b, int &c) {
//
//	int result = a + b + c;
//
//	cout << "\n\tResault of additioning: " << result << endl;
//}
//
//void AveregeMean(int &a, int &b, int &c) {
//
//	int result1 = (a + b + c) / 3;
//
//	cout << "\n\tThe averege mean is: " << result1 << endl;
//}
//
//void TheSmallestNumber(int &a, int &b, int &c) {
//	if (a < b || a < c) {
//		cout << "\n\tThe smallest number is: " << a << endl;
//	}
//	else if (b < a || b < c) {
//		cout << "\n\tThe smallest number is: " << b << endl;
//	}
//	else cout << "\n\tThe smallest number is: " << c << endl;
//}
//
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//
//	MainFunction(a, b, c);
//	Additioning(a, b, c);
//	AveregeMean(a, b, c);
//	TheSmallestNumber(a, b, c);
//
//	cout << endl << endl;
//
//	system("pause");
//	return 0;
//}


//===================================Task 1=============================================

//#include<iostream>
//
//using namespace std;
//
//void MainFunction(int &a) {
//
//	cout << "\n\tEnter your number: ";
//	cin >> a;
//
//}
//
//void Multiplication(int &a) {
//	a = a * a;
//	cout << "\n\tResault: " << a;
//}
//
//int main() {
//	int a = 0;
//
//	MainFunction(a);
//	Multiplication(a);
//
//	system("pause");
//	return 0;
//}

//===================================Example=============================================

//#include<iostream>
//
//using namespace std;
//
//void FVAL(int a) {
//
//	cout << "\n\tFVAL A value: " << a << " MAIN A value address " << &a << endl;
//	a += 100;
//	cout << "\n\tFVAL A value: " << a << " MAIN A value address " << &a << endl;
//}
//
//void FREF(int &a) {
//	cout << "\n\tFREF A value: " << a << " MAIN A value address " << &a << endl;
//	a += 300;
//	cout << "\n\tFREF A value: " << a << " MAIN A value address " << &a << endl;
//}
//
//int main() {
//
//	int a = 10;
//
//	cout << "\n\tMAIN A value: " << a << " MAIN A value address " << &a << endl;
//
//	int &RA = a;
//
//	FVAL(a);
//	cout << "\n\t==============================================>" << endl;
//	FREF(a);
//
//	cout << "\n\tMAIN A value: " << a << " MAIN A value address " << &a << endl;
//	/*int a = 10;
//	cout << a << " || " <<  &a << endl;
//	
//	int &RA = a;
//
//	cout << &RA << " || " << RA << endl;
//
//	int *p;
//	int &R;*/
//	system("pause");
//	return 0;
//}

//============================================================================================================================================
//#include<iostream>
//
//using namespace std;
//
//void Calculating(int *pointerA, int *pointerB) {
//	
//	int choose = 0;
//	cout << "\n\tEnter first number: ";
//	cin >> *pointerA;
//	cout << "\n\tEnter the second number: ";
//	cin >> *pointerB;
//	cout << "\n\tChoose the operation\n\t1 - additioning;\n\t2 - substruction;" << endl;
//	cin >> choose;
//	if (choose = 1) {
//		cout << "\n\tResault of additioning: " << *pointerA + *pointerB << endl;
//	}
//	else cout << "\n\tResault of substruction: " << *pointerA - *pointerB << endl;
//}
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//
//	int *pointerA = &a;
//	int *pointerB = &b;
//
//	Calculating(&a, &b);
//
//	system("pause");
//	return 0;
//}