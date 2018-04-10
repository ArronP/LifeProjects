/*Arron Pontbriand
*4.9.18
*CreditCardSolution - Payments and credit.
*FIXME-Validate everything with logins and SQL
*/

#include <iostream>
#include <string>
using namespace std;
/*I created this from the scope that I am working for the credit card company, and my
*customer is making late payments (with no fees). Wasn't sure
*which scope the program was meant to be assumed in. Just states it's a customer
*/
class CustomerInfo{
  public:
  
  void setAcct(int aNo);
  void setCredit(double amount);  //precondition amount is positive

  int getAcctNo() const;
  double getCreditLimit() const;
  double getBal() const;

  double availCredit() const;
  void moreCredit(double amnt);       // precondition – amount is positive
  bool makePurchase(double amount);   // precondition – amount is positive
  void display() const;
  void makePayment(double amount);     // precondition – amount is positive
  
  private:
  int accountNo;       //customer’s account number
  double creditLimit;   // max credit available
  double balance = 0.0;      // current balance – new customer balance is 0.0
};