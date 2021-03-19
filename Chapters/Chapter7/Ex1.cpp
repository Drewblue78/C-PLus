#include <iostream>
using namespace std;

int firstLast2(int arr[], int n);
int main() {
  int n;
  char ans;
  do {
    cout << "Number of Elements: ";
    cin >> n;
    int myarray[n];
    for (int i = 0; i < n; i++) {
      cin >> myarray[i];
    }

    firstLast2(myarray, n);
    return 0;

    cout << "Do you want to begin again?";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
}
int firstLast2(int arr[], int n) {
  if (arr[0] == 2 || arr[n - 1] == 2) {
    cout << "True";
    return true;
  } else {
    cout << "False";
    return false;
  }
}