#include <iostream>
using namespace std;

int main() {}
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
    this->inerestRate = inerestRate;
    this->term = term;
  }
  CDAccount(double inerestRate, double balance, , int term) {
    this->inerestRate = inerestRate;
    this->balance = balance;
    this->term = term;
  }
  CDAccount(int term, double balance, double inerestRate) {
    this->term = term;
    this->balance = balance;
    this->inerestRate = inerestRate;
  }

  double getBalance() { return balance; }
  double getInterestRate() { return interestRate; }
  int getTerm() { return term; }

} matureBalance() {
  return cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << "When your CD matures in " << term << " months,\n"
       << "it will have a balalnce of $" << balance << endl;

  CDAccount account;
  getData(account);
  double rateFraction, interest;
  rateFraction = account.interestRate / 100.0;
  interest = account.balance * rateFraction * (account.term / 12.0);
  account.balance = account.balance + interest;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << "When your CD matures in " << account.term << " months,\n"
       << "it will have a balalnce of $" << account.balance << endl;
  return 0;
}
void getData(CDAccount) {
  cout << "Enter account balance: $";
  cin >> balance;
  cout << "Enter account interest rate: ";
  cin >> interestRate;
  cout << "Enter the number of months until maturity \n"
       << "(must be 12 or fewer months): ";
  cin >> term;
}
