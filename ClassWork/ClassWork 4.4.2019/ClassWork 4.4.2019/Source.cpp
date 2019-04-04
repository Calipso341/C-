#include<iostream>
#include<string>
#include<fstream>
#include<ctime>;

using namespace std;

struct Info {

	string name;
	string surname;
	int phonenumber;
	string addres;

	void ShowInfo() {

		cout << "\n\tName: " << name << "\n\n\tSurname: " << surname << "\n\n\tAddres: " << addres << "\n\n\tPhonenuber: " << phonenumber << endl;
	    
	}
	string StringFile() {
	
		string txt;

		txt = name + " - " + surname + " - " + to_string(phonenumber) + " - " + addres + "\n\n";
		
		return txt;
	}
};

void FillInfo(Info *information, int const Size) {

	for (int i = 0; i < Size; i++)
	{
		cout << "\n\n\tEnter name of customer:";
		cin >> information[i].name;
		cout << "\n\n\tEnter surname of customer:";
		cin >> information[i].surname;
		cout << "\n\n\tEnter addres of customer:";
		cin >> information[i].addres;
		cout << "\n\n\tEnter phonenamber of customer:";
		cin >> information[i].phonenumber;
	}

	ofstream file;

	file.open("Info.txt", ofstream::app);

	for (int i = 0; i < Size; i++)
	{
		file << information[i].StringFile();
		file.close();
	}
}

void ShowInfo(Info *information, int const Size) {

	for (int i = 0; i < Size; i++)
	{
		information[i].ShowInfo();
		cout << "\n\n\t";
	}


}



int main() {

	int Size = 0;

	cout << "\n\tEnter number of abonents: ";

	cin >> Size;

	Info *information = new Info[Size];
	
	Info Bill;

	FillInfo(information, Size);
	system("cls");
	ShowInfo(information, Size);

	system("pause");
	return 0;
}

//____________________________ Example 2 ____________________________
//#include<iostream>
//#include<string>
//#include<Windows.h>
//#include<fstream>
//#include<ctime>;
//
//using namespace std;
//
//int main() {
//
//	ifstream ReadFile;
//
//	string path = "DB.txt";
//
//	ReadFile.open(path);
//
//	if (!ReadFile.is_open()) {
//	
//		cout << "\n\tCan`t open this file! " << endl;
//	}
//	else {
//
//		string data;
//
//		while (!ReadFile.eof()) {
//		 
//			getline(ReadFile, data);
//
//			cout << "\n\n\tData: " << data << endl;
//		}
// 	
//		/*char data;
//
//		while (ReadFile.get(data)) {
//		
//			cout << "\n\n\tData: " << data << endl;
//		}*/
//	}
//
//	ReadFile.close();
//
//	
//
//	system("pause");
//	return 0;
//}
//____________________________ Example 2 ____________________________


//____________________________ Example 1 ____________________________

//#include<iostream>
//#include<string>
//#include<Windows.h>
//#include<fstream>
//#include<ctime>;
//
//using namespace std;
//
//int main() {
//
//	srand(unsigned(time(NULL)));
//
//
//	ofstream WriteFile;
//
//	string Path = "DB.txt";
//
//	WriteFile.open(Path, ofstream::app);
//
//	if (!WriteFile.is_open()) {
//
//		cout << "\n\n\tCan`t open file!" << endl;
//
//	}
//	else {
//
//		cout << "\n\n\tIt`s works!" << endl;
//
//		string text;
//
//		cout << "\n\tEnter some text! ";
//
//		getline(cin, text);
//
//		WriteFile << text << endl;
//
//	}
//
//	system("pause");
//	return 0;
//}
//____________________________ Example 1 ____________________________