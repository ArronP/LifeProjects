/*
* Arron Pontbriand
* Final Project
* MyString Indexing
* 4.25.18
* Last Comment added 4.30.18
*/
#include "myString.h"
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

MyString::MyString(char cstr[]) {
	strcpy(str, cstr); // Cstring function defined in the library.
	// if (strcmp(str, cstr)) { This was to double check that 'strcpy' was
	// working properly.
	// cout << "The strings are not the same." << endl;
	//} else { cout << "The strings are the same." << endl; }
}

int MyString::getLen() const { // Why not just use strlen()? - I do.
	// Would using userString.size work? - No.
	int len = 0;							  // INitialized local var.
	len = strlen(str);						  // CString function.
	cout << "String Length: " << len << endl; // easiest wayo to find a length
	return len;
}

int MyString::howMany(char ch) const { // FIXME: READONLY MODE ON INDEX.
	int i = 0;
	int count = 0;

	for (i = 0; i < strlen(str); ++i) { // loop to check through all characters.
		if (str[i] == ch) {				//== NOT =.
			count = count + 1;			// Count
		}
	}
	cout << "The letter " << ch << " is included " << count << " times."
		 << endl;
	return count;
}

char MyString::getChar(int index) const { // BUG REPORT ME.
	if (index >
		strlen(str)) { // To print null if index is greater than available.
		cout << '\0' << endl;
		return '\0';
	} else {
		cout << "Requested character is: " << str[index] << endl;
		return str[index];
	}
}

void MyString::add(char ch) {
	// Using push_back or userString.append; NO. DOESNT WORK.
	int len = strlen(str);
	str[len] = ch;		 // Set len max to ch
	str[len + 1] = '\0'; // Increase size of len
	cout << str << endl;
}

void MyString::replaceChar(char oldChar, char newChar) {
	int i = 0;

	for (i = 0; i < strlen(str); ++i) { // loop through the str.
		if (str[i] == oldChar) {
			str[i] = newChar; // Sets str at index i to new char.
		}
	}

	cout << str << endl;
}

bool MyString::operator==(const MyString &obj) const {
	// Define a string(str) to comapre.
	return strcmp(str, obj.str) == 0; // compares str and new obj.str.
}

bool MyString::operator!=(const MyString &obj) const {
	return strcmp(str, obj.str) != 0; // compares str and new obj.str.
}

void MyString::display() const {
	cout << str << endl; // displays string.
}

void MyString::display(int n) const {
	int i = 0;
	n = n - 1;
	if (n > strlen(str)) { // to disallow user from printing null chars.
		cout << str << endl;
	} else {
		for (i = 0; i <= n; i++) { // to print each char individually.
			cout << str[i];
		}
	}
}