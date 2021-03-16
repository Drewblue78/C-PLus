#include <cmath>
#include <iostream>
#include <string>
using namespace std;
void inputData(float &feet, float &inches);
double calcFeetInches(float feet, float inches, float &meters, float &cm);
void output(float meters, float cm, float feet, float inches);

int main() {
  float feet, inches, meters, cm;
  char answer;
  do {
    cout << " Feet and inches to meters and centimeters" << endl;
    inputData(feet, inches);
    calcFeetInches(feet, inches, meters, cm);
    outputMetric(meters, cm, feet, inches);
    cout << "To repeat calculation enter 'y' or 'Y'" << endl;
    cin >> answer;

  } while (answer == 'y' || answer == 'Y');

  return 0;
}
void inputData(float &feet, float &inches) {
  cout << "Feet: ";
  cin >> feet;
  cout << "Inches: ";
  cin >> inches;
}

double calcFeetInches(float feet, float inches, float &meters, float &cm) {
  meters = feet * 0.3048 + (inches * 0.0254);
  cm = (feet * 30.48 + inches * 2.54);
}
void output(float feet, float inches, float &meters, float centimeters) {
  cout << feet << " feet " << inches << " inches is equivalent to " << meters
       << " meters " << centimeters << " centimeters" << endl;
}