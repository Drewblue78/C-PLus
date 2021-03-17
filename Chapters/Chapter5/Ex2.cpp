#include <cmath>
#include <iostream>
using namespace std;

void giveImperial();
void inputImperial(double& ft, double& in);
void calcToMetric(double& ft, double& in, double& meters, double& cm);
void outputMetric(double& meters, double& cm, double& ft, double& in);

int main() { giveImperial(); }
void giveImperial() {
  double ft, in, meters, cm;
  char ans;
  do {
    cout << "Feet and inches to meters and centimeters" << endl;
    inputImperial(ft, in);
    calcToMetric(ft, in, meters, cm);
    outputMetric(meters, cm, ft, in);
    cout << "Do you want to begin again?" << endl;
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
}
void inputImperial(double& ft, double& in) {
  cout << "Feet: ";
  cin >> ft;
  cout << "Inches: ";
  cin >> in;
}
void calcToMetric(double& ft, double& in, double& meters, double& cm) {
  meters = (ft + (in / 12.0)) * 0.3048;
  cm = (meters * 100) - 100;
}
void outputMetric(double& ft, double& in, double& meters, double& cm) {
  cout << meters << " feet " << cm << " inches is equivalent to " << (floor(ft))
       << "m " << (floor(in)) << "cm." << endl;
}