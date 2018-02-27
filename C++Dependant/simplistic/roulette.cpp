//Arron Pontbriand
//Roulette Game
//2.11.18

#include <iostream>
#include <string>


using namespace std;


int main()
{
	int userNum; //only need 1 variable
	
	cout << "Please enter your number." << endl;
	cin >> userNum;

	//FIXME: HOW TO HANDLE DOUBLE VALUES + STRING VALUES.

	if (userNum == 0) {
		cout << "Green - " << userNum << endl;
	} //to state that 0 is always green.

	if (userNum >= 1 && userNum <= 10) { // this code can be duplicated over and over again for "X" amount of cases.
		if ((userNum % 2) != 0) { // if usernum isnt perfectly divisible by 0 then its odd.
			cout << "Red - " << userNum << endl;
		}
		else {
			cout << "Black - " << userNum << endl;
		}
	}

	if (userNum >= 11 && userNum <= 18) {
		if ((userNum % 2) != 0) {
			cout << "Black - " << userNum << endl;
		}
		else {
			cout << "Red - " << userNum << endl;
		}
	}

	if (userNum >= 19 && userNum <= 28) {
		if ((userNum % 2) != 0) {
			cout << "Red - " << userNum << endl;
		}
		else {
			cout << "Black - " << userNum << endl;
		}
	}

	if (userNum >= 29 && userNum <= 36) {
		if ((userNum % 2) != 0) {
			cout << "Black - " << userNum << endl;
		}
		else {
			cout << "Red - " << userNum << endl;
		}
	}
	if (userNum > 36) {
		cout << "Error - the number must be between 0-36." << endl;
	} //gurantees anything over 36 will provide an error.

	return 0;
}