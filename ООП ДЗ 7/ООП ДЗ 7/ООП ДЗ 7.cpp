#include <iostream>
#include <vector>
using namespace std;

class Pasport {
	string name;
	string surname;
	string sex;
	int date_of_birthday;
public:
	Pasport(){};
	Pasport(string n, string s, string se, int d) {
		name = n;
	    surname = s;
		sex = se;
		date_of_birthday = d;
	}
	void SetName(string n) {
		name = n;
	}
	string GetName() const {
		return name;
	}
	void SetSurName(string s) {
		surname = s;
	}
	string GetSurname() const {
		return surname;
	}
	void SetSex(string se) {
		sex = se;
	}
	string GetSex() const {
		return sex;
	}
	void  SetDate(int d) {
		date_of_birthday = d;
	}
	virtual void PrintInfo() {
		cout << "Name: " << name << "\n";
		cout << "Surname: " << surname << "\n";
		cout << "Sex: " << sex << "\n";
		cout << "Year of birth: " << date_of_birthday << "\n";
	}

};
class Visa {
	string country;
	string issueDate;
	string expiryDate;
public:
	Visa() {};
	Visa(string c, string i, string e) {
		country = c;
		issueDate = i;
		expiryDate = e;
	}
	void PrintInfo() {
		cout << "Visa: " << country << "\n";
		cout << "Issued: " << issueDate << "\n";
		cout << "Expires: " << expiryDate << "\n";
	}
};
class ForeignPasport : public Pasport {
	vector<Visa> visa;
public:
	void AddVisa(const Visa& v) {
		visa.push_back(v);
    }
	void PrintInfo() override {
	Pasport: PrintInfo();

	}
};
int main() {
	ForeignPasport fp;
	
}