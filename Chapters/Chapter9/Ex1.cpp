#include <iostream>
using namespace std;

double *prtNum, num;
void addOne(int *prtNum);
int main() {
  prtNum = &num;
  cout << "Enter the begining number: " << endl;
  cin >> *prtNum;
  cout << "The begining number is: " << prtNum << endl;
  cout << "The ending number is: " << *prtNum << endl;
}
// Function adding 1 to integer
void addOne(int *ptrNum) { *ptrNum = *prtNum + 1; }
