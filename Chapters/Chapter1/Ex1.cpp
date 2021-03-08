#include <iostream>
using namespace std;
int main()
{
  int numberOne, numberTwo, sum;
  cout << "Press return after entering a number. \n";
  cout << "Enter the first number: \n";
  cin >> numberOne;
  cout << "Enter the second number: \n";
  cin >> numberTwo;
  sum = numberOne + numberTwo;
  cout << "If you add ";
  cout << numberOne;
  cout << " and ";
  cout << numberTwo;
  cout << " the result is ";
  cout << sum;
  return 0;
}