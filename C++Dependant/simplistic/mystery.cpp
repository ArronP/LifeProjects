/*Arron Pontbriand
*3.17.18
*MysteryDinnerSeating
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	const int NUM_RESERVATION = 50; // Number of elements in vector
	vector<string> reservationList(0); //Set each one = 0 so push_back can be used. 
	vector<string> waitingList(0); 

	int i;			 // Looping integer.
	int choice;		 // Use to cycle through the 4 options.
	string strInput; // Use to add or remove reservations.
	bool foundGuest = false; // Used in case 2 to find a user.

	do {
		cout << "\n Menu";
		cout << "\n========";
		cout << "\n 1 - Add Guest"; // Provide name. Add to list push().
		cout << "\n 2 - Check for reservation"; // Using a loop for x.at(i) == userName.
		cout << "\n 3 - Print reserved"; // Print all Guests on the reservationList.
		cout << "\n 4 - Print waitlist"; // Print all GUests on the waitList.
		cout << "\n 5 - Exit";
		cout << "\n Enter selection: ";
		// read the input

		cin >> choice;

		switch (choice) {
		case 1: {
			cout << "Please enter the name of the Guest." << endl;
			cin.ignore();			// Ignore the endl.
			getline(cin, strInput); // Gets whole line, including spaces.
			if (reservationList.size() == NUM_RESERVATION) {
				waitingList.push_back(strInput);
				cout << "Guest has been added to the Waiting List." << endl;
			} else {
				reservationList.push_back(strInput);
				cout << "Guest has been added to the Reservation List." << endl;
			}
		} break;

		case 2: { // FIXME: Throws instance error. Unsure why.
			cout << "Please enter a name. (Example: arron pontbriand)" << endl;
			cin.ignore();			// Ignore the endl.
			getline(cin, strInput); // Gets whole line, including spaces.

			for (i = 0; i < NUM_RESERVATION;++i) { // loops through the list and states if they have a reservation and where.
				if (reservationList.at(i) == strInput) {
					foundGuest = true;
					cout << "Guest has a reservation. They are reservation #" << i + 1; //i+1 for user readability.
				}
				if (waitingList.at(i) == strInput) {
					foundGuest = true;
					cout << "Guest is on the waiting list. They are waiting #" << i + 1; //i+1 for user readability.
				}
			}
			if (foundGuest == false) {
				cout << "User does not have a reservation and is not on the waiting list." << endl;
			}
		} break;

		case 3: {
			for (i = 0; i < reservationList.size(); ++i) {
				cout << "#" << i + 1 << ". " << reservationList.at(i) << endl;
			}
		} break;

		case 4: {
			for (i = 0; i < NUM_RESERVATION; ++i) {
				cout << "#" << i + 1 << ". " << waitingList.at(i) << endl;
			}
		} break;

		case 5: {
			cout << "\n Goodbye!";
		} break;

		default:
			cout << "\n Invalid selection";
			// no break in the default case
		}
		cout << "\n";
	} while (choice != 5); //Looping method.
}