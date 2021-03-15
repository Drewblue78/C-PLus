#include <iostream>
using namespace std;
double num1, num2, num3;
double max(double num1, double num2, double num3);

int main() {
  char ans;
  do {
    cout << "Please enter two or three numbers to find the max number:";
    cin >> num1, num2, num3;
    cout << "The largest number is: " << max(num1, num2, num3) << endl;
    cout << "Do you want to begin again?" << endl;
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
  return 0;
}
double max(double num1, double num2, double num3) {
  if (num1 > num2 && num1 > num3) {
    return num1;
  } else {
    if (num2 > num3) {
      return num2;
    }
    return num3;
  }
}