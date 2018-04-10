/*Arron Pontbriand
*4.9.18
*CreditCardSolution - Payments and credit.
*FIXME-Validate everything with logins and SQL
*/
#include "customer.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	int userNum; // use for entry with numericals
	int numMonths;
	int i;
	double totalCost;
	double backDue;
	double remainingBal;
	double userDub;
	char entry;
	CustomerInfo customer; // creation of object AFTER statement of numericals

	customer.setAcct(userNum);   // Setting information
	customer.setCredit(userDub); // Setting information

	customer.getAcctNo();
	customer.getCreditLimit();
	customer.getBal(); // New customers are 0.0

	cout << "How many months will be simulated?" << endl;
	cin >> numMonths;
	for (i = 0; i < numMonths; i++) {
		cout << "For month " << i + 1
			 << " please provide total cost of all purchases." << endl;
		cin >> totalCost;
		cout << "You owe: " << totalCost << endl;
		customer.makePurchase(totalCost);
		if (customer.makePurchase(totalCost) == true) {
			customer.makePayment(totalCost);
		} else {
			cout << "error processing request. The cost is greater than your "
					"limit."
				 << endl;
			customer.moreCredit(remainingBal);
		}
		customer.display();
	}
}
