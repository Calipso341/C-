//First Task================================================================================================
#include<iostream>


using namespace std;


int main() {

	int a = 0;
	int *pointerA = &a;

	int b = 0;
	int *pointerB = &b;

	int c = 0;
	int *pointerC = &c;

	int min;

	cout << "\n\tEnter number A: ";
	cin >> a;
	cout << "\n\tEnter number B: ";
	cin >> b;
	cout << "\n\tEnter number C: ";
	cin >> c;
	cout << "\n\n\tSum of these numbers is: " << *pointerA + *pointerB + *pointerC << " . " << endl;
	cout << "\n\n\tThe average number is: " << (*pointerA + *pointerB + *pointerC) / 3 << " . " << endl;

	if (*pointerA < *pointerB && *pointerA < *pointerC)
	{
		cout << "\n\n\tThe average number is: " << *pointerA << " . " << endl;
	}
	else if (*pointerB <= *pointerA && *pointerB <= *pointerC)
	{
		cout << "\n\n\tThe average number is: " << *pointerB << " . " << endl;
	}
	else if (*pointerC <= *pointerA && *pointerC <= *pointerB)
	{
		cout << "\n\n\tThe average number is: " << *pointerC << " . " << endl;
	}

	system("pause");
	return 0;
}

//Example 1
//#include<iostream>
//
//
//
//using namespace std;
//
//
//
//int main() {
//
//	int a = 5;
//	int *pointerA = &a;
//
//	cout << "\n\tValue A = " << a << "\n\n\tAddres A = " << &a << "\n\n\tValue Pointer A = " << *pointerA << "\n\n\tAdres Pointer A = " << pointerA << endl;
//
//	*pointerA = 100500;
//
//	cout << "\n\tValue A = " << a << "\n\n\tAddres A = " << &a << "\n\n\tValue Pointer A = " << *pointerA << "\n\n\tAdres Pointer A = " << pointerA << endl;
//
//	int *PointerBackUp = pointerA;
//
//	cout << "\n\n\t" << PointerBackUp << "\n\n\t" << pointerA << "\n\n\t" << endl;
//
//	system("pause");
//	return 0;
//}