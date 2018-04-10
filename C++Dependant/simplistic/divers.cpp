/*DiverScores.cpp
*Arron Pontbriand
*3.29.18
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void getDegree(double& degree) {
  do { //Until its within that span, it will reprompt.
    cout << "Enter a degree of difficulty between 1.2 & 3.8" << endl;
    cin >> degree;
  } while (degree < 1.2 || degree > 3.8);
}

void getScores(double scores[], int numScores) { //simple input output function.
  int i;
  for (i=0;i<numScores;i++) {
    cout << "Judge " << i+1 << ", please enter your score." << endl;
    cin >> scores[i];
  }
}

double sum(const double scores[], int numScores) {
  double sum;
  int i;
  
  for (i=0;i<numScores;i++) { // finds sum of all numbers
    sum = sum + scores[i];
  }
  
  cout << "The sum of your scores is: " << sum << endl;
  return sum;
}

double highest(const double scores[], int numScores) {
  double high;
  int i;
  high = scores[0];
  
  for (i=1;i<numScores;i++) {
    if (scores[i] > high) { //go through each number and checks if its higher than first assigned.
      high = scores[i];
    }
  }
  cout << "The highest score recieved was: " << high << endl;
  return high;
}

double lowest(const double scores[], int numScores) {
  double low;
  int i;
  low = scores[0];
  
  for (i=1;i<numScores;i++) {
    if (scores[i] < low) { //go through each number and checks if its lower than firstr assigned.
      low = scores[i];
    }
  }
  cout << "The lowest score recieved was: " << low << endl;
  return low;
}
//FIXME: Hugely confused by this. The only correct way to make sure all information was correct was to pass in the degree, however the assignment never mentioned that. Also, how are you supposed to reliably obtain "Sum" when it's never passed into any function. It'd have to be global, which is fundamentally incorrect I thought. 
double average(vector<double> finals, const double scores[], int numScores, double& degree) {
  double sum;
  int i;
  
  for (i=0;i<numScores;i++) { //forced to recreate sum because it's never passed into anything.
    sum = sum + scores[i];
  }
  for (i=0;i<finals.size();i++) { //to check the size and then add the approrpiate knowledge.
  //FIXME: Gives a strange error, was unable to correct it before the due date, however every other function works correctly.
  finals(i) = (sum * degree) * 0.6;
  }
}

int main() {
  double degree;  
  int numScores = 7;
  int diverAmount;
  

  double scores[7];
  vector<double> finals(diverAmount);
  
  cout << "How many divers?" << endl;
  cin >> diverAmount;
  
  getDegree(degree);
  getScores(scores, numScores);
  sum(scores, numScores);
  highest(scores, numScores);
  lowest(scores, numScores);
  average(finals, scores, numScores, degree);
}