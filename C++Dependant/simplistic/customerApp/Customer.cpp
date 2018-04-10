/*Arron Pontbriand
*4.9.18
*CreditCardSolution - Payments and credit.
*FIXME-Validate everything with logins and SQL
*/
#include "customer.h"
#include <iostream>
#include <string>
using namespace std;

// Setter functions
void CustomerInfo::setAcct(int aNo) { // Simple input of account number. Like a
									  // login (But not verified)
	do {
		cout << "Please enter your account Number." << endl;
		cin >> aNo;
		accountNo = aNo;
	} while (aNo <= 0);
}
void CustomerInfo::setCredit(double amount) { // I wish I had the option to choose my credit...
	int userNum;	 // Setters mutate the private elements.
	cout << "What do you fall under?\n"
		 << "1. A full-time student\n"
		 << "2. A full-time worker\n"
		 << "3. Unemployed and not a student\n"
		 << "Please press 1, 2, or 3 to get your credit limit.\n";
	cin >> userNum;
	if (userNum == 1) { // If options to decide your credit.
		amount = 200.00;
		creditLimit = amount;
	} else if (userNum == 2) {
		amount = 400.00;
		creditLimit = amount;
	} else if (userNum == 3) {
		amount = 100.00;
		creditLimit = amount;
	} else {
		cout << "you didn't enter a correct value. Please try again" << endl;
		return;
	}
}

// Standard functions
double CustomerInfo::availCredit() const {
	double availableCredit; // Create a variable for use with Display.
	availableCredit = creditLimit - balance;
	cout << "Your available credit is: " << availableCredit << endl;
	return availableCredit;
}
bool CustomerInfo::makePurchase(double amount) {
	if (amount >
		creditLimit) { // If cost is greater than you have add more credit.
		return false;
	} else { // else proceed with purhcase.
		return true;
	}
}
void CustomerInfo::makePayment(double amount) {
	cout << "Payment confirmed." << endl;
	balance = creditLimit - amount; // New balance that month.
}
void CustomerInfo::moreCredit(double amnt) {
	cout << "Adding more credit..."
		 << endl; // Statement to cover the rest of the cost.
}
void CustomerInfo::display() const { // display important information to user.
	availCredit();
	getBal();
}

// Getter functions
int CustomerInfo::getAcctNo() const {
	cout << "Your account number is: " << accountNo
		 << endl; // taken from setter.
	return accountNo;
}
double CustomerInfo::getBal() const {
	cout << "Your balance is: " << balance
		 << endl; // Only called once. All new users are 0.0
	return balance;
}
double CustomerInfo::getCreditLimit() const {
	cout << "Your credit limit is: " << creditLimit
		 << endl; // taken from setter.
	return creditLimit;
}
