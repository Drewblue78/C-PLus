#include <iostream>
using namespace std;

int firstLast2(int arr[], int n);
int main() {
  int n;
  cout << "Number of Elements: ";
  cin >> n;
  int myarray[n];
  for (int i = 0; i < n; i++) {
    cin >> myarray[i];
  }

  firstLast2(myarray, n);
  return 0;
}

int firstLast2(int arr[], int n) {
  if (arr[0] == 2 || arr[n - 1] == 2) {
    cout << "True";
  }

  else {
    cout << "False";
  }
}