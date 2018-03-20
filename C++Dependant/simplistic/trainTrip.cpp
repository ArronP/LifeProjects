// Arron Pontbriand
// TrainTrip Logger
// 3.3.18

#include <iostream>

using namespace std;
int main() {
	// Constant Variable since train capacity is always the same.
	const int MAX_CAP = 20;
	int seats[20]; // Seat 0 is the front.
	int userNum;
	int i = 0;


	char input; // This is for user input

	// First: Initalize ALL seats to 0;
	cout << "The application is setting up. Please press 'y' if you'd like to "
			"begin."
		 << endl;
	cin >> input;
	if (input == 'y') {
		cout << "Are you starting a new train schedule? (y/n)" << endl;
		cin >> input;
		if (input == 'y') {
			cout << "All seats are now set to 0" << endl;

			for (i = 0; i < MAX_CAP; ++i) {
				seats[i] = 0;
				cout << "Seat: " << seats[i] << endl;
			}
		}
		cout << "Great please select one of the following options:" << endl
			 << "Q: reserve a particular seat, if available." << endl
			 << "W: reserve a seat furthest to the front." << endl
			 << "E: reserve a seat furthest to the rear." << endl
			 << "R: cancel a particular seat reservation." << endl
			 << "T: print out the status of all seats on the train." << endl
			 << "Y: check if train is full." << endl
			 << "U: check if the train is empty." << endl
			 << "X: exit the application." << endl;
		cin >> input;
		do {
			switch (input) {
			case 'q':
				do {
					cout << "Which seat would you like to reserve? (0-20)"
						 << endl;
					cin >> userNum;
				} while (userNum < 0 || userNum > 20);
				seats[userNum] = 1;
				cout << "Seat #" << userNum << " is now reserved!" << endl;
				break;
			case 'w':
				for (i = 0; i < MAX_CAP; ++i) {
					if (seats[i] == 0) {
						seats[i] = 1;
						cout << "Seat #" << i << " has been reserved." << endl;
						break;
					}
				}

				break;
			case 'e':
				for (i = MAX_CAP; i > 0; --i) {
					if (seats[i] == 0) {
						seats[i] = 1;
						cout << "Seat #" << i << " has been reserved." << endl;
						break;
					}
					break;
				}
				break;
			case 'r':
				cout << "Which reservation would you like to cancel?" << endl;
				cin >> userNum;
				seats[userNum] = 0;
				cout << "Seat #" << userNum
					 << " has had their reservation canceled." << endl;
				break;
			case 't':
				cout << "This is the status of all tickets:" << endl;
				for (i = 0; i < MAX_CAP; ++i) {
					cout << "Seat: " << seats[i] << endl;
				}
				break;
			case 'y':
				for (i = 0; i < MAX_CAP; ++i) {
					if (seats[i] == 0) {
						cout << "The train is not full!" << endl;
						break;
					}
				}
				break;
			case 'u':
				for (i = 0; i < MAX_CAP; ++i) {
					if (seats[i] = 1) {
						cout << "The train is not empty!" << endl;
						break;
					}
				}
				break;
			case 'x':
				cout << "Goodbye." << endl;
				break;
			}
		} while (input != 'x');
		//}
	} else {
		cout << "Goodbye." << endl;
	}
}
