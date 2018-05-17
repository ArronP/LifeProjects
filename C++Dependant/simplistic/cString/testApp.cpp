/*
* Arron Pontbriand
* Final Project
* MyString Indexing
* 4.25.18
* Last comment added 4.30.18
*/
#include "myString.h"
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

/*
Write a program which demonstrates that EACH of the methods of MyString work
correctly. This app should:
1. Create a MyString ojb
2. Call each function "X" times (Menu option)
3. Outputting the result or a statement that shows the return value of the
function or prints the obj.
*/

int main() {
	int index = 0;
	int lenMod = 0;
	int input = '0';	   // Used for switch statement
	char ch = 'x';		   // Used for character selection.
	char newCh = 'y';	  // used to replace old characters.
	char cstr[MAXSIZE];	// Used for manipulation.
	char newCstr[MAXSIZE]; // used for comparison.

	cout << "Please input a string!" << endl;
	cin.getline(cstr, MAXSIZE);
	MyString cString(cstr);
	MyString obj(newCstr);
	cout << "You Entered: ";
	cout << cstr << endl;

	do { // Used to reitterate functions and to test all elements.
		cout << "\n \n Welcome to the String Editor! Please select an option.\n"
			 << "==========================\n"
			 << "Menu \n"
			 << "1: Get Length\n--Get the length of the string. \n"
			 << "2: Add Character\n--Add a character to the end of the string. "
				"\n"
			 << "3: Get Character\n--Get a character at specified index. \n"
			 << "4: How Many\n--How many specified characters are in this "
				"string. \n"
			 << "5: Replace characters\n--Replace specified character with a "
				"new character. \n"
			 << "6: Equal\n--Is MyString object equal to object. \n"
			 << "7: Different\n--Is MyString object inequal to object. \n"
			 << "8: Display string\n--Display the string. \n"
			 << "9: Display string(specified)\n--Display the string up with a "
				"specified length. \n"
			 << "0: Exit\n--Exit the program. \n";

		cin >> input; // use a do-while loop.
		switch (input) {
		case 1: {
			{ cString.getLen(); } // Get length of MyString-cString.
		} break;

		case 2: {
			{
				cout << "What letter would you like to add?" << endl;
				cin >> ch; // Add a char to the end of the string.
				cString.add(ch);
			}
		} break;

		case 3: {
			{
				cout << "At what index are you searching for?" << endl;
				cin >> index; // output character at index.
				cString.getChar(index);
			}
		} break;

		case 4: {
			{
				cout << "What letter would you like to search for?" << endl;
				cin >> ch; // Similar method to case 3
				cString.howMany(ch);
			}
		} break;

		case 5: {
			{
				cout << "What character would you like to replace?" << endl;
				cin >> ch; // old char
				cout << "What character would you like to replace it with?"
					 << endl;
				cin >> newCh; // new character to input. (Works best with
							  // a-e-i-o-u.)
				cString.replaceChar(ch, newCh);
			}
		} break;

		case 6: {
			{
				cout << "What would you like the current string to compare to?"
					 << endl;
				cin >> newCstr; // Creation of a new string obj was done prior
								// to this.
				if (cString == newCstr) {
					cout << "They are equal." << endl;
				} else {
					cout << "They aren't equal." << endl;
				}
			}
		} break;

		case 7: {
			{
				cout << "What would you like the current string to compare to?"
					 << endl;
				cin >> newCstr; // same as case 6
				if (cString != newCstr) {
					cout << "They aren't equal." << endl;
				} else {
					cout << "They are equal." << endl;
				}
			}
		} break;

		case 8: {
			{
				cString.display();
			} // Display of current str (after all modifier).
		} break;

		case 9: {
			{
				cout << "How many characters would you like to view?" << endl;
				cin >> lenMod; //
				cString.display(lenMod);
			}
		} break;

		case 0: {
			{ cout << "\n Goodbye!"; }
		} break;
		}

	} while (input != 0);
}