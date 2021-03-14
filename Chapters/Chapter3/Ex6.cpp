// F^b = V * y;
// sphere (4/3) Pi r^2;

#include <cmath>
#include <iostream>
using namespace std;
int main() {
  char ans;
  do {
    double weight, radius, Fb;
    // User input
    cout << "Please enter the weight in pounds:";
    cin >> weight;
    cout << "Please enter the radius in feet: ";
    cin >> radius;

    // Compute  buoyant force
    Fb = 62.4 * ((4 * 3.14 * radius * radius * radius) / 3);

    // Will it float or sink?
    if (Fb >= weight)
      cout << "The sphere will float in water \n";
    else
      cout << "The sphere will sink in water \n";
    cout << "Do you want to begin again?";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
  return 0;
}
