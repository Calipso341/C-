#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

struct Employee {
	string name;
	string surname;
	short int age;
	string description;
	string post;
	short int workDays;
	short int weekends;
	short int salary;
	
	void ShowEmplInfo() {
	
		cout << "\n\n\tName: " << name << "\n\n\tSurname: " << surname << "\n\n\tAge: " << age << "\n\n\tDiscription: " << description << "\n\n\tPost: " << post << "\n\n\tNumber of work days: " << workDays << "\n\n\tNumber of weekends: " << weekends << "\n\n\tSalary: " << salary << " grn" << endl;
	}
};

void FillEmployee(Employee *employee, const int Size) {

	Employee *employees = new Employee[Size];

	for (int i = 0; i < Size; i++)
	{
		cout << "\n\tEnter employee`s name: ";
		cin >> employee[i].name;
		cout << "\n\tEnter employee`s surname: ";
		cin >> employee[i].surname;
		cout << "\n\tEnter employee`s age: ";
		cin >> employee[i].age;
		cout << "\n\tEnter employee`s description: ";
		cin >> employee[i].description;
		cout << "\n\tEnter employee`s post: ";
		cin >> employee[i].post;
		cout << "\n\tEnter number of employee`s work days: ";
		cin >> employee[i].workDays;
		cout << "\n\tEnter number of employee`s weekends: ";
		cin >> employee[i].weekends;
		cout << "\n\tEnter employee`s salary in grn: ";
		cin >> employee[i].salary;
	}
}

void ShowInfo(Employee *employee, const int Size) {

	for (int i = 0; i < Size; i++)
	{
		employee[i].ShowEmplInfo();
		cout << "==========================================" << endl;
	}

}

int main() {

	int Size = 0;

	cout << "\n\n\tEnter number of employees: " << endl;

	cin >> Size;

	Employee employee;

	FillEmployee(employee.employees, Size);
	system("cls");
	ShowInfo(employee.employees, Size);

	system("pause");
	return 0;
}
