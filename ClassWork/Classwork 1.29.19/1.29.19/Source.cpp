// N3. Задача на створення фігури.	
//#include<iostream>
//using namespace std;
//void Frame(int hight, int lenth) { 
//        for (int i = 0; i < hight; i++) {
//		for (int a = 0; a < lenth; a++) {
//			if (a == 0 || i == 0 || a == lenth - 1 || i == hight - 1) cout << "#";
//			else cout << " ";
//		}
//		cout << endl;
//	}
//	}
//	int main()
//	{
//		int hight, lenth;
//		cout << "\n\tEnter a number for lenth: ";
//		cin >> lenth;
//		cout << "\n\tEnter a number for hight: ";
//		cin >> hight;
//		Frame(hight, lenth);
//		system("pause");
//		return 0;
//	}



// N2. Задача про депозити.
//#include<iostream>
//using namespace std;
//float Dohod(float a, float b, float c) {
//	return a + a * b * c / 365 / 100;
//}
//int main()
//{
//	float a, b, c;
//	cout << "\tEnter a sum which you want to deposit: ";
//	cin >> a;
//	cout << "\tEnter a percent ( % ) in which you want to deposit: ";
//	cin >> b;
//	cout << "\tEnter a period of time for which you want to deposit: ";
//	cin >> c;
//	cout << "\tThat is sum which you will get: " << Dohod(a, b, c) << " . "<< endl;
//	system("pause");
//	return 0;
//}



// N1. Функція переводу годин і хвилин у секунди.
//#include<iostream>
//using namespace std;
//int TimeCalculator(int a, int b, int c) {
//	return a*60*60 + b*60 + c ;
//}
//int main()
//{
//	int a, b, c;
//	cout << "Enter hours: " << endl;
//	cin >> a;
//	cout << "Enter minutes: " << endl;
//	cin >> b;
//	cout << "Enter seconds: " << endl;
//	cin >> c;
//	cout << TimeCalculator(a, b, c) << endl;
//	system("pause");
//	return 0;
//}