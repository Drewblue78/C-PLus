#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double mpg() { const }

  char choice() {
    do {
      while (mpg()) {
        cout << "Sorry, that is not a valid choice." << endl;
        cout << "Please try again." << endl << endl << endl;
      }
      cout << "Would you like to restart ? y/n .\n" << endl;
      cin >> choice;
    } while (choice == 'y');
  }
