#include <iostream>
using namespace std;
double num1, num2, num3;
int main() {
  char ans;
  do {
    cout << "Please enter two or three numbers to find the max number:";
    cin >> num1, num2, num3;
    double max(double num1, double num2, double num3) {
      if (num1 > num2) {
        return num1;
      } else {
        return num2;
      }
      if (num1 > num2 and num1 > num3) {
        return num1;
      } else if (num2 > num1 and num2 > num1) {
        return num2;
        return num3;
        cout << max(num1, num2, num3);
      }
    }
    cout << "Do you want to begin again?";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
  return 0;
}