//Написать программу «успеваемость».Пользователь вводит три оценки для каждого ученика.
//	Оценки с физики, математики и англ.языка.Средний бал записываем в масив средних баллов.В результате должно быть 10 средних баллов.
//	Реализовать меню для пользователя.Отсортировать тот массив, информация по котором нам сейчас нужна.
//	Связность оценок должна соблюдаться.Тоесть если math[0] = 5 и engl[0] = 8 то после сортировки массива с оценками за математику, 
//	массивы других оценок так же должны поменяться.
//	Вывод оценок(вывод содержимого массива)
//	Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
//	Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7)
//	Вывести все оценки самого успешного ученика по английскому языку.
//	Вывести все оценки самого неуспешного ученика в классе
//	Вывести все оценки самого успешного ученика с точных наук(физика и математика)...
#include<iostream>
#include<Windows.h>

using namespace std;

void FillArray(int  *studentArr, int const Pupils, int const Subject, int mark) {

	for (int i = 0; i < Pupils; i++) {
		for (int j = 0; j < Subject; j++)
		{
			cout << "\n\tEnter mark for [ " << i + 1 << " ] student for " << j + 1 << " subject: " << endl;
			cout << "\n\t";
			cin >> studentArr[mark];
		}
	}
}

void PrintArray(int *studentArr, int const Pupils, int const Subjects, int mark) {

	cout << "\n\tStudent\t\tSubject\t\tMark" << endl;

	for (int i = 0; i < Pupils; i++)
	{
		for (int j = 0; j < Subjects; j++)
		{
			cout << "\n\t[ " << i + 1 << " ]\t\t" << j + 1 << "\t\t" << studentArr[mark] << endl;
		}
		if (Pupils > 1 ) cout << "\n\t===================================" << endl;
	}
}

int main() {

	

	int Pupils = 0;
	int Subject = 3;
	int mark = 0;

	cout << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading..." << endl;
	Sleep(1000); 
	system("cls");

	cout << "\n\n\tMark Register" << endl;
	cout << "\n\tSubjects list;\n\n\t1 - Physics;\n\t2 - Maths;\n\t3 - English;" << endl;
	cout << "\n\tHow many pupils will be in register?\n\n\tPlease, enter number of them: ";
	cin >> Pupils;

	int arr;

	int *studentArr = new int [Pupils];

	FillArray(studentArr, Pupils, Subject, mark);

	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading..." << endl;
	Sleep(1000);
	system("cls");

	cout << "\n\tSubjects list;\n\n\t1 - Physics;\n\t2 - Maths;\n\t3 - English;" << endl;

	PrintArray(studentArr, Pupils, Subject, mark);

	system("pause");

	return 0;
}
