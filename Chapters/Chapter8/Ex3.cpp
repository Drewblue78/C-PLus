#include <iostream>
using namespace std;

void initials(const string& name) {
  if (name.length() == 0) return;

  cout << (char)toupper(name[0]);

  for (int i = 1; i < name.length() - 1; i++)
    if (name[i] == ' ') cout << " " << (char)toupper(name[i + 1]);
}

int main() {
  string firstName, lastName;
  char ans;
  do {
    cout << "Write the first name please " << endl;
    cin >> firstName;
    cout << "Write the last name please " << endl;
    cin >> lastName;
    cout << "The initials are ";
    initials(firstName);
    cout << ".";
    initials(lastName);
    cout << ".";
    cout << "\n";
    cout << "Do you want to begin again?";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
  return 0;
}