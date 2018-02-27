//nineProperty.cpp 
//Arron Pontbriand
//2.26.18

#include <iostream>
#include <string>

using namespace std;
int main() {
  //This is to allow to user to execute the program again.
  beginning:
  //Using an array to store variables easier.
  int userArray[5], sum = 0;
  int userNum;
  char input;
  
  //sumDiv & originalDiv are int values to store wether or not its divisible by 9;
  int sumDiv;
  int originalDiv;
  
  //Do-while loop that will repromt the user UNTIL a 5 digit integer is reached.
  do {
    cout << "Enter a positive 5 digit number: ";
    cin >> userNum;
    
  } while (userNum >= 99999 || userNum <= 9999); //FIXME: entering an obscenely large integer like "12314556666768" somehow sets the DO into an infinite loop. Any chance you could tell me why?
  
    //Stores the LAST digit as userArray[i]. Then it removes the last number and repeats the proccess.
    //Then it sums each array element.
    for (int i = 0; i < 5; ++i) 
    {
        userArray[i] = userNum % 10;
        userNum /= 10;
        sum += userArray[i];
    } 
    cout << "Sum = " << sum << endl; 
    
    //Math to find out if there is a remainder. IF there isn't a remainder than it is perfectly divisible by 9.
    sumDiv = sum % 9;
    originalDiv = userNum % 9;
    
    //simple if-else statement to check if it is divisble by nine or not for BOTH occasions.
    if (sumDiv == 0 && originalDiv == 0) {
      cout << "It worked!" << endl;
    } else {
      cout << "It didin't work." << endl;
    }
    
    //Prompt the user to test another number if they'd like to.
    cout << "Would you like to rerun the program? (y/n)" << endl;
    cin >> input;
    if (input == 'y') goto beginning; //Had to lookup how to do this command. Really cool execution method.
    
}