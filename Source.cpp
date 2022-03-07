/*  Atm Machine program using C++  */

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

#define size 10

class Bank {
// private variables inside the class 
private:
	string name;
	int accNumber = 0;
	char type[size];
	float amount = 0;
	float total = 0;

public:
	// function to insert user's data 
	void insertData() {
		cout << "Enter Your Name : \n";
		cin.ignore();
		// to use spaces int string 
		getline(cin, name);
		cout << "Enter Account Number : \n";
		cin >> accNumber;
		cout << "Enter Account type : \n";
		cin >> type;
		cout << "Enter Your Balance : \n";
		cin >> total;

		cout << "\n\t DONE \n";
	}

	//funtction to show data 
	void showData() {
		cout << "Name : " << name << endl;
		cout << "Account No. : " << accNumber << endl;
		cout << "Account Type : " << type << endl;
		cout << "Balance : " << total << endl;
	}

	// function to deposit the amount in ATM
	void deposit() {
		cout << "Enter The Amount To Be Deposited : \n";
		cin >> amount;
	}

	// function to show the balance amount 
	void showBalance() {
		total += amount;
		cout << "Total Balance is : " << total << endl;
	}

	//function to withdraw the amount in ATM
	void withdraw() {
		int a, available;
		cout << "Enter amount to withdraw : \n";
		cin >> a;
		available = total - a;
		cout << "Available Balance is : " << available << endl;
	}
};

//Driver code 
int main() {

	// object of class
	Bank b;
	int choice;
	char x;

	// infinite while loop to choose options every time 
	do {
		system("cls");
		cout << "\n"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cout << "Enter Your Choice : \n";
		cout << "\t 1. Setup Your Account info :\n";
		cout << "\t 2. Balance Enquiry:\n";
		cout << "\t 3. Deposit Money :\n";
		cout << "\t 4. Show Total Balance :\n";
		cout << "\t 5. Withdraw Money :\n";
		cout << "\t 6. Cancel :\n";
		cin >> choice;
		
		//choices to select from 
		switch (choice) {
		case 1:
			b.insertData();
			break;
		case 2:
			b.showData();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.showBalance();
			break;
		case 5:
			b.withdraw();
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "\n Invalid Choice\n";
		}
		
		cout << "\n\n Do You Want To Do Another Process ? ( Y / N )";
		cin >> x;
	} while (x != 'n' && x != 'N');

	return 0;
}