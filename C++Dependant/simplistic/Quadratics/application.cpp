//Arron Pontbriand
//4.23.18
//Quadratic Functions

#include "quadratics.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  int a = 0; //Initialized at 0, so they are never used as junk vars.
  int b = 0;
  int c = 0;
  int value = 0;
  
  Quad quadratic1; //initial constructor
  
  cout << "Please enter valid values for coeffecients A, B and C. " << endl; //Creation of quadratic 3 which is the full custom quadratic
  cin >> a >> b >> c;
  Quad quadratic3(a, b, c);
  cout << "You entered: " << a << ", " << b << ", " << c << ". To make: " << endl; //Something like this could possibly be made into a constructor as well.
  quadratic3.printQuad();
  cout << endl;
  
  cout << "Please enter a valid value for Coeffecient C." << endl; //Creation of quadratic 2.
  cin >> value;
  Quad quadratic2(value);
  cout << "You entered: " << value << ". To make: " << endl;
  quadratic2.printQuad();
  cout << endl;
  
  Quad quadratic4; //Iinitializtion of Quad4 for multiplication.
  
  cout << "Sample Quadratic of: 1x^2 + 1x+ 1 has been created." << endl; //simple cout stating quadratics have been created.
  cout << "sample Quadratic of: 0x^2 + 0x + " << value << " has been created." << endl;
  cout << "Sample Quadratic of: " << a << "x^2 + " << b << "x + " << c << " has been created." << endl; //chose to use this instead of .print() for demonstrative purposes.
  
  cout << "please enter a value for X to solve quadratic 1." << endl;
  cin >> value;
  cout << "Sample quadratic 1 with " << value << " as X equals: ";
  quadratic1.eval(value);
  
  cout << "please enter a value for X to solve quadratic 2." << endl;
  cin >> value;
  cout << "Sample quadratic 2 with " << value << " as X equals: ";
  quadratic2.eval(value);
  
  cout << "please enter a value for X to solve quadratic 3." << endl;
  cin >> value;
  cout << "Sample quadratic 3 with " << value << " as X equals: ";
  quadratic3.eval(value);
  
  quadratic4 = quadratic1 + quadratic1; //Math for quadratic solution.
  quadratic1.printQuad(); //Wasnt sure the best method to output it, thought this looked the most appropriate.
  cout << "+";
  quadratic1.printQuad();
  cout << endl;
  cout << "=";
  quadratic4.printQuad();
  cout << endl;
  
  quadratic4 = quadratic1 + quadratic2;
  quadratic1.printQuad();
  cout << "+";
  quadratic2.printQuad();
  cout << endl;
  cout << "=";
  quadratic4.printQuad();
  cout << endl;
  
  quadratic4 = quadratic1 + quadratic3;
  quadratic1.printQuad();
  cout << "+";
  quadratic3.printQuad();
  cout << endl;
  cout << "=";
  quadratic4.printQuad();
  cout << endl;
  
  quadratic4 = quadratic2 + quadratic2;
  quadratic2.printQuad();
  cout << "+";
  quadratic2.printQuad();
  cout << endl;
  cout << "=";
  quadratic4.printQuad();
  cout << endl;
  
  quadratic4 = quadratic2 + quadratic3;
  quadratic2.printQuad();
  cout << "+";
  quadratic3.printQuad();
  cout << endl;
  cout << "=";
  quadratic4.printQuad();
  cout << endl;
  
  quadratic4 = quadratic3 + quadratic3;
  quadratic3.printQuad();
  cout << "+";
  quadratic3.printQuad();
  cout << "=";
  quadratic4.printQuad();
  cout << endl;
  
  quadratic1 == quadratic1; //FIXME: Wasn't sure why these fucntions weren't working properly, would love some insight :)
  quadratic1 == quadratic2;
  quadratic1 == quadratic3;
  quadratic2 == quadratic2;
  quadratic2 == quadratic3;
  quadratic3 == quadratic3;
  
  quadratic1 != quadratic1;
  quadratic1 != quadratic2;
  quadratic1 != quadratic3;
  quadratic2 != quadratic2;
  quadratic2 != quadratic3;
  quadratic3 != quadratic3;
  
  cout << "please enter a value to multiply the Quad by." << endl; //Multiplaction for the quads.
  cin >> value;
  quadratic1.multiple(value);
  quadratic1.printQuad();
  cout << endl;
  
  cout << "please enter a value to multiply the Quad by." << endl;
  cin >> value;
  quadratic2.multiple(value);
  quadratic2.printQuad();
  cout << endl;
  
  cout << "please enter a value to multiply the Quad by." << endl;
  cin >> value;
  quadratic3.multiple(value);
  quadratic3.printQuad();
  cout << endl;
}