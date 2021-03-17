#include <cmath>
#include <iostream>
using namespace std;

void inputMetric(double meters, double cm);
void calc(double meters, double cm, double ft, double in);
void outputImperial(double ft, double in, double meters, double cm);

int main() {
  int giveMetric() {
    double meters, cm, ft, in;
    char ans;
    do {
      cout << " Meters and centimeters to feet and inches " << endl;
      inputMetric(meters, cm);
      calc(meters, cm, ft, in);
      outputImperial(ft, in, meters, cm);
      cout << "Do you want to begin again?" << endl;
      cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "Have a nice day. \n";
    return 0;
  }
  void inputMetric(double meters, double cm) {
    cout << "Meters: ";
    cin >> meters;
    cout << "Centimeters: ";
    cin >> cm;
  }
  void calc(double meters, double cm, double ft, double in) {}
  void outputImperial(double ft, double in, double meters, double cm) {
    cout << meters << " meters " << cm << " centimeters is equivalent to " << ft
         << " feet " << in << " inches" << endl;
  }
}
