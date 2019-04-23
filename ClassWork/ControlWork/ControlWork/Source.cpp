//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//void FillArr(int arr[10][10]) {
//	srand(unsigned(time(NULL)));
//	for (int i = 0; i < 10; i++) {
//		arr[i][i] = rand() % 30;
//		for (int j = 0; j < 5; j++) {
//			arr[i][j] = rand() % 30;
//		}
//	}
//}
//
//void PrintArr(int arr[10][10]) 
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "\n\n\tArr [" << arr[i][j] << "] ";
//		}
//	}
//
//}
//int main()
//{
//	int arr[10][10];
//
//	FillArr(arr);
//	PrintArr(arr);
//
//	system("pause");
//	return(0);
//}
//================================ Task 2 ================================
//Дан массив размера n, заполнить его случайными числами, Найти все нечётные числа массива.
#include<iostream>
#include<ctime>

using namespace std;

void FillArr(int arr[]) 
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < 5; i++)
	{
	  arr[i] = rand() % 10;
	}
}

void PrintArr(int arr[])
{
	for (size_t i = 0; i < 5; i++)
	{
		cout << "\n\n\tArr[ " << arr[i] << " ] " << endl << endl;
	}
}

void CheckArr(int arr[], int num)
{
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] / 2)
		{
			cout << "\n\n\tTrue[" << arr[i] << "] " << endl;
		}
		else cout << "\n\n\tFalse[" << arr[i] << "] " << endl;
	}
}

