//Arron Pontbriand
//4.23.18
//Quadratic Functions
#include "quadratics.h"
#include <iostream>
#include <string>
using namespace std;


Quad::Quad() : newa(1), newb(1), newc(1) { //Constructor 1
}
Quad::Quad(int value) : newa(0), newb(0), newc(value) { //Constructor 2
  
}
Quad::Quad(int a, int b, int c) : newa(a), newb(b), newc(c) { //Constructor 3
}

int  Quad::eval(int value) const { // a*(x*x) + (b*x) + c
int ans = newa * (value * value) + (newb*value) + newc; //Wrote it as ans instead of returning equation, so I could easily cout.
cout << ans << endl;
return ans;
}

Quad Quad::operator+(const Quad& qu) const{ //overload
  Quad quadTotal; //initialization of a new Quad for comparison
  
quadTotal.newa = newa + qu.newa;
quadTotal.newb = newb + qu.newb;
quadTotal.newc = newc + qu.newc;
return quadTotal;
}

bool Quad::operator==(const Quad& p) const { //Overload
Quad similarQuad; //Initialization of New Quad for comparison
  if (similarQuad.newa == p.newa && similarQuad.newb == p.newb && similarQuad.newc == p.newc) { //FIXME: Something is causing this function to fail, not sure what it is. Attempted a few things, would love some insight
    similarQuad.printQuad(); //If they're the same then they should all cout the same
    cout << "==";
    p.printQuad();
    cout << endl;
    cout << "They are the same!" << endl << endl;
    return true;
  } else { return false; } //Don't need to cout false, != will handle that.
}

bool Quad::operator!=(const Quad& q) const { //Overload
Quad differentQuad; //Initialization for comparison purposes. 
  if (differentQuad.newa != q.newa && differentQuad.newb != q.newb && differentQuad.newc != q.newc) { //FIXME: Something is causing this function to fail, not sure what it is. Attempted a few things, would love some insight
    differentQuad.printQuad(); //IF they're different than printing them will visibly show that. 
    cout << "!=";
    q.printQuad();
    cout << endl;
    cout << "They are different!" << endl << endl;
    return true;
  } else { return false; } //Don't cout false, == will do that.
}

Quad Quad::multiple(int value) { //Simple multiplication instructions.
newa = newa * value;
newb = newb * value;
newc = newc * value;
}

void Quad::printQuad() const { //Simple print function. Handy for reducing redundant code.
cout << newa << "x^2 + " << newb << "x + " << newc;
}