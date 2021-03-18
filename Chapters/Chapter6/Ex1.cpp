#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void readFile();

int main() { readFile(); }

void readFile() {
  ifstream numFileStream;

  numFileStream.open("Chapters/Chapter6/NumberFile.txt");
  int big, small;
  numFileStream >> big >> small;
  if (big < small) {
    int tmp = big;
    big = small;
    small = tmp;
  }
  while (!numFileStream.eof()) {
    int num;
    numFileStream >> num;
    if (num > big) big = num;
    if (num < small) small = num;
  }
  cout << "The largest number is " << big << endl;
  cout << "The smallest number is " << small << endl;

  numFileStream.close();
}
