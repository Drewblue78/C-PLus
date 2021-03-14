#include <iostream>
using namespace std;
double milesPerGallon(int ml, int lt);
const double LITER = 0.264172;

int main() {
  char ans;
  int lt, ml;
  do {
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Please enter the number of liters of gasoline:" << endl;
    cin >> lt;
    cout << "Please enter the number of miles traveled: " << endl;
    cin >> ml;
    cout << "The mileage is: " << milesPerGallon(ml, lt) << " mpg" << endl;
    cout << "Do you want to begin again?";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
  return 0;
}
double milesPerGallon(int m, int l) {
  double gallons;
  gallons = LITER * l;
  return (m / gallons);
}