
#include <iostream>
using namespace std;
int main() {
  double hours, dependants, rate, overtimeRate, grossPay, netPay,
      withheldAmount;

  const float SSTAX = 0.06;
  const float FEDTAX = 0.14;
  const float STATETAX = 0.05;
  const float DUES = 10;
  const float DEPEND = 35;
  const float RATE = 16.78;
  overtimeRate = 1.5;
  cout << "Press return after entering a number. \n";
  cout << "Enter the number of hours worked: \n";
  cin >> hours;
  cout << "Enter number of dependants: \n";
  cin >> dependants;

  if (hours <= 40) {
    grossPay = hours * rate;
  } else {
    grossPay = (40 * rate) + ((hours - 40) * (rate * overtimeRate));
  }

  if (dependants >= 3) {
    withheldAmount = grossPay - DEPEND;
  } else {
    withheldAmount = grossPay;
  }
  netPay = grossPay - (grossPay * (SSTAX + FEDTAX + STATETAX));
  netPay = netPay - DUES;

  cout << "Based on " << hours << "hrs. " << endl;
  cout << "The gross pay is " << grossPay << endl;
  cout << "The amount after health insurance is " << withheldAmount << endl;
  cout << "The net pay is " << netPay << endl;
}