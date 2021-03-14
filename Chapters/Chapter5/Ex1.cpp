#include <cmath>
#include <iostream>
using namespace std;
double calcAvg(double s1, double s2, double s3, double s4);
double calcStandardDeviation(double s1, double s2, double s3, double s4,
                             double average, int n);

int main() {
  double s1, s2, s3, s4;
  double avg, sdeviation, standardDeviation;
  char ans;
  do {
    avg = calcAvg(s1, s2, s3, s4);
    sdeviation = calcStandardDeviation(s1, s2, s3, s4, avg, 4);
    cout << "Enter s1:";
    cin >> s1;
    cout << "Enter s2:";
    cin >> s2;
    cout << "Enter s3:";
    cin >> s3;
    cout << "Enter s4:";
    cin >> s4;

    cout << "Standard deviation:" << sdeviation << endl;
    cout << "Do you want to begin again?";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
  double Average(double s1, double s2, double s3, double s4) {
    return (s1 + s2 + s3 + s4) / 4;
  }
  double calcStandardDeviation(double s1, double s2, double s3, double s4,
                               double mean, int n) {
    double sd;
    sd = (pow((s1 - mean), 2) + pow((s2 - mean), 2) + pow((s3 - mean), 2) +
          pow((s4 - mean), 2)) /
         n;
    sd = sqrt(sd);

    return sd;
  }