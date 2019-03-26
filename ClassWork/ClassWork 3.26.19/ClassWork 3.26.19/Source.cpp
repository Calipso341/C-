#include<iostream>
#include<string>

using namespace std;

struct Address {

	string country;
	string region;
	string town;
	string street;
	int zipCode;

	void ShowAddressInfo() {

		cout << "\n\tCountry: " << country << "\n\tRegion: " << region << "\n\tTown: " << town << "\n\tStreet: " << street << "\n\tZipCode: " << zipCode << endl;
	};

};
struct Person {
private:
	string name;
	string surname;
	int age;
public:
	void ShowInfo() {
		cout << "\n\tName: " << name << "\n\tSurname: " << surname << "\n\tAge: " << age << endl;
	}
	void SetAge(int newAge) {
		if (newAge >= 120 || newAge <= 0) {
			cout << "\n\tIncorrect age!" << endl;
		}
		else {
			age = newAge;
		}
	}
	int GetAge() {
		return age;
	}
	void SetName(string newName) {

		name = newName;

	}
	void SetSurname(string newSurname) {

		surname = newSurname;

	}
	Address address;
};

int main() {

	Person Bill;
	/*Bill.name = "Bill";
	Bill.surename = "Gates";
	Bill.age = 24;*/
	Bill.SetName("Bill");
	Bill.SetSurname("Gates");
	Bill.SetAge(57);
	Bill.ShowInfo();
	Bill.address.country = "USA";
	Bill.address.region = "California";
	Bill.address.town = "LA";
	Bill.address.street = "S.Age";
	Bill.address.zipCode = 123124;
	Bill.address.ShowAddressInfo();
	//cout << "\n\t" << Bill.GetAge() << endl << endl;
	cout << "\n\t===========================================================" << endl;
	Person John;
	/*Bill.name = "Bill";
	Bill.surename = "Gates";
	Bill.age = 24;*/
	Bill.SetName("John");
	Bill.SetSurname("Wick");
	Bill.SetAge(57);
	Bill.ShowInfo();
	Bill.address.country = "USA";
	Bill.address.region = "DC";
	Bill.address.town = "Washinghton";
	Bill.address.street = "S.Gop";
	Bill.address.zipCode = 123124;
	Bill.address.ShowAddressInfo();

	system("pause");
	return 0;
}