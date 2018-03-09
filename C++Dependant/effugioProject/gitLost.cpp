/* The Effugio Project
* 11.23.2017
* Git Lost
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string strInput = "";
    int intInput;
    char charInput;
    string Twitter = "@OfficialEffugio";
    
    cout << "Escape Into Your ____" << endl;
    getline (cin,strInput);
    
    if (strInput != "Mind" || strInput != "mind") {
        cout << "The stegth to surpass your past lies within your own future." << endl; //Damn that's deep.
    } else {
        cout << "Escape from the mind is the best form of progression." << endl << endl;
    }
    
    cout << "Would you like to continue? (y/n)" << endl;
    cin >> charInput;
    
    if (charInput == 'y' || charInput == 'Y') {
        cout << "Git lost is a journey into the mind. Sometimes allowing yourself to fall deep into the music is the quickest way to relief." << endl << "Please stay safe and responsible. If you need anything message me on twitter. " << Twitter << endl;
    } else {
        cout << "Goodbye...";
    }
    
}