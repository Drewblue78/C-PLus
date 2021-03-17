#include <cmath>
#include <iostream>
using namespace std;

// Imperial to Metric

void giveImperial();
void inputImperial(double& ft, double& in);
void calcToMetric(double& ft, double& in, double& meters, double& cm);
void outputMetric(double& meters, double& cm, double& ft, double& in);

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

// Metric to Imperial

void giveMetric();
void inputMetric(double& meters, double& cm);
void calcToImperial(double meters, double cm, double& ft, double& in,
                    double& length);
void outputImperial(double& ft, double& in, double& meters, double& cm,
                    double& length);

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

// Pick which program

const string MENU =
    "Choose which program \n"
    "1) Convert Imperial to Metric - giveImperial()\n"
    "2) Convert Metric to Imperial - giveMetric()\n";

int main() {
  bool keepGoing = true;
  do {
    cout << MENU;
    int choice;
    cin >> choice;
    switch (choice) {
      case 1:
        giveImperial();
        break;
      case 2:
        giveMetric();
        break;
    }
    cout << "Again?";
    string res;
    cin >> res;
    keepGoing = tolower(res[0]) == 'y';
  } while (keepGoing);
}
