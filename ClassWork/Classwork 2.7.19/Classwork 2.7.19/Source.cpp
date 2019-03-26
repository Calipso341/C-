//==========================================================
//Task 3, Фібоначі, рекурсія
//#include <iostream>
//using namespace std;
//
//int Fibonachi(int a) {
//	if (a == 1 || a == 2) return 1;
//	return (Fibonachi(a - 1) + Fibonachi(a - 2));
//}
//
//int main() {
//	int a = 0;
//	cout << "\n\tEnter Fibonachi number: ";
//	cin >> a;
//	cout << "\n\tThat is your numbers: " << Fibonachi(a) << endl;
//	cout << endl;
//	system("pause");
//	return 0;
//}
//==========================================================
//Task 1, Рекурсивна сума чисел в діапазоні
//#include <iostream>
//using namespace std;
//
//int Sum(int a,int b, int sum = 0) {
//	if (a == b) return sum + b;
//	Sum(a + 1, b, sum + a);
//}
//int main() {
//	int a;
//	int b;
//	int sum = 0;
//	cout << "\n\tEnter a: ";
//	cin >> a;
//	cout << "\n\tEnter b: ";
//	cin >> b;
//	/*cout << "\n\tSum equals: " << Sum(a, b, sum) << endl;*/
//	cout << endl;
//	system("pause");
//	return 0;
//}
//==========================================================
//Second example
//#include<iostream>
//
//using namespace std;
//
//int/* Funk*/(int counter) {
//	if (counter <= 0) {
//		return 0;
//	}
//	counter--;
//	cout << "Funk: " << counter << endl;
//	return Funk(counter);
//}
//
//int main() {
//
//	/*Funk(5);*/
//
//	system("pause");
//	return 0;
//}
//==========================================================
//First example
//#include <iostream>
//
//using namespace std;
//
//int counter = 0;
//
//void Funk(int counter = 10) {
//	counter--;
//	if (counter > 0) {
//		cout << "Funk: " << counter << endl;
//		Funk(counter);
//	}
//}
//
//int main() {
//
//	/*Funk(10);*/
//
//	system("pause");
//	return 0;
//}