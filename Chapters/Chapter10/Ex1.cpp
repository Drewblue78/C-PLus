#include <iostream>
using namespace std;
void getData(CDAccount* acc);

class CDAccount {
 private:
  double balance;
  double interestRate;
  int term;

 public:
  CDAccount() {
    balance = 0;
    interestRate = 0;
    term = 0;
  }
  CDAccount(double balance, double inerestRate, int term) {
    this->balance = balance;
    this->interestRate = inerestRate;
    this->term = term;
  }

  double getBalance() { return balance; }
  double getInterestRate() { return interestRate; }
  int getTerm() { return term; }
  double matureBalance() {
    double rateFraction, interest;
    rateFraction = interestRate / 100.0;
    interest = balance * rateFraction * (term / 12.0);
    return balance + interest;
  }
  void getData(CDAccount* acc) {
    cout << "Enter account balance: $";
    cin >> balance;
    cout << "Enter account interest rate: ";
    cin >> interestRate;
    cout << "Enter the number of months until maturity \n"
         << "(must be 12 or fewer months): ";
    cin >> term;
  }
}

  int main() {
  CDAccount account;
  CDAccount myAccount;
  getData(account);
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << "When your CD matures in " << account.getTerm() << " months,\n"
       << "it will have a balalnce of $" << account.getBalance() << endl;
}
