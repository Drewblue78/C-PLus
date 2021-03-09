#include <iostream>
using namespace std;
int main()
{
  double annualSalary, newAnnualSalary, newMonthlySalary, amountDue;
  const double raise = 0.076;
  const double monthlySalary = annualSalary / 12;
  cout << "Press return after entering a number. \n";
  cout << "Enter the annualSalary: \n";
  cin >> annualSalary;
  newAnnualSalary = (annualSalary * raise) + annualSalary;
  newMonthlySalary = newAnnualSalary / 12;
  amountDue = newMonthlySalary - monthlySalary;

  cout << "The amount due is: ";
  cout << "$";
  cout << amountDue;
  return 0;
}