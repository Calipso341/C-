#include<iostream>

using namespace std;

void PrintA(int a) {

	a++;
	cout << "\n\n\tPrintA a value = " << a << endl;
	cout << "\n\n\tPrintA a addres = " << &a << endl;
}
void Printb(int *pointerb) {

	(*pointerb)++;
	cout << "\n\n\tPrintA pointerb value = " << *pointerb << endl;
	cout << "\n\n\tPrintA pointerb addres = " << pointerb << endl;
}

int main() {

	/*int a = 5;

	cout << "\n\n\tMain a value = " << a << endl;
	cout << "\n\n\tMain a addres = " << &a << endl;

	PrintA(a);

	cout << "\n\n\tAfter a value = " << a << endl;
	cout << "\n\n\tAfter a addres = " << &a << endl;

	cout << endl;
	cout << " \t================================ " << endl;*/

	int b = 50;

	cout << "\n\n\tMain b value = " << b << endl;
	cout << "\n\n\tMain b addres = " << &b << endl;

	Printb(&b);

	cout << "\n\n\tAfter b value = " << b << endl;
	cout << "\n\n\tAfter b addres = " << &b << endl;
	cout << endl;

	system("pause");
	return 0;
}


