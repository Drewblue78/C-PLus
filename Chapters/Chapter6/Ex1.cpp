#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void readFile();

int main() { readFile(); }

void readFile();
ifstream inStream;
ofstream outStream;

inStream.open("NumberFile.txt");
int big, small;
inStream >> big >> small;
cout << "The largst number is" << big << endl;
cout << "The smallest number is" << small << endl;

inStream.close();
return 0;
}

void fileReader() {
  ifstream fin;
  fin.open("ImportantFile.txt");
  string readIn;
  while (fin >> readIn) {
    cout << "_" << readIn << "_" << endl;
  }
}

// void fileReaderOrFail() {
//   ifstream fin;
//   fin.open("numberFile.txt");
//   if (fin.fail()) {
//     cout << "File not found";
//     exit(1);
//   } else {
//     string readIn;
//     while (fin >> readIn) {
//       cout << "_" << readIn << "_" << endl;
//     }
//   }
// }
// void readFile() {
//   ifstream fin;
//   fin.open("NumberFile.txt");
//   string readIn;
//   while (fin >> readIn) {
//     cout << "_" << readIn << "_" << endl;
//   }
// }