int main() 
{
	int arr[5];
	int num = 0;

	FillArr(arr);
	PrintArr(arr);
	cout << "================================ " << endl;
	CheckArr(arr, num);
	cout << endl << endl;

	system("pause");
	return(0);
}
//================================ Test ================================
//#include<iostream>
//#include<Windows.h>
//#include<string>
//
//using namespace std;
//
//void Mquestions(int TotalMark, int mark, int Mathanswer1, int Mathanswer2, int Mathanswer3, int Mathanswer4)
//{
//	cout << "\n\n\t2 + 2 = ";
//	cin >> Mathanswer1;
//	if (Mathanswer1 == 4)
//	{
//		mark++;
//	}
//	else
//	{
//		mark + 0;
//	}
//	cout << "\n\n\t9 * 9 = ";
//	cin >> Mathanswer2;
//	if (Mathanswer2 == 81)
//	{
//		mark++;
//	}
//	else
//	{
//		mark + 0;
//	}
//	cout << "\n\n\t7 * 8 = ";
//	cin >> Mathanswer3;
//	if (Mathanswer3 == 56)
//	{
//		mark++;
//	}
//	else
//	{
//		mark + 0;
//	}
//	cout << "\n\n\t56 / 2 = ";
//	cin >> Mathanswer4;
//	if (Mathanswer4 == 28)
//	{
//		mark++;
//	}
//	else
//	{
//		mark + 0;
//	}
//	cout << "\n\n\tYour mark: " << mark << endl;
//	TotalMark + mark;
//}
//
//void Rquestions(int TotalMark, string Rquestion1, string Rquestion2, string Rquestion3, string Rquestion4, string Ranswer1, string Ranswer2, string Ranswer3, string Ranswer4, int mark)
//{
//	cout << "\n\n\tWho is the presedent of USA?";
//	cin >> Rquestion1;
//	if (Rquestion1 == Ranswer1)
//	{
//		mark++;
//	}
//	else
//	{
//		mark + 0;
//	}
//	cout << "\n\n\tWhich name of german car starts on \"B\"?";
//	cin >> Rquestion2;
//	if (Rquestion2 == Ranswer2)
//	{
//		mark++;
//	}
//	else
//	{
//		mark + 0;
//	}
//	cout << "\n\n\tOn what you can get to the USA by air?";
//	cin >> Rquestion3;
//	if (Rquestion3 == Ranswer3)
//	{
//		mark++;
//	}
//	else
//	{
//		mark + 0;
//	}
//	cout << "\n\n\tWho is the best friend of man?";
//	cin >> Rquestion4;
//	if (Rquestion4 == Ranswer4)
//	{
//		mark++;
//	}
//	else
//	{
//		mark + 0;
//	}
//	cout << "\n\n\tYour mark: " << mark << endl;
//	TotalMark + mark;
//}
//
//void Gquestions(int TotalMark, string Gquestion1, string Gquestion2, string Gquestion3, string Gquestion4, string Ganswer1, string Ganswer2, string Ganswer3, string Ganswer4, int mark)
//{
//        cout << "\n\n\tWhere is centre of Europe?";
//		cin >> Gquestion1;
//		if (Gquestion1 == Ganswer1)
//		{
//			mark++;
//		}
//		else
//		{
//			mark + 0;
//		}
//		cout << "\n\n\tOf which country Washinghton is the capital?";
//		cin >> Gquestion2;
//		if (Gquestion2 == Ganswer2)
//		{
//			mark++;
//		}
//		else
//		{
//			mark + 0;
//		}
//		cout << "\n\n\tWhat is the strongest country of Europe?";
//		cin >> Gquestion3;
//		if (Gquestion3 == Ganswer3)
//		{
//			mark++;
//		}
//		else
//		{
//			mark + 0;
//		}
//		cout << "\n\n\tWhere is Eiffel Tower?";
//		cin >> Gquestion4;
//		if (Gquestion4 == Ganswer4)
//		{
//			mark++;
//		}
//		else
//		{
//			mark + 0;
//		}
//	cout << "\n\n\tYour mark: " << mark << endl;
//	TotalMark + mark;
//}
//
//void Questions(int TotalMark, string Gquestion1, string Gquestion2, string Gquestion3, string Gquestion4, string Ganswer1, string Ganswer2, string Ganswer3, string Ganswer4, int Mathanswer1, int Mathanswer2, int Mathanswer3, int Mathanswer4,string Rquestion1, string Rquestion2, string Rquestion3, string Rquestion4, string Ranswer1, string Ranswer2, string Ranswer3, string Ranswer4)
//{
//	int choice = 0;
//	int mark = 0;
//
//	cout << "\n\n\tMath question [1]" << "\n\n\tRandom questions[2]" << "\n\n\tGeographical questions[3]";
//	cout << "\n\n\tFrom which questions you want to start, your choice: ";
//	cin >> choice;
//
//	Sleep(1000);
//	system("cls");
//
//	if (choice == 1) 
//	{
//		Mquestions(TotalMark, Mathanswer1, Mathanswer2, Mathanswer3, Mathanswer4, mark);
//		Rquestions(TotalMark, Rquestion1, Rquestion2, Rquestion3, Rquestion4, Ranswer1, Ranswer2, Ranswer3, Ranswer4, mark);
//		Gquestions(TotalMark, Gquestion1, Gquestion2, Gquestion3, Gquestion4, Ganswer1, Ganswer2, Ganswer3, Ganswer4, mark);
//    }
//	if (choice == 2)
//	{
//		Rquestions(TotalMark, Rquestion1, Rquestion2, Rquestion3, Rquestion4, Ranswer1, Ranswer2, Ranswer3, Ranswer4, mark);
//		Mquestions(TotalMark, Mathanswer1, Mathanswer2, Mathanswer3, Mathanswer4, mark);
//		Gquestions(TotalMark, Gquestion1, Gquestion2, Gquestion3, Gquestion4, Ganswer1, Ganswer2, Ganswer3, Ganswer4, mark);
//	}
//    if (choice == 3)
//    {
//	    Gquestions(TotalMark, Gquestion1, Gquestion2, Gquestion3, Gquestion4, Ganswer1, Ganswer2, Ganswer3, Ganswer4, mark);
//		Rquestions(TotalMark, Rquestion1, Rquestion2, Rquestion3, Rquestion4, Ranswer1, Ranswer2, Ranswer3, Ranswer4, mark);
//		Mquestions(TotalMark, Mathanswer1, Mathanswer2, Mathanswer3, Mathanswer4, mark);
//    }
//	cout << "\n\n\tTotal mark: " << TotalMark << endl << endl;
//}
//
//int main() 
//{
//	string Ganswer1 = "Ukrain";
//	string Ganswer2 = "USA";
//	string Ganswer3 = "Germany";
//	string Ganswer4 = "France";
//
//	string Gquestion1 = Ganswer1;
//	string Gquestion2 = Ganswer2;
//	string Gquestion3 = Ganswer3;
//	string Gquestion4 = Ganswer4;
//
//	string Ranswer1 = "D.Trump";
//	string Ranswer2 = "BMW";
//	string Ranswer3 = "Plane";
//	string Ranswer4 = "Dog";
//
//	string Rquestion1 = Ranswer1;
//	string Rquestion2 = Ranswer2;
//	string Rquestion3 = Ranswer3;
//	string Rquestion4 = Ranswer4;
//
//	int Mathanswer1 = 4;
//	int Mathanswer2 = 81;
//	int Mathanswer3 = 56;
//	int Mathanswer4 = 28;
//
//	int mark = 0;
//	int TotalMark = 0;
//
//	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tQwestions!";
//	Sleep(1000);
//	system("cls");
//	
//	Questions(TotalMark, Gquestion1, Gquestion2, Gquestion3, Gquestion4, Ganswer1, Ganswer2, Ganswer3, Ganswer4, Mathanswer1, Mathanswer2, Mathanswer3, Mathanswer4, Rquestion1, Rquestion2, Rquestion3, Rquestion4, Ranswer1, Ranswer2, Ranswer3, Ranswer4);
//
//	system("pause");
//	return 0;
//}
//================================ Task1 ================================
//Задача на динамическое выделение памяти.Изначально есть указатель на массив с одним элементом.
//Пользователь вводит число.Если оно больше 0 записываем его в массив.
//Далее пользователь вводит второе число, тут уже, если оно больше 0, надо пере выделять память для 2 - х элементов массива и записать в массив второе число.И так далее…
//для 3 - х элементов, для 4 - х…  пока пользователь не введет отрицательное число.
//#include<iostream>
//
//using namespace std;
//
//void AddNewItem() {
//	int *size = (int*)malloc(sizeof(int));
//	*size = 0;
//	int *arr = (int*)calloc(*size, sizeof(int));
//	int buff;
//	while (true) {
//		system("cls");
//		cout << "\n\n\tArr: ";
//		for (int i = 0; i < *size; i++) cout << " " << arr[i];
//
//		cout << "\n\n\tEnter new number in arr [Press 0 for exit]: ";
//		cin >> buff;
//		if (buff <= 0) return;
//
//		*size += 1;
//		arr = (int*)realloc(arr, *size * sizeof(int));
//		arr[*size - 1] = buff;
//	}
//}
//int main()
//{
//	AddNewItem();
//	system("pause");
//	return(0);
//}
