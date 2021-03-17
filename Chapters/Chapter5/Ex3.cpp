#include <cmath>
#include <iostream>
using namespace std;

void giveMetric();
void inputMetric(double& meters, double& cm);
void calcToImperial(double meters, double cm, double& ft, double& in,
                    double& length);
void outputImperial(double& ft, double& in, double& meters, double& cm,
                    double& length);

int main() { giveMetric(); }
void giveMetric() {
  double meters, cm, ft, in, length;
  char ans;
  do {
    cout << "Meters and centimeters to feet and inches " << endl;
    inputMetric(meters, cm);
    calcToImperial(meters, cm, ft, in, length);
    outputImperial(ft, in, meters, cm, length);
    cout << "Do you want to begin again?" << endl;
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
}
void inputMetric(double& meters, double& cm) {
  cout << "Meters: ";
  cin >> meters;
  cout << "Centimeters: ";
  cin >> cm;
}
void calcToImperial(double meters, double cm, double& ft, double& in,
                    double& length) {
  length = (meters + (cm / 100)) / 0.3048;
  ft = meters / 0.3048;
  in = ft / 12;
  cm = 10 * ((length - meters) * 12);
}
void outputImperial(double& meters, double& cm, double& ft, double& in,
                    double& length) {
  cout << ft << "m " << in << "cm is equivalent to " << floor(length)
       << " feet " << cm << " inches." << endl;
}
