#include<iostream>
#include<string>

using namespace std;

struct Animal {
	string name;
	string Class;
	string Name;
	void ShowInfo() {
		cout << "\n\n\tName: " << name << "\n\n\tClass: " << Class << "\n\n\tName: " << Name << endl;
	}	
};

int main() {

    Animal Dog;
	Dog.name = "Dog";
	Dog.Class = "Canidae";
	Dog.Name = "Bill";
	Dog.ShowInfo();
	//cout << "\n\t" << Bill.GetAge() << endl << endl;
	cout << "\n\t===========================================================" << endl;
	Animal Pig;
	/*Bill.name = "Bill";
	Bill.surename = "Gates";
	Bill.age = 24;*/
	Pig.name = "Pig";
	Pig.Class = "Mammalia";
	Pig.Name = "John";
	Pig.ShowInfo();

	system("pause");
	return 0;
}