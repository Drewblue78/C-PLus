#include <cmath>
#include <iostream>
using namespace std;

void inputImperial(double ft, double in);
void calc(double ft, double in, double meters, double cm, double tempMeters,
          double tempCentimeters);
void outputMetric(double meters, double cm, double ft, double in,
                  double tempMeters, double tempCentimeters);

int main() {
  int giveImperial() {
    double ft, in, meters, cm;
    char ans;
    do {
      cout << " Feet and inches to meters and centimeters" << endl;
      inputImperial(ft, in);
      calc(ft, in, meters, cm, tempMeters, tempCentimeters);
      outputMetric(meters, cm, ft, in);
      cout << "Do you want to begin again?" << endl;
      cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "Have a nice day. \n";
    return 0;
  }
  void inputImperial(double ft, double in) {
    cout << "Feet: ";
    cin >> ft;
    cout << "Inches: ";
    cin >> in;
  }
  void calc(double ft, double in, double meters, double cm, double tempMeters,
            double tempCentimeters) {
    // double ft = meters / 0.3048;
    // double in = meters / 0.0254;
    // cm = 100 * meters;
    // meters = ft / 0.3048;
    tempMeters = (ft + (in / 12.0)) * 0.3048;
    meters = tempMeters;
    tempCentimeters = (tempMeters * 100) - 100;
    cm = tempCentimeters;
  }
  void outputMetric(double ft, double in, double meters, double cm) {
    cout << ft << " feet " << in << " inches is equivalent to " << meters
         << " meters " << cm << " centimeters" << endl;
  }
}
