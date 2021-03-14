#include <cmath>
#include <iostream>
using namespace std;
double gravitational_force(double m1, double m2, double d);
char ans;
const double G = 6.673 * pow(10.0, -8.0);
double mass1, mass2, distance, gravity;

int main() {
  do {
    double mass1, mass2, distance;

    cout << "Enter the mass of the first body (in grams): ";
    cin >> mass1;
    cout << "Enter the mass of the second body (in grams): ";
    cin >> mass2;
    cout << "Enter the (nonzero) distance between them (in cm): ";
    cin >> distance;
    cout << "The gravitational force between the two objects is "
         << gravitational_force(mass1, mass2, distance) << " dynes.\n";
    return 0;
    { return gravity = (G * mass1 * mass2) / pow(distance, 2.0); }
    cout << "Do you want to begin again?";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
  return 0;
}