//================================= Task 4 =================================
#include<iostream>
using namespace std;
#include<ctime>

int  const Size = 5;
int  const Size1 = 10;


void FillArr1(int arr[Size][Size1], const int Size);
void PrintArr1(int arr[Size][Size1], const int Size);

void FillArr2(int arr[Size][Size1], const int Size);
void PrintArr2(int arr[Size][Size1], const int Size);

void FillArr3(int arr[Size][Size1], const int Size);
void PrintArr3(int arr[Size][Size1], const int Size);

void FillArr4(int arr[Size][Size1], const int Size);
void PrintArr4(int arr[Size][Size1], const int Size);

void FillArr5(int arr[Size][Size1], const int Size);
void PrintArr5(int arr[Size][Size1], const int Size);

int main()
{
	int arr[Size][Size1];
	FillArr1(arr, Size);
	PrintArr1(arr, Size);
	cout << "\n\t======================";
	FillArr2(arr, Size);
	PrintArr2(arr, Size);
	cout << "\n\t======================";
	FillArr3(arr, Size);
	PrintArr3(arr, Size);
	cout << "\n\t======================";
	FillArr4(arr, Size);
	PrintArr4(arr, Size);
	cout << "\n\t======================";
	FillArr5(arr, Size);
	PrintArr5(arr, Size);
	cout << endl;
	system("pause");
	return 0;
}

void FillArr1(int arr[Size][Size1], const int Size) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < Size; i++) {
		arr[i][i] = rand() % 30;
		for (int j = 0; j < Size; j++) {
			arr[i][j] = rand() % 30;
		}
	}

}
void PrintArr1(int arr[Size][Size1], const int Size) {
	for (int i = 0; i < Size; i++) {
		cout << "\n\tArr 1:";
		for (int j = 0; j < Size; j++) {
			cout << " " << arr[i][j];
		}
	}
}

void FillArr2(int arr[Size][Size1], const int Size) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < Size; i++) {
		arr[i][i] = rand() % 30;
		for (int j = 0; j < Size; j++) {
			arr[i][j] = rand() % 30;
		}
	}

}
void PrintArr2(int arr[Size][Size1], const int Size) {
	for (int i = 0; i < Size; i++) {
		cout << "\n\tArr 2:";
		for (int j = 0; j < Size; j++) {
			cout << " " << arr[i][j];
		}
	}
}

void FillArr3(int arr[Size][Size1], const int Size) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < Size; i++) {
		arr[i][i] = rand() % 30;
		for (int j = 0; j < Size; j++) {
			arr[i][j] = rand() % 30;
		}
	}

}
void PrintArr3(int arr[Size][Size1], const int Size) {
	for (int i = 0; i < Size; i++) {
		cout << "\n\tArr 3:";
		for (int j = 0; j < Size; j++) {
			cout << " " << arr[i][j];
		}
	}
}

void FillArr4(int arr[Size][Size1], const int Size) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < Size; i++) {
		arr[i][i] = rand() % 30;
		for (int j = 0; j < Size; j++) {
			arr[i][j] = rand() % 30;
		}
	}

}
void PrintArr4(int arr[Size][Size1], const int Size) {
	for (int i = 0; i < Size; i++) {
		cout << "\n\tArr 4:";
		for (int j = 0; j < Size; j++) {
			cout << " " << arr[i][j];
		}
	}
}

void FillArr5(int arr[Size][Size1], const int Size) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < Size; i++) {
		arr[i][i] = rand() % 30;
		for (int j = 0; j < Size; j++) {
			arr[i][j] = rand() % 30;
		}
	}

}
void PrintArr5(int arr[Size][Size1], const int Size) {
	for (int i = 0; i < Size; i++) {
		cout << "\n\tArr 5:";
		for (int j = 0; j < Size; j++) {
			cout << " " << arr[i][j];
		}
	}
}


//================================= Task 3 =================================
//#include<iostream>
//
//using namespace std;
//
//void Calculator(int *pointerA, int *pointerB) {
//	cout << "\n\tWhich numbers you want to additioning?" << endl;
//	cout << "\n\tEnter firts number: ";
//	cin >> *pointerA;
//	cout << "\n\tEnter second number: ";
//	cin >> *pointerB;
//	cout << "\n\tResault: " << *pointerA + *pointerB << " . " << endl;
//}
//int main() {
//
//	int a = 0;
//	int b = 0;
//
//	int *pointerA = &a;
//	int *pointerB = &b;
//
//	Calculator(&a, &b);
//
//	system("pause");
//	return 0;
//}
//================================= Task 2 =================================
//#include<iostream>
//
//using namespace std;
//
//void Numbers(int *pointerA, int *pointerB) {
//
//	cout << "\n\tEnter number A: ";
//	cin >> *pointerA;
//	cout << "\n\tEnter number B: ";
//	cin >> *pointerB;
//
//	cout << " \n\t===========================" << endl;
//
//	cout << "\n\tNumber A: " << *pointerA << " . " << endl;
//	cout << "\n\tNumber B: " << *pointerB << " . " << endl;
//
//	cout << " \n\t===========================" << endl;
//}
//
//void Switch(int *pointerA, int *pointerB) {
//
//	cout << "\n\tNumber A: " << *pointerB << " . " << endl;
//	cout << "\n\tNumber B: " << *pointerA << " . " << endl;
//	int pointerTMP = *pointerA;
//	*pointerB = *pointerA;
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
//	Numbers( &a, &b);
//	Switch(&a, &b);
//	system("pause");
//	return 0;
//}

//================================= Task 1 =================================
//#include<iostream>
//
//using namespace std;
//
//void Numbers(int *pointerA, int *pointerb) {
//
//	cout << "\n\tEnter number A: ";
//	cin >> *pointerA;
//	cout << "\n\tEnter number B: ";
//	cin >> *pointerb;
//	if (*pointerA > *pointerb) cout << "\n\tNumber " << *pointerA << " is bigger than " << *pointerb << " . " << endl;
//	else cout << "\n\tNumber " << *pointerb << " is bigger than " << *pointerA << " . " << endl;
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
//	Numbers(&a, &b);
//
//	system("pause");
//	return 0;
//}