#include <iostream>
using namespace std;

int *prtNum = new int;
void addOne(int *prtNum);
int main() {
  cout << "Enter the begining number: " << endl;
  cin >> *prtNum;
  cout << "The begining number is: " << *prtNum << endl;
  addOne(prtNum);
  cout << "The ending number is: " << *prtNum << endl;
}
// Function adding 1 to integers
void addOne(int *ptrNum) { *ptrNum = *prtNum + 1; }
