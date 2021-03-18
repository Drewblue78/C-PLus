#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void getAverage();

int main() { getAverage(); }

void getAverage() {
  ifstream numAverage;
  numAverage.open("Chapters/Chapter6/FileAverage.txt");
  double sum = 0;
  int count = 0;
  double number;
  while (numAverage >> number) {
    count++;
    sum += number;
  }
  double average = sum / count;

  cout << "The average of the numbers in the file is " << average << endl;
  numAverage.close();
}
