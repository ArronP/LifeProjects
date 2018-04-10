/*MetricConverter.cpp
*Arron Pontbriand
*3.25.18
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int getFeet(int feet) { //throw a param to reduce redundancy.
	cout << "Enter a positive amount of feet." << endl;
	cin.ignore(); // ignore endl;
	cin >> feet;
	if (feet < 0 || feet % 1 != 0) { // if less than 0 or has a reaminder (is a decimal)
		cout << "Error, not a valid integer. Please try again" << endl;
		cin.ignore();
		cin >> feet;
	} else {
		return feet;
	}
}

int getInches(int inches) { //throw a param to reduce redundancy.
	cout << "Enter a positive amount of inches." << endl;
	cin.ignore();
	cin >> inches;
	if (inches < 0 || inches % 1 != 0) {// if less than 0 or has a reaminder (is a decimal)
		cout << "Error, not a valid integer. Please try again" << endl;
		cin.ignore();
		cin >> inches;
	} else {
		return inches;
	}
}

void toMetricDistance(int feet, int inches) {
  feet = getFeet(feet); //set it to this so you dont have prompts running twice.
  inches = getInches(inches); //is ther a commenting practice that handles multiple lines of the same thing which may or may not need the same comment?
	cout << feet << " Feet is " << feet * .3048 << " meters." << endl ;
	cout << inches << " Inches is " << inches * 2.54 << " centimeters." << endl;
}

int getPounds(int lbs) { //throw a param to reduce redundancy.
	cout << "Enter a positive amount of pounds." << endl;
	cin.ignore();
	cin >> lbs;
	if (lbs < 0 || lbs % 1 != 0) {// if less than 0 or has a reaminder (is a decimal)
		cout << "Error, not a valid integer. Please try again" << endl;
		cin.ignore();
		cin >> lbs;
	} else {
		return lbs;
	}
}

int getOunces(int ounces) { //throw a param to reduce redundancy.
	cout << "Enter a positive amount of ounces." << endl;
	cin.ignore();
	cin >> ounces;
	if (ounces < 0 || ounces % 1 != 0) {// if less than 0 or has a reaminder (is a decimal)
		cout << "Error, not a valid integer. Please try again" << endl;
		cin.ignore();
		cin >> ounces;
	} else {
		return ounces;
	}
}

void toMetricWeight(int lbs, int ounces) {
	lbs = getPounds(lbs);
	ounces = getOunces(ounces);
	cout << lbs << " Lbs is " << lbs * 0.453592 << " kilograms." << endl ;
	cout << ounces << " Ounces is " << ounces * 28.3495 << " grams." << endl;
}

int menu() {
	int choice;
	do { // simple menu creator. 
		cout << "\n Menu";
		cout << "\n========";
		cout << "\n 1 - Convert US distance to metric";
		cout << "\n 2 - Convert US weight to metric";
		cout << "\n 3 - Quit";
		cout << "\n Enter selection: ";

		cin >> choice;

		switch (choice) {
		case 1: {
		  int feet, inches;
			toMetricDistance(feet, inches); // in order for me to call it I needed to state params.
		} break;
		case 2: {
		  int pounds, ounces;
			toMetricWeight(pounds, ounces);
		} break;
		case 3: {
			cout << "Goodbye";
		} break;
		}
	} while (choice != 3);
}

int main() {
	menu();
	return 0; // required in order to run.
}