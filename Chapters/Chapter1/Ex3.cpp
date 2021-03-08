#include <iostream>
using namespace std;
int main()
{
  double numberOfQuarters, numberOfDimes, NumberOfNickels, amountQ, amountD, amountN, sum;
  cout << "Press return after entering a number. \n";
  cout << "Enter the number of quarters: \n";
  cin >> numberOfQuarters;
  cout << "Enter the number of dimes: \n";
  cin >> numberOfDimes;
  cout << "Enter the number of nickels: \n";
  cin >> NumberOfNickels;

  amountQ = numberOfQuarters * 0.25;
  amountD = numberOfDimes * 0.10;
  amountN = NumberOfNickels * 0.05;
  sum = amountQ + amountD + amountN;

  cout << "The total for all the coins is ";
  cout << "$ ";
  cout << sum;
  return 0;
}